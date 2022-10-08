#include<stdio.h>
#include<stdlib.h>
#include<SDL2/SDL.h>
#include<stdbool.h>
#include<math.h>
 int main(int argc, char *argv[])
 {
SDL_Window *window = NULL;
 if(0 != SDL_Init(SDL_INIT_VIDEO))
   {
     fprintf(stderr, "Erreur SDL_Init : %s",
     SDL_GetError());
     return EXIT_FAILURE;
   }
  window = SDL_CreateWindow("SPAO GAME", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED, 640, 640, SDL_WINDOW_SHOWN);

  if(NULL == window)
 {
 fprintf(stderr, "Erreur SDL_CreateWindow : %s",
 SDL_GetError());
 return EXIT_FAILURE;
 }
 SDL_RestoreWindow(window);
 bool running=true;
 SDL_Event event;
 while(running==true){
    if(event.type==SDL_QUIT){
         running=false;
    }
 }
 /* On agit sur la fenêtre ici */
 SDL_DestroyWindow(window);
 SDL_Quit();
 return EXIT_SUCCESS;
 }



