#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <memory>

using namespace std;

int main(){
    cout  << "Hallo SDL2" << endl;

    TTF_Init();

    SDL_Window* window = SDL_CreateWindow("SDL Test", 100, 100, 800, 600, SDL_WINDOW_SHOWN);

    shared_ptr<SDL_Event> ev = make_shared<SDL_Event>(SDL_Event());
    bool running = true;
    while(running){
        while(SDL_PollEvent(ev.get())){
            if(ev->type == SDL_QUIT || ev->key.keysym.sym == SDLK_QUOTE){
                running = false;
            }
        }
    }

    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();

    return 0;
}

//CAN_Hack.de