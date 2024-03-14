#include <iostream>
#include "raylib.h"
#include "log.h"

using namespace std;

int main()
{
    Color background = {14, 82, 77};

    cout << "Start Game" << endl;
    const int screen_width = 1280;
    const int screen_height = 800;
    InitWindow(screen_width, screen_height, "Knife Hit");
    SetTargetFPS(60);

    Log log; 

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(background);
        DrawText("Knife Hit", 10, 10, 20, LIGHTGRAY);
        log.Draw();

        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}







