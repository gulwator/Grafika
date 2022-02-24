#ifndef APP_H
#define APP_H

#include "line.h"

#include <SDL2/SDL.h>

#include <stdbool.h>

#define VIEWPORT_RATIO (4.0 / 3.0)
#define VIEWPORT_ASPECT 50.0

typedef struct App
{
    SDL_Window* window;
    SDL_GLContext gl_context;
    bool is_running;
    double uptime;
    
} App;


void handle_app_events(App* app);