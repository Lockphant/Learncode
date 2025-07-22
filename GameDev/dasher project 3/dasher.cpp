#include "raylib.h"

int main()
{
    //sets the window perameters
    int windowh (380);
    int windowl (512);
    //initializes the window
    InitWindow(windowl,windowh,"Dapper Dasher");
    SetTargetFPS(60);
    //starts the while loop the! before the condition makes it negates its truth value
    while(!WindowShouldClose())
    {
        //startdrawing
        BeginDrawing();

        ClearBackground(WHITE);
        //end drawing
        EndDrawing();
    }
    CloseWindow();

}