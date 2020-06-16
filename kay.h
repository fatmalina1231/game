#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED


typedef struct Kay
{
	SDL_Surface *imgkayd1[7];
	SDL_Surface *imgkayd2[7];
	SDL_Surface *imgkayd0[3];
	SDL_Surface *imgkayd20[3];
	SDL_Surface *imghp;
	SDL_Rect poskay;
	SDL_Rect posrkay;
	int hp;
    SDL_Rect poshp;
	//vie kayvie;
}Kay;
void initkay(kay *kay);
int inputperso(kay *kay,int i,int *jump,int *pause,int *attaquee);
void affichezpersonnage(kay *kay,int i,SDL_Surface* screen);
void decentedujump(kay *kay,SDL_Surface *screen,int i);
void monterdujump(kay *kay,SDL_Surface *screen);

#endif 
