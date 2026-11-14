#include "raylib.h"

#define SCREEN_WIDTH  800
#define SCREEN_HEIGHT 600
#define TARGET_FPS    60

int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Maze Rush");
    SetTargetFPS(TARGET_FPS);

    float elapsed = 0.0f;   // tempo acumulado em segundos

    while (!WindowShouldClose())
    {
        // --- Update ---
        float dt = GetFrameTime();   // segundos desde o último frame
        elapsed += dt;

        // --- Draw ---
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Maze Rush", 20, 20, 40, DARKGRAY);
            DrawText(TextFormat("Tempo: %.2f s", elapsed), 20, 80, 20, DARKGRAY);
            DrawText(TextFormat("dt: %.4f s", dt), 20, 110, 20, DARKGRAY);
            DrawFPS(20, 140);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}