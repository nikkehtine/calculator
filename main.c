#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>

#include "math.h"
#include "ui.h"
#include "window_attr.h"

int main(void)
{
    SetConfigFlags(FLAG_MSAA_4X_HINT);
    InitWindow(WINW, WINH, TITLE);
    SetTargetFPS(30);

    Font UIFont = LoadFont("assets/fonts/AzeretMono-Medium.ttf");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BGCOLOR);
        RenderPanel(UIFont);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
