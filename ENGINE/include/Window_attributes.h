#ifndef WINDOW_ATTRIBUTES_H
#define WINDOW_ATTRIBUTES_H

namespace Engine
{
    enum Window_position
    {
     WINDOWPOS_CENTERED=SDL_WINDOWPOS_CENTERED,
     WINDOWPOS_UNDEFINED=SDL_WINDOWPOS_UNDEFINED
    };

    enum Window_flags
    {
     WINDOW_FULLSCREEN=SDL_WINDOW_FULLSCREEN,
     WINDOW_OPENGL=SDL_WINDOW_OPENGL,
     WINDOW_SHOWN=SDL_WINDOW_SHOWN,
     WINDOW_HIDDEN=SDL_WINDOW_HIDDEN,
     WINDOW_BORDERLESS=SDL_WINDOW_BORDERLESS,
     WINDOW_RESIZABLE=SDL_WINDOW_RESIZABLE,
     WINDOW_MINIMIZED=SDL_WINDOW_MINIMIZED,
     WINDOW_MAXIMIZED=SDL_WINDOW_MAXIMIZED,
     WINDOW_INPUT_GRABBED=SDL_WINDOW_INPUT_GRABBED,
     WINDOW_INPUT_FOCUS=SDL_WINDOW_INPUT_FOCUS,
     WINDOW_MOUSE_FOCUS=SDL_WINDOW_MOUSE_FOCUS,
     WINDOW_FULLSCREEN_DESKTOP=SDL_WINDOW_FULLSCREEN_DESKTOP,
     WINDOW_FOREIGN=SDL_WINDOW_FOREIGN,
     WINDOW_ALLOW_HIGHDPI=SDL_WINDOW_ALLOW_HIGHDPI,
     WINDOW_MOUSE_CAPTURE=SDL_WINDOW_MOUSE_CAPTURE
    };
}

#endif // WINDOW_ATTRIBUTES_H
