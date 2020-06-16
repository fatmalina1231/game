#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>
#include "menu.h"
#include "personnage.h"
#include "background.h"
#include "jump.h"
#include "portal.h"
#include "loading.h"
#include "fireball.h"
#include "score.h"
#include "zombie.h"
#include "pause.h"
#include "vie.h"
#include "collision.h"
#include "enigme.h"
#include "temp.h"
#include "attaque.h"
int main()
{

personnage p;
portal po;
int mov=0;
int deathocc=0;
int collisionplatform=0;
int r1=0;
int collisionexplo=0;
int collisionexplo2=0;
int collisionfireball1=0;
int collisionfireball2=0;
int pose=0;
int apause=1;
int ip=0;
pause pau2;
attaque aa;
initattaque(&aa,&p);

enigme e;
int enigmeon=0;
int eni=0;
//eniggmmmme


vie v;
star s1;
star s2;
star s3;	
int f=0;
int attaquee=0;
loadingscreen l;
portal po2;
zombie z;
int d=0;
temp t;
int loading=0;
background b;
int jump=0;
fireball f1;
int contact=0;
fireball f2;
int j=0;   //les variables pour le portale marche :p ez 
int j1=0;
coin co;
SDL_Surface *screen;
int r;
int quit=1;
int i=0;
SDL_Surface* image;
SDL_Rect rect;
obstacle ob;
int contact1;
int vision=0;
ghost gg;
char menuuu[20];
 SDL_Init(SDL_INIT_VIDEO);
 start1 :
 start :
 initghost(&gg);
 contact=0;
 contact1=0;
 initobstacle(&ob);
 deathocc=0;
 collisionexplo=0;
 initpersonnage(&p);
 Initvie(&v);
 int collision=0;
initbackground(&b);
initportal(&po);
initcoin(&co);
initpause(&pau2);
explo ee;
initexplo(&ee);
initzombie(&z);
initscoreboard(&co);  //le score board et une variable entier pour incrementer le score
int scorenb=0;
inittemp(&t);
int temp1=0;
initportal(&po2);
Initstar1stage1_1(&s1);   //initialisation de trois etoiles pour le premier stage1-1 les entiers c'est ez c'est pour verifier si on blit ou pas 
int ss1=1;
Initstar2stage1_1(&s2);
int ss2=1;
Initstar3stage1_1(&s3);
int ss3=1;
initloading(&l);
int ii=0;	
int pos=0;
int quit1=0;
int occ1=0;
menu m;
int occ=0;
collision=0;
collisionfireball2=0;
collisionfireball1=0;
initenigme(&e);
initfireball1stage1_3(&f1);
initfireball2stage1_3(&f2);
po2.portalpos.x=0;
po2.portalpos.y=320;

/////////////////////////////////////// for personnage 1
//// the other for personnage 2

personnage p4;
portal po4;
int mov4=0;
int deathocc4=0;
int collisionplatform4=0;
int r14=0;
int collisionexplo4=0;
int collisionexplo24=0;
int collisionfireball14=0;
int collisionfireball24=0;
int pose4=0;
int apause4=1;
int ip4=0;
pause pau24;
attaque aa4;
initattaque(&aa4,&p4);

enigme e4;
int enigmeon4=0;
int eni4=0;
//eniggmmmme

star s14;
vie v4;
star s24;
star s34;	
int f4=0;
int attaquee4=0;
loadingscreen l4;
portal po24;
zombie z4;
int d4=0;
int loading4=0;
background b4;
int jump4=0;
fireball f14;
int contact4=0;
fireball f24;
int j4=0;   //les variables pour le portale marche :p ez 
int j14=0;
coin co4;
int r4;
int i4=0;
obstacle ob4;
int contact14;
int vision4=0;
ghost gg4;

 initghost(&gg4);
 contact4=0;
 contact14=0;
 initobstacle(&ob4);
 deathocc4=0;
 collisionexplo4=0;
 initpersonnage2(&p4);
 Initvie2(&v4);
 int collision4=0;
initbackground2(&b4);
initportal2(&po4);
initcoin2(&co4);
initpause2(&pau24);
explo ee4;
initexplo2(&ee4);
initzombie2(&z4);
initscoreboard2(&co4);  //le score board et une variable entier pour incrementer le score
int scorenb4=0;

initportal2(&po24);
Initstar1stage1_12(&s14);   //initialisation de trois etoiles pour le premier stage1-1 les entiers c'est ez c'est pour verifier si on blit ou pas 
int ss14=1;
Initstar2stage1_12(&s24);
int ss24=1;
Initstar3stage1_12(&s34);
int ss34=1;
initloading2(&l4);
int ii4=0;	
int pos4=0;
int quit14=0;
int occ14=0;
int occ4=0;
collision4=0;
collisionfireball24=0;
collisionfireball14=0;
initenigme2(&e4);
initfireball1stage1_32(&f14);
initfireball2stage1_32(&f24);
po24.portalpos.x=800;
po24.portalpos.y=320;
int multiplyer=0;

quit1=0;
while(quit1==0)
{



quit=1;	
if(r!=11)
{
r=menuu(m,screen);
}
                 //r==7 HEEEEp
if(r==7)
{
r=help(m,screen);	
}
if(r==8)
{
r=start(m,screen);
}                                   //r==9 option
if(r==11)
{
quit1=1;	
}
if(r==10)
{
r=quiting(m,screen);
}
if(r==9)
{
r=option1(m,screen);
multiplyer=1;	
}	                                   //r==8 start 
if(r==12)
{
quit1=1;	
}	                 //r==10 quit;
printf("r est %d \n",r);
}
if(multiplyer==1)
{
screen=SDL_SetVideoMode(1580,561,32,SDL_HWSURFACE);
d4=0;
}
if(multiplyer==0)
{
screen=SDL_SetVideoMode(800,561,32,SDL_HWSURFACE);
d4=7;	
}
affichezloading(&l,screen);

SDL_EnableKeyRepeat(20,20);


printf("%d ",r);
quit1=1;
if(r==11)
{
//d=4;
collisionplatform=1;
//p.persopos.y=370;
while(quit==1)
{







 // for testing 

///////////////////////////////////////////////////Stage1-1/////////////////////////////////////////////////


i=inputperso(&p,i,&jump,&pose,&attaquee);
i4=inputperso2(&p4,i4,&jump4,&pose4,&attaquee4);
if(d==0)
{
 Initvie(&v);

if(attaquee==0)
{
initattaque(&aa,&p);	
}



printf("%d  \n",i);
if(p.persopos.x>160 && p.persopos.y!=310 && p.persopos.y!=230 && p.persopos.y!=150 && p.persopos.y!=70)
{
p.persopos.x=160;	
}
if(p.persopos.x>=370 && p.persopos.y!=230 && p.persopos.y!=150 && p.persopos.y!=70) 
{
p.persopos.x=370;	
}
if(p.persopos.x<=400 && p.persopos.y==230)
{
p.persopos.x=400;	
}	
if(p.persopos.x<=190 && p.persopos.y==310)
{
p.persopos.x=190;	                                                            
}
if(p.persopos.x>=560 && p.persopos.y!=150 && p.persopos.y!=70)                 //STAGE 1---1 
{
p.persopos.x=560;	
}
if(p.persopos.x<=590 && p.persopos.y==150)
{
p.persopos.x=590;	
}


printf("x=%d y=%d \n",p.persopos.x,p.persopos.y);
if(jump==2)
{
jump=jumpin2(&p,&b,p.persopos.x,p.persopos.y,jump,screen,d,&po,&j,&po2,&j1,&f1,&f2,&s1,&s2,&s3,ss1,ss2,ss3,&z,&co,scorenb,&v,collision,collisionfireball1,collisionfireball2,collisionexplo2,&ob,contact,contact1,&gg,vision);
}
if(jump==1)
{ 
jump=jumpin(&p,&b,p.persopos.x,p.persopos.y,jump,screen,d,&po,&j,&po2,&j1,&f1,&f2,&s1,&s2,&s3,ss1,ss2,ss3,&z,&co,scorenb,&v,collision,collisionexplo,collisionfireball1,collisionfireball2,collisionexplo2,&ob,contact,contact1,&gg,vision,&collisionplatform);
}


if(collidestar(&p,&s2)==1)
{
if(ss2==1)
{	
scorenb++;
}
ss2=0;	
}
if(collidestar(&p,&s3)==1)
{
if(ss3==1)
{	
scorenb++;
}
ss3=0;	
}
if(collidestar(&p,&s1)==1)
{
if(ss1==1)
{	
scorenb++;
}
ss1=0;	                                //eating stars :p for stage 1-1
}

if(p.persopos.x>740 && p.persopos.y==150)
{
d++;
ss1=1;
ss2=1;
ss3=1;
changescoinstage1_2(&s1,&s2,&s3);
affichezstage1_2(&b,screen);
affichezloading(&l,screen);
SDL_Flip(screen);
if(d==1)
{                           //change to stage 1-2
p.persopos.x=0;	
p.persopos.y=160;
}
affichezloading(&l,screen);
}	
affichezstage1_1(&b,screen);
if(ss1==1)
{
affichezstar(&s1,screen);	
}
if(ss2==1)
{
affichezstar(&s2,screen);	
}
if(ss3==1)
{ 	
affichezstar(&s3,screen);	
}
affichezcoin(&co,screen);
affichezcross(&co,screen);
affichezscoreboard(&co,screen,scorenb);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
affichezattaque(&aa,&p,screen,&attaquee);
affichezpersonnage(&p,i,screen);
SDL_Delay(30);
SDL_Flip(screen);

while(pose==1)
{	
printf("%d %d \n",ip,apause);
ip=inputpause(&pau2,&apause,ip,&pose,&quit);
affichezpause(&pau2,screen,ip);
if(quit==0)
{
 r=7;	
quit1=0;
goto start;	
}
SDL_Flip(screen);
SDL_Delay(40);	
}
}





/////////////////////////////////////////STAGE 1-1/////////////////////////////////////////////////////////

















if(d==1)
{
if(attaquee==0)
{
initattaque(&aa,&p);	
}


if(p.persopos.x>530 && p.persopos.y==160)
{
p.persopos.x=30;
p.persopos.y=390;	
}
if(p.persopos.x>190 && p.persopos.x<290 && p.persopos.y <= 160)
{
collision=1;	
for(i=0;i<3;i++)
{
SDL_Delay(80);
p.persopos.y+=20;
affichezstage1_2(&b,screen);
affichezcoin(&co,screen);
affichezcross(&co,screen);
affichezscoreboard(&co,screen,scorenb);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
j=affichezportal(&po,j,screen);
j=affichezportal(&po2,j,screen);
decentedujump(&p,screen,i);
if(ss1==1)
{
affichezstar(&s1,screen);	
}
if(ss2==1)
{
affichezstar(&s2,screen);	
}
if(ss3==1)
{ 	
affichezstar(&s3,screen);	
}
SDL_Flip(screen);
}                                                  //STAAAAAGE 1-2
if(p.persopos.y==220)
{

affichezloading(&l,screen);	
SDL_Delay(100);	
p.persopos.x=30;	
p.persopos.y=160;	
}	
}

printf("x=%d y=%d \n",p.persopos.x,p.persopos.y);
if(jump==2)
{
jump=jumpin2(&p,&b,p.persopos.x,p.persopos.y,jump,screen,d,&po,&j,&po2,&j1,&f1,&f2,&s1,&s2,&s3,ss1,ss2,ss3,&z,&co,scorenb,&v,collision,collisionexplo,collisionfireball1,collisionfireball2,collisionexplo2,&ob,contact,contact1,&gg,vision);
}
if(jump==1)
{
jump=jumpin(&p,&b,p.persopos.x,p.persopos.y,jump,screen,d,&po,&j,&po2,&j1,&f1,&f2,&s1,&s2,&s3,ss1,ss2,ss3,&z,&co,scorenb,&v,collision,collisionexplo,collisionfireball1,collisionfireball2,collisionexplo2,&ob,contact,contact1,&gg,vision,&collisionplatform);
}

if(p.persopos.x>460 && p.persopos.y==390)
{




p.persopos.x=0;
p.persopos.y=370;
collision=collide(&p,&z);
SDL_Flip(screen);
affichezloading(&l,screen);

d++;
occ=0;
do
{

if(eni==0)
{
	
affichezroom(&e,screen);
SDL_Flip(screen);
}	
printf("%d \n",eni);	
eni=inputenigme(&e);

if(eni==1)
{
affichezletter(&e,screen);
SDL_Flip(screen);
}
if(eni==2)
{
	
int quit2;
quit2=0;	
affichezbox(&e,screen);
affichezletters(&e,screen);
SDL_Flip(screen);
if(occ1==1)
{
quit2=1;
eni=0;	
}
while(quit2==0)
{
occ=inputcoffre(&e,screen,occ,&quit2,&eni);
printf("occ=%d \n",occ);
SDL_Delay(40);
}
}


while(eni==3)
{
ii=inputenigme2(&e);	
affichezboxopen(&e,screen);
SDL_Flip(screen);
if(ii==1)
{
for(j=0;j<4;j++)
{
affichezdooropen(&e,screen,j);
SDL_Flip(screen);
SDL_Delay(80);
}
enigmeon=1;
eni=4;	
}
}

}while(enigmeon==0);


	
}

affichezstage1_2(&b,screen);
if(collidestar(&p,&s1)==1)
{
if(ss1==1)
{	
scorenb++;
}
ss1=0;
	                                //eating stars :p for stage 1-1
}
if(collidestar(&p,&s2)==1)
{
if(ss2==1)
{	
scorenb++;
}
ss2=0;	
}
if(collidestar(&p,&s3)==1)
{
if(ss3==1)
{	
scorenb++;
}
ss3=0;	
}
affichezcoin(&co,screen);
affichezcross(&co,screen);
affichezscoreboard(&co,screen,scorenb);

affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
affichezgameover(&v,screen,&d,&quit1,&r,&deathocc);
if(deathocc==1)
{
goto start1;	
}

if(ss1==1)
{
affichezstar(&s1,screen);	
}
if(ss2==1)
{
affichezstar(&s2,screen);	
}
if(ss3==1)
{ 	
affichezstar(&s3,screen);	
}
affichezattaque(&aa,&p,screen,&attaquee);
affichezpersonnage(&p,i,screen);
affichertemp(&t,screen,temp1);
j=affichezportal(&po,j,screen);
j=affichezportal(&po2,j,screen);
SDL_Delay(80);

SDL_Flip(screen);
while(pose==1)
{	
printf("%d %d \n",ip,apause);

ip=inputpause(&pau2,&apause,ip,&pose,&quit);
affichezpause(&pau2,screen,ip);
if(quit==0)
{
 r=7;	
quit1=0;
goto start;	
 }

SDL_Delay(10);	
}
}
//////////////////////////////////****************************////////////////////
////////////////////////////////***********************/////////////////////////////////STAGE 1-2

if(d==5)
{

if(p.persopos.x>300 )
{
vision=1;	
}
if(p.persopos.x<300)
{
vision=0;
}
if(attaquee==0)
{
initattaque(&aa,&p);	
}

if(jump==2)
{
jump=jumpin2(&p,&b,p.persopos.x,p.persopos.y,jump,screen,d,&po,&j,&po2,&j1,&f1,&f2,&s1,&s2,&s3,ss1,ss2,ss3,&z,&co,scorenb,&v,collision,collisionexplo,collisionfireball1,collisionfireball2,collisionexplo2,&ob,contact,contact1,&gg,vision);
}
if(jump==1)
{
jump=jumpin(&p,&b,p.persopos.x,p.persopos.y,jump,screen,d,&po,&j,&po2,&j1,&f1,&f2,&s1,&s2,&s3,ss1,ss2,ss3,&z,&co,scorenb,&v,collision,collisionexplo,collisionfireball1,collisionfireball2,collisionexplo2,&ob,contact,contact1,&gg,vision,&collisionplatform);
}
if(p.persopos.x>770 && p.persopos.y==310)
{
p.persopos.x=0;
p.persopos.y=310;
changeposplatform(&b);
/*r1=enigme4(screen);*/
d++;

affichezloading(&l,screen);	
SDL_Flip(screen);	
}
if(p.persopos.x>585 && p.persopos.y==230)
{
for(i=0;i<4;i++)
{
p.persopos.y+=20;
affichezstage2_1(&b,screen);
affichezcoin(&co,screen);
affichertemp(&t,screen,temp1);
affichezscoreboard(&co,screen,scorenb);
affichezplatform(&b,screen);
collisionplatform=collideplatform(&p,&b);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
affichezghost(&gg,screen,vision,&p);
decentedujump(&p,screen,i);	
SDL_Flip(screen);
}
}




if(collisionplatform==0 && p.persopos.y==150)
{

for(i=0;i<4;i++)
{
p.persopos.y+=20;
affichezstage2_1(&b,screen);
affichezcoin(&co,screen);
affichezscoreboard(&co,screen,scorenb);
affichezplatform(&b,screen);
affichertemp(&t,screen,temp1);
collisionplatform=collideplatform(&p,&b);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
affichezghost(&gg,screen,vision,&p);
decentedujump(&p,screen,i);	
SDL_Flip(screen);
}
if(p.persopos.x>=200 && p.persopos.x<=460 && p.persopos.y<150 && collisionplatform==0)
{
affichezloading(&l,screen);
p.persopos.x=0;
p.persopos.y=310;	
collision=1;
}

}


if((p.persopos.x>=200 && p.persopos.x<=460) && p.persopos.y==230)
{
collision=1;	
for(i=0;i<2;i++)
{
p.persopos.y+=20;
affichezstage2_1(&b,screen);
affichezcoin(&co,screen);
affichertemp(&t,screen,temp1);
affichezscoreboard(&co,screen,scorenb);
affichezplatform(&b,screen);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
affichezghost(&gg,screen,vision,&p);
decentedujump(&p,screen,i);	

SDL_Flip(screen);
}

affichezloading(&l,screen);
p.persopos.x=0;
p.persopos.y=310;	
}

affichezstage2_1(&b,screen);
affichezcoin(&co,screen);
affichertemp(&t,screen,temp1);
printf("%d collision dazdzadza \n",collisionplatform);
collisionplatform=collideplatform(&p,&b);
affichezcross(&co,screen);
affichezattaque(&aa,&p,screen,&attaquee);
affichezscoreboard(&co,screen,scorenb);
affichezplatform(&b,screen);
affichezgameover(&v,screen,&d,&quit1,&r,&deathocc);

if(collisionplatform==1 && p.persopos.y==150)
{
p.persopos.x+=mov;	
if(b.platformpos.x<=200)
{	
mov=5;	
}
if(b.platformpos.x>=400)
{
mov=-5;	
}
}

affichezghost(&gg,screen,vision,&p);
affichezpersonnage(&p,i,screen);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
printf("La positio du personnage x est %d et y est %d \n",p.persopos.x,p.persopos.y);
if(p.persopos.x<80 && p.persopos.y==230)
{
for(i=0;i<4;i++)
{
p.persopos.y+=20;
affichezstage2_1(&b,screen);
affichezcoin(&co,screen);
affichezscoreboard(&co,screen,scorenb);
affichezplatform(&b,screen);
affichertemp(&t,screen,temp1);
collisionplatform=collideplatform(&p,&b);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
affichezghost(&gg,screen,vision,&p);
decentedujump(&p,screen,i);	
SDL_Flip(screen);
}	
}
if(p.persopos.x<590 && p.persopos.x>400 && p.persopos.y==310)
{
p.persopos.x=590;	
}
if(p.persopos.x>60 && p.persopos.x<300 && p.persopos.y==310)
{
p.persopos.x=60;	
}
collisionplatform=collideplatform(&p,&b);

SDL_Flip(screen);

while(pose==1)
{	
printf("%d %d \n",ip,apause);

ip=inputpause(&pau2,&apause,ip,&pose,&quit);
affichezpause(&pau2,screen,ip);
if(quit==0)
{
 r=7;	
quit1=0;
goto start;	
 }
SDL_Flip(screen);
SDL_Delay(10);
}	
}


if (d==6)
{


affichezstage2_2(&b,screen);
affichezpersonnage(&p,i,screen);
affichezplatform2(&b,screen);
affichertemp(&t,screen,temp1);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
SDL_Flip(screen);
while(pose==1)
{	
printf("%d %d \n",ip,apause);

ip=inputpause(&pau2,&apause,ip,&pose,&quit);
affichezpause(&pau2,screen,ip);
if(quit==0)
{
 r=7;	
quit1=0;
goto start;	
 }
SDL_Flip(screen);
SDL_Delay(10);
}	
}	





if(d==2)
{
printf("x=%d y=%d \n",p.persopos.x,p.persopos.y);
if(attaquee==0)
{
initattaque(&aa,&p);	
}

if(p.persopos.x>=190 && p.persopos.x<210 && p.persopos.y==370)
{
p.persopos.x=210;	
}	
if(p.persopos.x>50 && p.persopos.x<190 && p.persopos.y==370)
{
p.persopos.x=50;	
}
if(p.persopos.x>310 && p.persopos.y==370)
{
p.persopos.x=310;	
}
if(p.persopos.x>370 && p.persopos.x<530  && p.persopos.y==290)
{
p.persopos.x=370;
}
if(  p.persopos.x>540 && p.persopos.x<610 && p.persopos.y==290)
{
p.persopos.x=610;	
}

if(((p.persopos.x>190 && p.persopos.x<=330) || p.persopos.x<90) && p.persopos.y==290)
{
for(j=0;j<4;j++)
{
SDL_Delay(80);
p.persopos.y+=20;
affichezstage1_3(&b,screen);
decentedujump(&p,screen,i);
affichezcoin(&co,screen);
affichezcross(&co,screen);
affichertemp(&t,screen,temp1);
affichezscoreboard(&co,screen,scorenb);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
affichezfireball(&f1,screen);
affichezfireball(&f2,screen);
if(collisionexplo==0)
{
movezombie(&z,screen);
}
SDL_Flip(screen);	
}	
}

if((p.persopos.x<410 || p.persopos.x>590) && p.persopos.y==210)
{
for(j=0;j<4;j++)
{
SDL_Delay(80);
p.persopos.y+=20;
affichezstage1_3(&b,screen);

collision=collide(&p,&z);
decentedujump(&p,screen,i);
if(collisionexplo==0)
{
movezombie(&z,screen);
}

affichezcoin(&co,screen);
affichezcross(&co,screen);
affichertemp(&t,screen,temp1);
affichezscoreboard(&co,screen,scorenb);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
affichezfireball(&f1,screen);
affichezfireball(&f2,screen);
SDL_Flip(screen);	
}		
}

if(jump==2)
{
jump=jumpin2(&p,&b,p.persopos.x,p.persopos.y,jump,screen,d,&po,&j,&po2,&j1,&f1,&f2,&s1,&s2,&s3,ss1,ss2,ss3,&z,&co,scorenb,&v,collision,collisionexplo,collisionfireball1,collisionfireball2,collisionexplo2,&ob,contact,contact1,&gg,vision); 
}
if(jump==1)
{
jump=jumpin(&p,&b,p.persopos.x,p.persopos.y,jump,screen,d,&po,&j,&po2,&j1,&f1,&f2,&s1,&s2,&s3,ss1,ss2,ss3,&z,&co,scorenb,&v,collision,collisionexplo,collisionfireball1,collisionfireball2,collisionexplo2,&ob,contact,contact1,&gg,vision,&collisionplatform);
}



if(p.persopos.x>770 && p.persopos.y==290)
{
p.persopos.x=0;
p.persopos.y=290;
collisionexplo=0;
collision=0;
/*r1=enigme4(screen);*/
changefireball1pos(&f1);
changefireball2pos(&f2);
changeposzombie(&z);
SDL_Flip(screen);
d++;
affichezloading(&l,screen);	
}




affichezstage1_3(&b,screen);
affichezpersonnage(&p,i,screen);
if(collisionexplo==0)
{
collision=collide(&p,&z);
} 
if(collision==1 || collisionfireball1==1 || collisionfireball2==1)
{	
p.persopos.x=0;
p.persopos.y=370;
affichezloading(&l,screen);		
}
collisionexplo=0;

if(collisionexplo==0)
{
movezombie(&z,screen);
}
affichezcoin(&co,screen);
affichezcross(&co,screen);
affichertemp(&t,screen,temp1);
affichezexplosition(&ee,screen,&collisionexplo,&z);
if(collisionexplo==0)
{
collideattaque(&aa,&z,attaquee);
}
printf("LA COLLISION EST %d \n",z.collisionexplo);

affichezscoreboard(&co,screen,scorenb);
affichezattaque(&aa,&p,screen,&attaquee);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
affichezgameover(&v,screen,&d,&quit1,&r,&deathocc);
if(deathocc==1)
{
goto start1;	
}
SDL_Delay(50);
collisionfireball1=collidefireball(&p,&f1);
collisionfireball2=collidefireball(&p,&f2);
affichezfireball(&f1,screen);
affichezfireball(&f2,screen);
SDL_Flip(screen);
while(pose==1)
{	
printf("%d %d \n",ip,apause);

ip=inputpause(&pau2,&apause,ip,&pose,&quit);
affichezpause(&pau2,screen,ip);
if(quit==0)
{
 r=7;	
quit1=0;
goto start;	
 }
SDL_Flip(screen);
SDL_Delay(80);	
}
}


if(d==4)
{//x=780 y=290 
	//x=580 y=290
printf("LA POSITION X EST %d et LA POSITION Y EST %d \n",p.persopos.x,p.persopos.y);
if(p.persopos.x>580 && p.persopos.y==290)
{
for(i=0;i<4;i++)
{
SDL_Delay(80);
p.persopos.y+=20;
affichezstage1_5(&b,screen);
decentedujump(&p,screen,i);
affichezcoin(&co,screen);
affichezcoin(&co,screen);
affichezcross(&co,screen);
affichertemp(&t,screen,temp1);
affichezscoreboard(&co,screen,scorenb);
afficherobstacle1(&ob,screen,contact);
afficherobstacle2(&ob,screen,contact1);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);

SDL_Flip(screen);
}
}
if(p.persopos.x<600 && p.persopos.y==370)
{
p.persopos.x=600;	
}
if(p.persopos.x > 180)
{
contact=1;	
}
if(p.persopos.x >460)
{
contact1=1;
}
affichezstage1_5(&b,screen);
affichezcoin(&co,screen);
affichezcross(&co,screen);
affichertemp(&t,screen,temp1);
affichezscoreboard(&co,screen,scorenb);
afficherobstacle1(&ob,screen,contact);
afficherobstacle2(&ob,screen,contact1);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
affichezpersonnage(&p,i,screen);
if(p.persopos.x)	
if(jump==2)
{
jump=jumpin2(&p,&b,p.persopos.x,p.persopos.y,jump,screen,d,&po,&j,&po2,&j1,&f1,&f2,&s1,&s2,&s3,ss1,ss2,ss3,&z,&co,scorenb,&v,collision,collisionexplo,collisionfireball1,collisionfireball2,collisionexplo2,&ob,contact,contact1,&gg,vision);
}
if(jump==1)
{
jump=jumpin(&p,&b,p.persopos.x,p.persopos.y,jump,screen,d,&po,&j,&po2,&j1,&f1,&f2,&s1,&s2,&s3,ss1,ss2,ss3,&z,&co,scorenb,&v,collision,collisionexplo,collisionfireball1,collisionfireball2,collisionexplo2,&ob,contact,contact1,&gg,vision,&collisionplatform);
}
collisionexplo=0;
//pause
while(pose==1)
{	
printf("%d %d \n",ip,apause);

ip=inputpause(&pau2,&apause,ip,&pose,&quit);
affichezpause(&pau2,screen,ip);

if(quit==0)
{
 r=7;	
quit1=0;
goto start;	
 }
SDL_Flip(screen);
SDL_Delay(80);	
}
//..............***
SDL_Delay(60);
if(p.persopos.x>770 && p.persopos.y==370)
{
p.persopos.x=0;
p.persopos.y=310;
/*r1=enigme4(screen);*/
d++;

affichezloading(&l,screen);	
}
SDL_Flip(screen);	
}







if(d==3)
{

if(attaquee==0)
{
initattaque(&aa,&p);	
}

if(jump==2)
{
jump=jumpin2(&p,&b,p.persopos.x,p.persopos.y,jump,screen,d,&po,&j,&po2,&j1,&f1,&f2,&s1,&s2,&s3,ss1,ss2,ss3,&z,&co,scorenb,&v,collision,collisionexplo,collisionfireball1,collisionfireball2,collisionexplo2,&ob,contact,contact1,&gg,vision);
}
if(jump==1)
{
jump=jumpin(&p,&b,p.persopos.x,p.persopos.y,jump,screen,d,&po,&j,&po2,&j1,&f1,&f2,&s1,&s2,&s3,ss1,ss2,ss3,&z,&co,scorenb,&v,collision,collisionexplo,collisionfireball1,collisionfireball2,collisionexplo2,&ob,contact,contact1,&gg,vision,&collisionplatform);
}
printf("x=%d y=%d \n",p.persopos.x,p.persopos.y);
if(p.persopos.x>=160 && p.persopos.x<300 && p.persopos.y==290)
{
p.persopos.x=160;	
}
if(p.persopos.x>60 && p.persopos.x<120)
{
collision=1;
for(i=0;i<2;i++)
{
SDL_Delay(80);
p.persopos.y+=20;
affichezstage1_4(&b,screen);
decentedujump(&p,screen,i);
affichezcoin(&co,screen);
affichezfireball(&f1,screen);
affichertemp(&t,screen,temp1);
if(collisionexplo2==0)
{
movezombie2(&z,screen);
}
affichezfireball(&f2,screen);
affichezcross(&co,screen);                //CHUTE LIBRE 
affichezscoreboard(&co,screen,scorenb);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
SDL_Flip(screen);	
}
p.persopos.x=0;
p.persopos.y=290;
affichezloading(&l,screen);
}
if(p.persopos.x>=280 && p.persopos.x<=320 && p.persopos.y==210 )
{
collision=1;
for(i=0;i<2;i++)
{
SDL_Delay(80);
p.persopos.y+=20;
affichezstage1_4(&b,screen);
decentedujump(&p,screen,i);
affichezcoin(&co,screen);
if(collisionexplo2==0)
{
movezombie2(&z,screen);
}

affichezfireball(&f1,screen);
affichezfireball(&f2,screen);
affichezcross(&co,screen);    
affichertemp(&t,screen,temp1);            //CHUTE LIBRE 
affichezscoreboard(&co,screen,scorenb);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
SDL_Flip(screen);	
}
p.persopos.x=0;
p.persopos.y=290;
affichezloading(&l,screen);
}	
if(p.persopos.x>400 && p.persopos.x<440 && p.persopos.y==290)	
{
p.persopos.x=440;	
}
if( (p.persopos.x>420  && p.persopos.y==210) || (p.persopos.x<=160 && p.persopos.y==210))
{
for(j=0;j<4;j++)
{
SDL_Delay(80);
p.persopos.y+=20;
affichezstage1_4(&b,screen);
decentedujump(&p,screen,i);
affichezcross(&co,screen);
if(collisionexplo2==0)
{
movezombie2(&z,screen);
}
affichezfireball(&f1,screen);
affichezfireball(&f2,screen);
affichertemp(&t,screen,temp1);
affichezcoin(&co,screen);
affichezscoreboard(&co,screen,scorenb);
affichezcross(&co,screen);
if(collisionexplo2==0)
{
movezombie2(&z,screen);
}
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);

SDL_Flip(screen);	
}		
}

affichezstage1_4(&b,screen);    
affichezcoin(&co,screen);  
affichezcross(&co,screen);
affichertemp(&t,screen,temp1);
if(collisionexplo2==0)
{
movezombie2(&z,screen);
}
affichezfireball(&f1,screen);
affichezfireball(&f2,screen);
printf("%d est l explosion \n",collisionexplo2);
affichezattaque(&aa,&p,screen,&attaquee);
affichezexplosition(&ee,screen,&collisionexplo2,&z);
affichezscoreboard(&co,screen,scorenb);
affichezvie(&v,screen,&collision,&collisionfireball1,&collisionfireball2);
collisionfireball1=collidefireball(&p,&f1);
collisionfireball2=collidefireball(&p,&f2);
            //stage 1_4
affichezpersonnage(&p,i,screen);
SDL_Delay(50);
if(p.persopos.x>770 && p.persopos.y==290)
{
p.persopos.x=0;
p.persopos.y=290;

/*r1=enigme4(screen);*/
d++;

affichezloading(&l,screen);	
}
if(collisionexplo2==0)
{
collision=collide(&p,&z);
} 
if(collision==1 || collisionfireball1==1 || collisionfireball2==1)
{	
p.persopos.x=0;
p.persopos.y=290;
affichezloading(&l,screen);		
}
affichezgameover(&v,screen,&d,&quit1,&r,&deathocc);
if(deathocc==1)
{
goto start1;	
}
if(collisionexplo2==0)
{
collideattaque(&aa,&z,attaquee);
printf("LA COLLISION EST %d \n",z.collisionexplo);
}
collisionexplo2=0;
SDL_Flip(screen);
while(pose==1)
{	
printf("%d %d \n",ip,apause);

ip=inputpause(&pau2,&apause,ip,&pose,&quit);

affichezpause(&pau2,screen,ip);
if(quit==0)
{
 r=7;	
quit1=0;
goto start;	
 }
SDL_Flip(screen);
SDL_Delay(80);	
}
}
temp1++;
//////////////////////////*********************************************////////////////////////////////////
///////////LES STAGES DES PERSO 2
if(d4==0)
{
 Initvie2(&v4);

if(attaquee==0)
{
initattaque(&aa4,&p4);	
}


if(p4.persopos.x>960 && p4.persopos.y!=310 && p4.persopos.y!=230 && p4.persopos.y!=150 && p4.persopos.y!=70)
{
p4.persopos.x=960;	
}
if(p4.persopos.x>=1170 && p4.persopos.y!=230 && p4.persopos.y!=150 && p4.persopos.y!=70) 
{
p4.persopos.x=1170;	
}
if(p4.persopos.x<=1200 && p4.persopos.y==230)
{
p4.persopos.x=1200;	
}	
if(p4.persopos.x<=990 && p4.persopos.y==310)
{
p4.persopos.x=990;	                                                            
}
if(p4.persopos.x>=1360 && p4.persopos.y!=150 && p4.persopos.y!=70)                 //STAGE 1---1 
{
p4.persopos.x=1360;	
}
if(p4.persopos.x<=1390 && p4.persopos.y==150)
{
p4.persopos.x=1390;	
}

printf("x=%d y=%d \n",p.persopos.x,p.persopos.y);
if(jump4==2)
{
jump4=jumpin2(&p4,&b4,p4.persopos.x,p4.persopos.y,jump4,screen,d4,&po4,&j4,&po24,&j14,&f14,&f24,&s14,&s24,&s34,ss14,ss24,ss34,&z4,&co4,scorenb4,&v4,collision4,collisionfireball14,collisionfireball24,collisionexplo24,&ob4,contact4,contact14,&gg4,vision4);
}
if(jump4==1)
{
jump4=jumpin(&p4,&b4,p4.persopos.x,p4.persopos.y,jump4,screen,d4,&po4,&j4,&po24,&j14,&f14,&f24,&s14,&s24,&s34,ss14,ss24,ss34,&z4,&co4,scorenb4,&v4,collision4,collisionexplo4,collisionfireball14,collisionfireball24,collisionexplo24,&ob,contact,contact14,&gg4,vision4,&collisionplatform);
}

if(collidestar(&p4,&s14)==1)
{
if(ss14==1)
{	
scorenb4++;
}
ss14=0;
	                                //eating stars :p for stage 1-1
}
if(collidestar(&p4,&s24)==1)
{
if(ss24==1)
{	
scorenb4++;
}
ss24=0;	
}
if(collidestar(&p4,&s34)==1)
{
if(ss34==1)
{	
scorenb4++;
}
ss34=0;	
}

if(p4.persopos.x>740 && p4.persopos.y==150)
{
d4++;
ss14=1;
ss24=1;
ss34=1;
changescoinstage1_22(&s14,&s24,&s34);
affichezstage1_2(&b4,screen);
affichezloading(&l4,screen);
SDL_Flip(screen);
if(d4==1)
{                           //change to stage 1-2
p4.persopos.x=0;	
p4.persopos.y=160;
}
affichezloading(&l4,screen);
}	
affichezstage1_1(&b4,screen);
if(ss14==1)
{
affichezstar(&s14,screen);	
}
if(ss24==1)
{
affichezstar(&s24,screen);	
}
if(ss34==1)
{ 	
affichezstar(&s34,screen);	
}
SDL_Delay(40);
affichezcoin(&co4,screen);
affichezcross(&co4,screen);
affichezscoreboard(&co4,screen,scorenb4);
affichezvie(&v4,screen,&collision4,&collisionfireball14,&collisionfireball24);
affichezattaque(&aa4,&p4,screen,&attaquee4);
affichezpersonnage(&p4,i4,screen);
SDL_Flip(screen);
while(pose4==1)
{	
printf("%d %d \n",ip4,apause4);
ip=inputpause(&pau24,&apause4,ip4,&pose4,&quit);
affichezpause(&pau24,screen,ip4);
if(quit==0)
{
 r=7;	
quit14=0;
goto start;	
 }
SDL_Flip(screen);
SDL_Delay(10);	
}
}

/////////////////////////////////////////
if(d4==1)
{
if(attaquee4==0)
{
initattaque(&aa4,&p4);	
}


if(p4.persopos.x>1330 && p4.persopos.y==160)
{
p4.persopos.x=830;
p4.persopos.y=390;	
}
if(p4.persopos.x>990 && p4.persopos.x<1090 && p4.persopos.y <= 160)
{
collision4=1;	
for(i4=0;i4<3;i4++)
{
SDL_Delay(80);
p4.persopos.y+=20;
affichezstage1_2(&b4,screen);
affichezcoin(&co4,screen);
affichezcross(&co4,screen);
affichezscoreboard(&co4,screen,scorenb4);
affichezvie(&v4,screen,&collision4,&collisionfireball14,&collisionfireball24);
j4=affichezportal(&po4,j4,screen);
j4=affichezportal(&po24,j4,screen);
decentedujump(&p4,screen,i4);
if(ss14==1)
{
affichezstar(&s14,screen);	
}
if(ss24==1)
{
affichezstar(&s24,screen);	
}
if(ss34==1)
{ 	
affichezstar(&s34,screen);	
}
SDL_Flip(screen);
}                                                  //STAAAAAGE 1-2
if(p4.persopos.y==220)
{

affichezloading(&l4,screen);	
SDL_Delay(100);	
p4.persopos.x=830;	
p4.persopos.y=160;	
}	
}

printf("x=%d y=%d \n",p4.persopos.x,p4.persopos.y);
if(jump4==2)
{
jump4=jumpin2(&p4,&b4,p4.persopos.x,p4.persopos.y,jump4,screen,d4,&po4,&j4,&po24,&j14,&f14,&f24,&s14,&s24,&s34,ss14,ss24,ss34,&z4,&co4,scorenb4,&v4,collision4,collisionexplo4,collisionfireball14,collisionfireball24,collisionexplo24,&ob4,contact4,contact14,&gg4,vision4);
}
if(jump4==1)
{
jump4=jumpin(&p4,&b4,p4.persopos.x,p4.persopos.y,jump4,screen,d4,&po4,&j4,&po24,&j14,&f14,&f24,&s14,&s24,&s34,ss14,ss24,ss34,&z4,&co4,scorenb4,&v4,collision4,collisionexplo4,collisionfireball14,collisionfireball24,collisionexplo24,&ob4,contact4,contact14,&gg4,vision4,&collisionplatform4);
}

if(p4.persopos.x>1260 && p4.persopos.y==390)
{




p4.persopos.x=800;
p4.persopos.y=370;
collision4=collide(&p4,&z4);
SDL_Flip(screen);
affichezloading(&l4,screen);

d4++;
occ4=0;
do
{

if(eni4==0)
{
	
affichezroom(&e4,screen);
SDL_Flip(screen);
}	
printf("%d \n",eni4);	
eni4=inputenigme(&e4);

if(eni4==1)
{
affichezletter(&e4,screen);
SDL_Flip(screen);
}
if(eni==2)
{
	
int quit24;
quit24=0;	
affichezbox(&e4,screen);
affichezletters(&e4,screen);
SDL_Flip(screen);
if(occ14==1)
{
quit24=1;
eni4=0;	
}
while(quit24==0)
{
occ4=inputcoffre(&e,screen,occ4,&quit24,&eni4);
printf("occ=%d \n",occ4);
SDL_Delay(40);
}
}


while(eni4==3)
{
ii4=inputenigme2(&e4);	
affichezboxopen(&e4,screen);
SDL_Flip(screen);
if(ii4==1)
{
for(j4=0;j4<4;j4++)
{
affichezdooropen(&e4,screen,j4);
SDL_Flip(screen);
SDL_Delay(80);
}
enigmeon4=1;
eni4=4;	
}
}

}while(enigmeon4==0);


	
}

affichezstage1_2(&b4,screen);
if(collidestar(&p4,&s14)==1)
{
if(ss14==1)
{	
scorenb4++;
}
ss14=0;
	                                //eating stars :p for stage 1-1
}
if(collidestar(&p4,&s24)==1)
{
if(ss24==1)
{	
scorenb4++;
}
ss24=0;	
}
if(collidestar(&p4,&s34)==1)
{
if(ss34==1)
{	
scorenb4++;
}
ss34=0;	
}
affichezcoin(&co4,screen);
affichezcross(&co4,screen);
affichezscoreboard(&co4,screen,scorenb4);

affichezvie(&v4,screen,&collision4,&collisionfireball14,&collisionfireball24);
affichezgameover(&v4,screen,&d4,&quit14,&r4,&deathocc4);
if(deathocc4==1)
{
goto start1;	
}

if(ss14==1)
{
affichezstar(&s14,screen);	
}
if(ss24==1)
{
affichezstar(&s24,screen);	
}
if(ss34==1)
{ 	
affichezstar(&s34,screen);	
}
affichezattaque(&aa4,&p4,screen,&attaquee4);
affichezpersonnage(&p4,i4,screen);
j=affichezportal(&po4,j4,screen);
j=affichezportal(&po24,j4,screen);
SDL_Delay(80);

SDL_Flip(screen);
while(pose4==1)
{	
printf("%d %d \n",ip4,apause4);

ip4=inputpause(&pau24,&apause4,ip4,&pose4,&quit);
affichezpause(&pau24,screen,ip4);
if(quit==0)
{
 r=7;	
quit1=0;
goto start;	
 }

SDL_Delay(10);	
}
}

//////////////////////////////////////////////*******************************************/////////////////////////
}



}

}



