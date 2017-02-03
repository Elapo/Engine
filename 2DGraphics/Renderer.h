//
// Created by FVHBB94 on 24/01/2017.
//

#ifndef ENGINE_RENDERER_H
#define ENGINE_RENDERER_H


#include <SDL2/SDL_video.h>
namespace Graphics {
    class Renderer {
    public:
        Renderer();
        ~Renderer();
        bool init();
        void StartUpdate();
        void EndUpdate();

    private:
        SDL_Window *m_Mainwindow;
        SDL_Surface *m_ScreenSurface;

    };
}


#endif //ENGINE_RENDERER_H
