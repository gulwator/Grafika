#include "app.h"

void handle_app_events(App* app)
{
    SDL_Event event;
    static bool is_mouse_down = false;
    static int mouse_x = 0;
    static int mouse_y = 0;
    int x;
    int y;
    int clickCounter=0;

    while (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_MOUSEBUTTONDOWN:
            is_mouse_down = true;
            
            if(clickCounter=0){
                SDL_GetRelativeMouseState(&x,&y);
                SDL_Log("Clicked Start: %d, %d", x,y);
                // set_start(&x,&y);
            }else{
                SDL_GetRelativeMouseState(&x,&y);
                SDL_Log("Clicked end: %d, %d", x,y);
                // set_end(x,y);
            }
            break;
        case SDL_MOUSEMOTION:
            SDL_GetMouseState(&x, &y);
            mouse_x = x;
            mouse_y = y;
            break;
        case SDL_MOUSEBUTTONUP:
            is_mouse_down = false;
            break;
        case SDL_QUIT:
            app->is_running = false;
            break;
        default:
            break;
        }
    }
}