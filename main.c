#include "raylib.h"

// -------- CONFIG --------
// Window
#define WINW 400
#define WINH 600
#define TITLE "Calculator app"
// UI
#define BGCOLOR \
    (Color) { 31, 32, 32, 255 }

int main(void)
{
    InitWindow(WINW, WINH, TITLE);
    SetTargetFPS(60);

    Font FontRegular = LoadFont("./assets/fonts/FiraMono-Medium.ttf");

    Rectangle ResultRectangle = {0, 0, WINW, 100};
    Color ResultRectangleColor = {60, 60, 60, 255};

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BGCOLOR);

        DrawRectangleRounded(ResultRectangle, 0.5f, 5, ResultRectangleColor);
        DrawTextEx(FontRegular, "Hello world", (Vector2){0, 0}, 16, 0, LIGHTGRAY);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
