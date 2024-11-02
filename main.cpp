#include <iostream>
#include <raylib.h>

using namespace std;

int main ()
{
    int windowWidth = 1920;
    int windowHeight = 1080;
    InitWindow(windowWidth, windowHeight, "Raylib Window");
    int FPS = 60;
    SetTargetFPS(FPS);

    while (!WindowShouldClose())
    {
        BeginDrawing();




        EndDrawing();   
    }
}