#pragma once

#include <stdio.h>
#include "raylib.h"
#include "window_attr.h"

#define PADDING 8
#define BGCOLOR \
    (Color) { 36, 35, 36, 255 }

#define PANELH 100 // Height of result panel
#define PANELCOLOR \
    (Color) { 46, 45, 46, 255 }

void RenderPanel(Font UIFont)
{
    Rectangle ResultPanel = {
        PADDING, PADDING, (WINW - PADDING * 2), (PANELH - PADDING * 2)};

    Color PanelColor = {56, 56, 56, 255};

    DrawRectangleRounded(ResultPanel, 0.35f, 4, PanelColor);
    DrawTextEx(UIFont, "Hello world", (Vector2){PADDING + 4, PADDING + 4}, 16, 0, LIGHTGRAY);
}
