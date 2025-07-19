/*
axe_game.cpp
lesson 2 making an axe game
Made by Tom Hair
*/
#include "raylib.h" //double quote external libaru
int main()
{

    //Window Diamentions
    int width{350};//creates an integer has to be whole number
    int hight{200};
    InitWindow(width,hight,"Tom's Window"); // creates window width,hight,name

    //circle coordinates
    int circle_x{175};
    int circle_y{100};
    int circle_r{25};

    SetTargetFPS(60);
    while (WindowShouldClose() == false)//if esc or the x icon is pressed windowshouldclose swaps to false and ends the loop
    {
        BeginDrawing();
        ClearBackground(WHITE);  // makes window colour white

        // game logic begins

        DrawCircle(circle_x,circle_y,circle_r,BLUE);

        if (IsKeyDown(KEY_D) && circle_x < 350)
        {
            circle_x = circle_x + 10;
        }
        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x = circle_x - 10;
        }

        //game logic ends
        EndDrawing();
    }

}