#include "../include/Utility.h"

namespace UTIL
{
    bool Set_console_size(int Width, int Height)
    {
     _COORD coord;
     coord.X = Width;
     coord.Y = Height;

     _SMALL_RECT Rect;
     Rect.Top = 0;
     Rect.Left = 0;
     Rect.Bottom = Height - 1;
     Rect.Right = Width - 1;

     HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleScreenBufferSize(Handle, coord);

     SetConsoleWindowInfo(Handle, true, &Rect);

     return true;
    }
}
