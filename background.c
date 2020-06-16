#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "menu.h"
#include "personnage.h"
#include "background.h"


void initbackground(background *b)
{

b->stage1_1=IMG_Load("stage-1-1.png");
b->backpos.x=0;
b->backpos.y=0;
b->stage1_2=IMG_Load("stage-1-2.png");
b->stage1_3=IMG_Load("stage1-3.png");
b->stage1_4=IMG_Load("stage1-4.png");
b->stage1_5=IMG_Load("stage1-5.png");
b->stage2_1=IMG_Load("stage2-1.png");
b->stage2_2=IMG_Load("stage-2--2.png");
b->platform=IMG_Load("platform.png");
b->platformpos.x=200;
b->platformpos.y=260;
b->mov=5;
}
void initbackground2(background *b)
{
b->stage1_1=IMG_Load("stage-1-1.png");
b->backpos.x=0;
b->backpos.y=0;
b->stage1_2=IMG_Load("stage-1-2.png");
b->stage1_3=IMG_Load("stage1-3.png");
b->stage1_4=IMG_Load("stage1-4.png");
b->stage1_5=IMG_Load("stage1-5.png");
b->stage2_1=IMG_Load("stage2-1.png");
b->stage2_2=IMG_Load("stage-2--2.png");
b->platform=IMG_Load("platform.png");
b->platformpos.x=200;
b->platformpos.y=260;
b->mov=5;
b->backpos.x=800;	
b->backpos.y=0;
}


void changeposplatform(background *b)
{
b->platformpos.x=450;
b->platformpos.y=260;	
}
void affichezstage1_1(background *b,SDL_Surface *screen)
{
SDL_BlitSurface(b->stage1_1,NULL,screen,&b->backpos);
}


void affichezstage1_1multi(background *b,SDL_Surface *screen)
{
SDL_BlitSurface(b->stage1_1,NULL,screen,&b->backpos);	
}

void affichezstage1_2(background *b,SDL_Surface *screen)
{
SDL_BlitSurface(b->stage1_2,NULL,screen,&b->backpos);	
}
void affichezstage1_3(background *b,SDL_Surface *screen)
{
SDL_BlitSurface(b->stage1_3,NULL,screen,&b->backpos);	
}
void affichezstage1_4(background *b,SDL_Surface *screen)
{
SDL_BlitSurface(b->stage1_4,NULL,screen,&b->backpos);	
}
void affichezstage1_5(background *b,SDL_Surface *screen)
{
SDL_BlitSurface(b->stage1_5,NULL,screen,&b->backpos);	
}
void affichezstage2_1(background *b,SDL_Surface *screen)
{
SDL_BlitSurface(b->stage2_1,NULL,screen,&b->backpos);
}
void affichezstage2_2(background *b,SDL_Surface *screen)
{
SDL_BlitSurface(b->stage2_2,NULL,screen,&b->backpos);	
}
void affichezplatform(background *b,SDL_Surface* screen)
{
int mov;
if(b->platformpos.x<200)
{
b->mov=5;	
}
if(b->platformpos.x>400 )
{
b->mov=-5;	
}
b->platformpos.x+=b->mov;
SDL_BlitSurface(b->platform,NULL,screen,&b->platformpos);	
}
void affichezplatform2(background *b,SDL_Surface* screen)
{
int mov;
if(b->platformpos.y<100)
{
b->mov=5;	
}
if(b->platformpos.y>270 )
{
b->mov=-5;	
}
b->platformpos.y+=b->mov;
SDL_BlitSurface(b->platform,NULL,screen,&b->platformpos);	
}

