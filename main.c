#include <stdio.h>
#include "raylib.h"
#include "math.h"

// -------- CONFIG --------

// Window
#define WINW 300               // Window width
#define WINH 450               // Window height
#define TITLE "Calculator app" // Window title
// UI
#define PADDING 8
#define BGCOLOR \
    (Color) { 31, 32, 32, 255 }
#define PANELH 100 // Height of result panel

int main(void)
{
    SetConfigFlags(FLAG_MSAA_4X_HINT);
    InitWindow(WINW, WINH, TITLE);
    SetTargetFPS(60);

    Font FontRegular = LoadFont("./assets/fonts/AzeretMono-Medium.ttf");

    Rectangle ResultRectangle = {PADDING, PADDING,
                                 (WINW - PADDING * 2), (PANELH - PADDING * 2)};
    Color ResultRectangleColor = {56, 56, 56, 255};

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BGCOLOR);

        DrawRectangleRounded(ResultRectangle, 0.35f, 4, ResultRectangleColor);
        DrawTextEx(FontRegular, "Hello world", (Vector2){0, 0}, 16, 0, LIGHTGRAY);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
