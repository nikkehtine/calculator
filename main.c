#include <stdio.h>
#include "raylib.h"

#include "math.h"
#include "ui.h"
#include "window_attr.h"

int main(void)
{
    SetConfigFlags(FLAG_MSAA_4X_HINT);
    InitWindow(WINW, WINH, TITLE);
    SetTargetFPS(30);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BGCOLOR);
        RenderPanel();
        DrawTextEx(GetMyFont(), "Hello world", (Vector2){PADDING + 4, PADDING + 4}, 16, 0, LIGHTGRAY);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
