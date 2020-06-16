#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "menu.h"
#include "personnage.h"



void initpersonnage(personnage *p)
{
p->perso[0]=IMG_Load("mage1.png");
p->perso[1]=IMG_Load("mage2.png");
p->perso[2]=IMG_Load("mage3.png");
p->perso[3]=IMG_Load("mage4.png");
p->perso[4]=IMG_Load("mage5.png");
p->perso[5]=IMG_Load("mage6.png");
p->perso[6]=IMG_Load("mage7.png");
p->jump[0]=IMG_Load("jump1.png");
p->jump[1]=IMG_Load("jump2.png");
p->jump[2]=IMG_Load("jump3.png");
p->perso[7]=IMG_Load("magataque.png");
p->persopos.x=0;
p->persopos.y=390;
p->time=0;
}
void initpersonnage2(personnage *p)
{
p->perso[0]=IMG_Load("mage1.png");
p->perso[1]=IMG_Load("mage2.png");
p->perso[2]=IMG_Load("mage3.png");
p->perso[3]=IMG_Load("mage4.png");
p->perso[4]=IMG_Load("mage5.png");
p->perso[5]=IMG_Load("mage6.png");
p->perso[6]=IMG_Load("mage7.png");
p->jump[0]=IMG_Load("jump1.png");
p->jump[1]=IMG_Load("jump2.png");
p->jump[2]=IMG_Load("jump3.png");
p->perso[7]=IMG_Load("magataque.png");
p->persopos.x=800;
p->persopos.y=390;
p->time=0;
}


int inputperso(personnage *p,int i,int *jump,int *pause,int *attaquee)
{
	
SDL_Event e;
SDL_PollEvent(&e);
int occ=0;
switch(e.type)
{	
case SDL_KEYDOWN :
switch(e.key.keysym.sym)
{
case SDLK_RIGHT :
i++;
occ=1;
p->persopos.x=p->persopos.x+20;
break;
case SDLK_LEFT :
i++;
occ=1;
p->persopos.x=p->persopos.x-20;
break;
case SDLK_UP:
*jump=1;
occ=1;
break;
case SDLK_ESCAPE :
*pause=1;
break;
case SDLK_DOWN:
*jump=2;
occ=1;
break;
case SDLK_a:
*attaquee=1;
return 7;
break;
}
if(i>=7)
{
i=1;	
}	

}
p->time++;
if(p->time >40)
{
p->time=0;	
}
if(occ==0 && p->time==40)
{
i=0;	
return i;
p->time=0;
}
return i;
}




int inputperso2(personnage *p,int i,int *jump,int *pause,int *attaquee)
{
SDL_Event e;
SDL_PollEvent(&e);
int hauteur=30;
int jumping=0;
int occ=0;
int playerjump=0;
switch(e.type)
{	
case SDL_KEYDOWN :
switch(e.key.keysym.sym)
{
case SDLK_m :
i++;
occ=1;
p->persopos.x=p->persopos.x+20;
break;
case SDLK_k :
i++;
occ=1;
p->persopos.x=p->persopos.x-20;
break;
case SDLK_o:
*jump=1;
occ=1;
break;
case SDLK_ESCAPE :
*pause=1;
break;
case SDLK_l:
*jump=2;
occ=1;
break;
case SDLK_u:
*attaquee=1;
return 7;
break;
}
if(i>=7)
{
i=1;	
}	

}
p->time++;
if(p->time >40)
{
p->time=0;	
}
if(occ==0 && p->time==40)
{
i=0;	
return i;
p->time=0;
}
return i;
}
void affichezpersonnage(personnage *p,int i,SDL_Surface* screen)
{
SDL_BlitSurface(p->perso[i],NULL,screen,&p->persopos);
}
void monterdujump(personnage *p,SDL_Surface* screen)
{
SDL_BlitSurface(p->jump[0],NULL,screen,&p->persopos);	
}
void decentedujump(personnage *p,SDL_Surface* screen,int i)
{
if(i!=4)
{
SDL_BlitSurface(p->jump[1],NULL,screen,&p->persopos);
}
else
{
SDL_BlitSurface(p->jump[2],NULL,screen,&p->persopos);	
}

}

