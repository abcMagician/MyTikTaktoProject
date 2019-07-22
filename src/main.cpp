#include <iostream>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <stdio.h>
#include "Gris_du_jeu/Gris_du_jeu.h"
#include "Joueur/Joueur.h"


int main(int argc, char *argv[])
{
        SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
        SDL_Window* Window = NULL;
        Window = SDL_CreateWindow("Tik Tak To Game",SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
        
        
        SDL_Renderer *renderer = SDL_CreateRenderer(Window, -1, 0);
        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
        
        if(Window != NULL)
        {
                SDL_Delay(5000); 
                SDL_DestroyWindow(Window);
        }
        
        SDL_Quit();
        return 0;
}

