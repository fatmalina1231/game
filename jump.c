#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "menu.h"
#include "personnage.h"
#include "background.h"
#include "jump.h"
#include "portal.h"
#include "fireball.h"
#include "score.h"
#include "zombie.h"
#include "vie.h"
#include "collision.h"

int jumpcollisionstage1_1(int x,int y)
{
int Tx[3];
int Ty[3];
int i;
Tx[0]=200;
Ty[0]=310;
Tx[1]=410;
Ty[1]=230;
Tx[2]=600;
Ty[2]=150;
for(i=0;i<3;i++)
{
if(x==Tx[i] && y==Ty[i])
{
return 1;	
}	

}	
return 0;

}

int jumpcollisionstage1_12(int x,int y)
{
int Tx[3];
int Ty[3];
int i;
Tx[0]=1000;
Ty[0]=310;
Tx[1]=1210;
Ty[1]=230;
Tx[2]=1400;
Ty[2]=150;
for(i=0;i<3;i++)
{
if(x==Tx[i] && y==Ty[i])
{
return 1;	
}	

}	
return 0;

}

int jumpcollisionstage2_1(int x,int y)
{
if(x==100 && y==230)
{
return 1;
}
return 0;

}

int jumpcollisionstage1_4(int x,int y)
{
int i;
int Tx[3];
int Ty[3];
Tx[0]=200;
Ty[0]=210;
Tx[1]=0;
Ty[1]=0;
Tx[2]=0;
Tx[2]=0;
for(i=0;i<3;i++)
{
if(x==Tx[i] && y==Ty[i])
{
return 1;	
}	

}	
return 0;
}


int jumpcollisionstage1_3(int x,int y)
{
int i;	
int Tx[3];
int Ty[3];
Tx[0]=90;
Ty[0]=290;
Tx[1]=350;
Ty[1]=290;
Tx[2]=410;
Ty[2]=210;
for(i=0;i<3;i++)
{
if(x==Tx[i] && y==Ty[i])
{	
return 1;	
}	
}	
return 0;
}


int jumpin2(personnage *p,background *b,int x,int y,int jump,SDL_Surface* screen,int d,portal *po,int *c,portal *po2,int *c1,fireball *f1,fireball *f2,star *s1,star *s2,star *s3,int ss1,int ss2,int ss3,zombie* z,coin* co,int scorenb,vie* v,int collision,int collisionexplo,int collision1,int collision2,int collisionexplo2,obstacle* ob,int contact,int contact1,ghost *g,int vision)  
{
int j;
int i;
int r=0;
if(jump==2)
{
for(j=0;j<4;j++)
{
SDL_Delay(10);
p->persopos.x+=30;             
p->persopos.y-=20;
if(d==0)
{
affichezstage1_1(b,screen);
if(ss1==1)
{
affichezstar(s1,screen);	
}
if(ss2==1)
{
affichezstar(s2,screen);	
}
if(ss3==1)
{
affichezstar(s3,screen);	
}
}
if(d==1)
{
affichezstage1_2(b,screen);
*c=affichezportal(po,*c,screen);
*c1=affichezportal(po2,*c,screen);
if(ss1==1)
{
affichezstar(s1,screen);	
}
if(ss2==1)
{
affichezstar(s2,screen);	
}
if(ss3==1)
{
affichezstar(s3,screen);	
}
}
if(d==2)
{
affichezstage1_3(b,screen);
if(collisionexplo==0)
{
movezombie(z,screen);
}
affichezfireball(f1,screen);
affichezfireball(f2,screen);	
}
if(d==3)
{
affichezstage1_4(b,screen);
if(collisionexplo2==0)
{	
movezombie2(z,screen);
}
affichezfireball(f1,screen);
affichezfireball(f2,screen);
}
if(d==4)
{
affichezstage1_5(b,screen);
afficherobstacle1(ob,screen,contact);
afficherobstacle2(ob,screen,contact1);		
}
//100 230
if(d==5)
{
affichezstage2_1(b,screen);
affichezplatform(b,screen);
affichezghost(g,screen,vision,p);
}
affichezcoin(co,screen);
affichezvie(v,screen,&collision,&collision1,&collision2);
affichezcross(co,screen);
affichezscoreboard(co,screen,scorenb);
monterdujump(p,screen);

SDL_Flip(screen);
}
printf("%d %d \n",p->persopos.x,p->persopos.y);
if(d==0)
{
r=jumpcollisionstage1_12(p->persopos.x,p->persopos.y);
if(r!=1)
{
r=jumpcollisionstage1_1(p->persopos.x,p->persopos.y);	
}	
}
if(d==2)
{
r=jumpcollisionstage1_3(p->persopos.x,p->persopos.y);	
}
if(d==3)
{
r=jumpcollisionstage1_4(p->persopos.x,p->persopos.y);	
}
if(d==5)
{
r=jumpcollisionstage2_1(p->persopos.x,p->persopos.y);	
}	
if(r==1)
{
return 0;	
}
else                                  // D==0 veux dire c'est le stage 1-1	                                 // on va faire pour D==1 et D==2 jusqu'a la fin du jeu 
{	
for(j=0;j<4;j++)
{
SDL_Delay(80);	
p->persopos.y+=20;
if(d==0)
{
affichezstage1_1(b,screen);
if(ss1==1)
{
affichezstar(s1,screen);	
}
if(ss2==1)
{
affichezstar(s2,screen);	
}
if(ss3==1)
{
affichezstar(s3,screen);	
}
}
if(d==1)
{
affichezstage1_2(b,screen);
*c=affichezportal(po,*c,screen);
*c1=affichezportal(po2,*c,screen);
if(ss1==1)
{
affichezstar(s1,screen);	
}
if(ss2==1)
{
affichezstar(s2,screen);	
}
if(ss3==1)
{
affichezstar(s3,screen);	
}
}
if(d==2)
{
affichezstage1_3(b,screen);
affichezfireball(f1,screen);
affichezfireball(f2,screen);
if(collisionexplo==0)
{
movezombie(z,screen);
}
}
if(d==3)
{
affichezstage1_4(b,screen);	
if(collisionexplo2==0)
{	
movezombie2(z,screen);
}
affichezfireball(f1,screen);
affichezfireball(f2,screen);
}
if(d==4)
{
affichezstage1_5(b,screen);
afficherobstacle1(ob,screen,contact);
afficherobstacle2(ob,screen,contact1);		
}
if(d==5)
{
affichezstage2_1(b,screen);
affichezplatform(b,screen);
affichezghost(g,screen,vision,p);
}	
affichezcoin(co,screen);
affichezvie(v,screen,&collision,&collision1,&collision2);
affichezcross(co,screen);
affichezscoreboard(co,screen,scorenb);
decentedujump(p,screen,j);
SDL_Flip(screen);
}
printf("%d %d \n",p->persopos.x,p->persopos.y);
}
 }

return 0;
 }




int jumpin(	personnage *p,background *b,int x,int y,int jump,SDL_Surface* screen,int d,portal *po,int *c,portal *po2,int *c1,fireball *f1,fireball *f2,star *s1,star *s2,star *s3,int ss1,int ss2,int ss3,zombie* z,coin* co,int scorenb,vie *v,int collision,int collisionexplo,int collision1,int collision2,int collisionexplo2,obstacle* ob,int contact,int contact1,ghost *g,int vision,int *collisionplatform)  
{
int j;
int i=0;
int r=0;
if(jump==1)
{
for(j=0;j<4;j++)
{
SDL_Delay(30);
p->persopos.x+=10;             
p->persopos.y-=20;
*collisionplatform=collideplatform(p,b);
if(d==0)
{
affichezstage1_1(b,screen);
if(ss1==1)
{
affichezstar(s1,screen);	
}
if(ss2==1)
{
affichezstar(s2,screen);	
}
if(ss3==1)
{
affichezstar(s3,screen);	
}
}
if(d==1)
{
affichezstage1_2(b,screen);
*c=affichezportal(po,*c,screen);
*c1=affichezportal(po2,*c,screen);
if(ss1==1)
{
affichezstar(s1,screen);	
}
if(ss2==1)
{
affichezstar(s2,screen);	
}
if(ss3==1)
{
affichezstar(s3,screen);	
}
}
if(d==2)
{
affichezstage1_3(b,screen);
affichezfireball(f1,screen);
affichezfireball(f2,screen);
if(collisionexplo==0)
{
movezombie(z,screen);
}	
}
if(d==3)
{
affichezstage1_4(b,screen);	
if(collisionexplo2==0)
{	
movezombie2(z,screen);
}
affichezfireball(f1,screen);
affichezfireball(f2,screen);
}
if(d==4)
{
affichezstage1_5(b,screen);
afficherobstacle1(ob,screen,contact);
afficherobstacle2(ob,screen,contact1);		
}
if(d==5)
{
affichezstage2_1(b,screen);
affichezplatform(b,screen);
affichezghost(g,screen,vision,p);
}	
affichezcoin(co,screen);
affichezcross(co,screen);
affichezvie(v,screen,&collision,&collision1,&collision2);
affichezscoreboard(co,screen,scorenb);
monterdujump(p,screen);
SDL_Flip(screen);
}

printf("%d %d \n",p->persopos.x,p->persopos.y);
if(d==0)
{
r=jumpcollisionstage1_12(p->persopos.x,p->persopos.y);
if(r!=1)
{
r=jumpcollisionstage1_1(p->persopos.x,p->persopos.y);	
}
}
if(d==2)
{
r=jumpcollisionstage1_3(p->persopos.x,p->persopos.y);	
}
if(d==3)
{
r=jumpcollisionstage1_4(p->persopos.x,p->persopos.y);	
}
if(d==5)
{
r=jumpcollisionstage2_1(p->persopos.x,p->persopos.y);
if(*collisionplatform==1)
{
r=1;
}	
}	
if(r==1)
{
return 0;	
}
else                                  // D==0 veux dire c'est le stage 1-1	                                 // on va faire pour D==1 et D==2 jusqu'a la fin du jeu 
{	
for(j=0;j<4;j++)
{
SDL_Delay(80);
*collisionplatform=collideplatform(p,b);	
p->persopos.y+=20;
if(d==0)
{
affichezstage1_1(b,screen);
if(ss1==1)
{
affichezstar(s1,screen);	
}
if(ss2==1)
{
affichezstar(s2,screen);	
}
if(ss3==1)
{
affichezstar(s3,screen);	
}
}
if(d==1)
{
affichezstage1_2(b,screen);
*c=affichezportal(po,*c,screen);
*c1=affichezportal(po2,*c,screen);
if(ss1==1)
{
affichezstar(s1,screen);	
}
if(ss2==1)
{
affichezstar(s2,screen);	
}
if(ss3==1)
{
affichezstar(s3,screen);	
}
}
if(d==2)
{

affichezstage1_3(b,screen);
affichezfireball(f1,screen);
affichezfireball(f2,screen);
if(collisionexplo==0)
{
movezombie(z,screen);
}	
}
if(d==3)
{
affichezstage1_4(b,screen);	
if(collisionexplo2==0)
{	
movezombie2(z,screen);
}
affichezfireball(f1,screen);
affichezfireball(f2,screen);
}
if(d==4)
{
affichezstage1_5(b,screen);
afficherobstacle1(ob,screen,contact);
afficherobstacle2(ob,screen,contact1);		
}
if(d==5)
{
affichezstage2_1(b,screen);
affichezplatform(b,screen);
affichezghost(g,screen,vision,p);
}
affichezcoin(co,screen);
affichezcross(co,screen);
affichezvie(v,screen,&collision,&collision1,&collision2);
affichezscoreboard(co,screen,scorenb);
decentedujump(p,screen,j);
SDL_Flip(screen);
}
printf("%d %d \n",p->persopos.x,p->persopos.y);
}
 }
*collisionplatform=collideplatform(p,b);
return 0;
 }

