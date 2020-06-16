#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "attaque.h"
#include "personnage.h"
#include "zombie.h"

void initattaque(attaque* a,personnage* p)
{
a->ball[0]=IMG_Load("1attaque.png");
a->ball[1]=IMG_Load("2attaque.png");
a->ball[2]=IMG_Load("3attaque.png");
a->ball[3]=IMG_Load("4attaque.png");
a->ball[4]=IMG_Load("5attaque.png");
a->ball[5]=IMG_Load("6attaque.png");
a->ball[6]=IMG_Load("7attaque.png");
a->ball[7]=IMG_Load("8attaque.png");
a->ball[8]=IMG_Load("9attaque.png");
a->ball[9]=IMG_Load("10attaque.png");
a->ballpos.x=p->persopos.x+30;
a->ballpos.y=p->persopos.y+30;
a->i=0;
a->deplacement=0;
}
void initattaque2(attaque* a,personnage* p)
{
a->ball[0]=IMG_Load("1attaque.png");
a->ball[1]=IMG_Load("2attaque.png");
a->ball[2]=IMG_Load("3attaque.png");
a->ball[3]=IMG_Load("4attaque.png");
a->ball[4]=IMG_Load("5attaque.png");
a->ball[5]=IMG_Load("6attaque.png");
a->ball[6]=IMG_Load("7attaque.png");
a->ball[7]=IMG_Load("8attaque.png");
a->ball[8]=IMG_Load("9attaque.png");
a->ball[9]=IMG_Load("10attaque.png");
a->ballpos.x=p->persopos.x+30;
a->ballpos.y=p->persopos.y+30;
a->i=0;
a->deplacement=0;
}
void affichezattaque(attaque* a,personnage* p,SDL_Surface* screen,int *attaquetrue)
{

if(a->i>9)
{
a->i=0;
initattaque(a,p);	
}	
if(*attaquetrue==1)
{
SDL_BlitSurface(a->ball[a->i],NULL,screen,&a->ballpos);
SDL_Delay(40);
a->ballpos.x+=20;
a->i++;
a->deplacement+=20;
}
if(a->deplacement==200)
{
a->deplacement=0;
*attaquetrue=0;	
}


}

void initexplo(explo *e)
{
e->explo[0]=IMG_Load("explosion1.png");
e->explo[1]=IMG_Load("explosion2.png");
e->explo[2]=IMG_Load("explosion3.png");
e->explo[3]=IMG_Load("explosion4.png");
e->explo[4]=IMG_Load("explosion5.png");
e->explopos.x=200;
e->explopos.y=370;
e->i=0;
e->occ=0;
}
void initexplo2(explo *e)
{
e->explo[0]=IMG_Load("explosion1.png");
e->explo[1]=IMG_Load("explosion2.png");
e->explo[2]=IMG_Load("explosion3.png");
e->explo[3]=IMG_Load("explosion4.png");
e->explo[4]=IMG_Load("explosion5.png");
e->explopos.x=1000;
e->explopos.y=1170;
e->i=0;
}
void affichezexplosition(explo *e,SDL_Surface* screen,int *collisionexplo,zombie *z)
{
e->explopos=z->zombiepos;	
if(z->collisionexplo==1 )
{
SDL_BlitSurface(e->explo[e->i],NULL,screen,&e->explopos);
e->i++;
}
if(e->i==5)
{
z->collisionexplo=2;
e->i=0;	
}
}