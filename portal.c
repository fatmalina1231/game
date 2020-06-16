#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "portal.h"


void initportal(portal* po)
{
po->port[0]=IMG_Load("portal1.png");
po->port[1]=IMG_Load("portal2.png");
po->port[2]=IMG_Load("portal3.png");
po->port[3]=IMG_Load("portal4.png");
po->port[4]=IMG_Load("portal5.png");
po->port[5]=IMG_Load("portal6.png");
po->portalpos.x=520;
po->portalpos.y=70;
}

void initportal2(portal* po)
{
po->port[0]=IMG_Load("portal1.png");
po->port[1]=IMG_Load("portal2.png");
po->port[2]=IMG_Load("portal3.png");
po->port[3]=IMG_Load("portal4.png");
po->port[4]=IMG_Load("portal5.png");
po->port[5]=IMG_Load("portal6.png");
po->portalpos.x=1320;
po->portalpos.y=70;
}
int affichezportal(portal *po,int i,SDL_Surface* screen)
{
SDL_BlitSurface(po->port[i],NULL,screen,&po->portalpos);
i++;
if(i>5)
{
i=0;	
}
return i;
}

void initobstacle(obstacle* ob)
{
ob->obstacle[0]=IMG_Load("obstacle1.png");
ob->obstacle[1]=IMG_Load("obstacle2.png");
ob->obstaclepos1.x=215;
ob->obstaclepos1.y=150;
ob->obstaclepos2.x=480;
ob->obstaclepos2.y=170;	
}

void afficherobstacle1(obstacle* ob,SDL_Surface* screen,int contact)
{
if(contact==0)
{
SDL_BlitSurface(ob->obstacle[0],NULL,screen,&ob->obstaclepos1);	
}
if(contact==1 && ob->obstaclepos1.y!=400)
{
ob->obstaclepos1.y+=5;	
SDL_BlitSurface(ob->obstacle[0],NULL,screen,&ob->obstaclepos1);	
}

}

void afficherobstacle2(obstacle* ob,SDL_Surface* screen,int contact1)
{
if(contact1==0)
{
SDL_BlitSurface(ob->obstacle[1],NULL,screen,&ob->obstaclepos2);	
}
if(contact1==1 && ob->obstaclepos2.y!=400)
{
ob->obstaclepos2.y+=5;	
SDL_BlitSurface(ob->obstacle[1],NULL,screen,&ob->obstaclepos2);	
}

}