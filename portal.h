#ifndef PORTAL_H_INCLUDED
#define PORTAL_H_INCLUDED

typedef struct 
{
SDL_Surface* port[6];
SDL_Rect portalpos;
}portal;
typedef struct
{
SDL_Surface* obstacle[2];	
SDL_Rect obstaclepos1;
SDL_Rect obstaclepos2;
}obstacle;


void initportal(portal* po);
int affichezportal(portal *po,int i,SDL_Surface* screen); 
void initobstacle(obstacle* ob);
void afficherobstacle1(obstacle* ob,SDL_Surface* screen,int contact);
void afficherobstacle2(obstacle* ob,SDL_Surface* screen,int contact1);


#endif 