#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "fireball.h"



void initfireball1stage1_3(fireball *f)
{
f->fire=IMG_Load("fireball.png");
f->firepos.x=460;
f->firepos.y=300;
}	
void initfireball1stage1_32(fireball *f)
{
f->fire=IMG_Load("fireball.png");
f->firepos.x=1260;
f->firepos.y=300;
}
void initfireball2stage1_3(fireball *f)
{
f->fire=IMG_Load("fireball.png");
f->firepos.x=540;
f->firepos.y=300;	
}
void initfireball2stage1_32(fireball *f)
{
f->fire=IMG_Load("fireball.png");
f->firepos.x=1340;
f->firepos.y=300;	
}

void changefireball1pos(fireball *f)
{
f->firepos.x=210;
f->firepos.y=300;
}	
void changefireball2pos(fireball *f)
{
f->firepos.x=360;
f->firepos.y=300;	
}

void affichezfireball(fireball *f,SDL_Surface* screen)
{

f->firepos.y-=2;
if(f->firepos.y<1)
{
f->firepos.y=290;	
}


SDL_BlitSurface(f->fire,NULL,screen,&f->firepos);	
}