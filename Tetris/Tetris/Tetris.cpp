#include <raylib.h>
#include "Game.h"

double lastUpdateTime = 0;

bool EventTriggered(double interval) {
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= interval) {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
    
}

int main()
{
    Color darkBlue = { 44, 44, 127, 255 };
    InitWindow(500, 620, "raylib Tetris");
    SetTargetFPS(60);

    Font font = LoadFontEx("font/trajanusBricks.ttf", 64, 0, 0);

    Game game = Game();

    while (WindowShouldClose() == false)
    {
        game.HandleInput();
        if (EventTriggered(0.2)) {
            game.MoverBlockDown();
        }
        BeginDrawing();
        ClearBackground(darkBlue);
        game.Draw();
        
        EndDrawing();

    }
      
    CloseWindow();
}

