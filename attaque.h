#ifndef ATTAQUE_H_INCLUDED
#define ATTAQUE_H_INCLUDED
#include "personnage.h"
#include "zombie.h"

typedef struct
{
SDL_Surface* ball[10];
SDL_Rect ballpos;
int i;
int deplacement;
}attaque;
typedef struct
{
SDL_Surface* explo[5];
SDL_Rect explopos;
int occ;
int i;
}explo;

void initattaque(attaque* a,personnage* p);
void affichezattaque(attaque* a,personnage* p,SDL_Surface* screen,int *attaquetrue);
void initexplo(explo *e);
void affichezexplosition(explo *e,SDL_Surface* screen,int *collisionexplo,zombie *z);

#endif 