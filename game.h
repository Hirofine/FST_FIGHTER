#ifndef _GAME_H_
#define _GAME_H_

#define SCREEN_WIDTH 1080
#define SCREEN_HEIGHT 720
#include <SDL/SDL.h>
#include "perso.h"
#include <cstdlib>
#include "map.h"
 
class Game{
public:
  Game();
  bool running();
  bool initSDL(const char* title, int width, int height, int bpp);
  void clean();
  void draw();
  void handleEvents();
  Perso perso1;
  Perso perso2;
  void drawObject();
  void drawMap();
  void drawHealth();
  void movePerso(Perso *perso);
  void hit(Perso *p1, Perso *p2, int damage); 
  Map map;
  void win(Perso winner);
  //bool collide();
  
private:
  void putpixel(int x, int y, Uint32 pixel);
  Uint32 getpixel(int itex, int x, int y);
  
  bool game_running_;
  SDL_Surface * sdl_screen_;
  SDL_Surface * textures_;
  int ntextures;
  int textsize;
  
  int bpp_;
  int width_;
  int height_;
};

#endif
