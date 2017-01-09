#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

int main(int argc, char *argv[]) {
    SDL_Window * window = nullptr;
    SDL_Surface * w_surface = nullptr;

    if(SDL_Init( SDL_INIT_VIDEO ) >= 0){
        window = SDL_CreateWindow("test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);

        w_surface = SDL_GetWindowSurface(window);
    }
    SDL_Delay(2000);

    SDL_FreeSurface(w_surface);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}