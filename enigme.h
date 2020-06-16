#ifndef ENIGME_H_INCLUDED
#define ENIGME_H_INCLUDED
typedef struct
{
SDL_Surface* room;
SDL_Surface* letter;
SDL_Surface* box;
SDL_Surface* letters[16];
SDL_Surface* lettersr[8];
SDL_Rect posletters[8];
SDL_Surface* boxopen;
SDL_Surface* takekey;
SDL_Surface* opendoor[4];
SDL_Rect reponse[3];
SDL_Surface *reponsesurface[3];
SDL_Rect roompos;
int pos;
int T[3];
}enigme;
void initreponse(enigme *e);
void initenigme(enigme* e);
int enigme4(SDL_Surface* ecran);
void affichezroom(enigme *e,SDL_Surface* screen);
void affichezletter(enigme *e,SDL_Surface* screen);
void affichezbox(enigme *e,SDL_Surface* screen);
void affichezboxopen(enigme *e,SDL_Surface* screen);
void affichezkeytaken(enigme *e,SDL_Surface* screen);
void affichezdooropen(enigme *e,SDL_Surface *screen,int i);
int inputenigme(enigme *e);
void affichezletters(enigme *e,SDL_Surface* screen);
void affichezletters2(enigme *e,SDL_Surface* screen,int i);
void affichezletters4(enigme *e,SDL_Surface* screen,int i);
void affichezletters3(enigme *e,SDL_Surface* screen,int i);
int verifenigmetrue(enigme* e);
int inputcoffre(enigme *e,SDL_Surface* screen,int occ,int *quit1,int *eni);
int inputenigme2(enigme *e);


#endif 