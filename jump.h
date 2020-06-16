#ifndef BACKGROUND_H_INCLUDED
#define BACKGROUND_H_INCLUDED
int jumpin(personnage *p,background *b,int x,int y,int jump,SDL_Surface* screen,int d,portal *po,int *c,portal *po2,int *c1,fireball *f1,fireball *f2,star *s1,star *s2,star *s3,int ss1,int ss2,int ss3,zombie* z,coin* co,int scorenb,vie* v,int collision,int collisionexplo,int collision1,int collision2,int collisionexplo2,obstacle* ob,int contact,int contact1,ghost *g,int vision,int *collisionplatform);
int jumpcollisionstage1_1(int x,int y);
int jumpin2(personnage *p,background *b,int x,int y,int jump,SDL_Surface* screen,int d,portal *po,int *c,portal *po2,int *c1,fireball *f1,fireball *f2,star *s1,star *s2,star *s3,int ss1,int ss2,int ss3,zombie* z,coin* co,int scorenb,vie* v,int collision,int collisionexplo,int collision1,int collision2,int collisionexplo2,obstacle* ob,int contact,int contat1,ghost *g,int vision);
int jumpcollisionstage1_3(int x,int y);
int jumpcollisionstage2_1(int x,int y);
int jumpcollisionstage1_4(int x,int y);

#endif 