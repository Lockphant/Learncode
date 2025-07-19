/*
axe_game.cpp
lesson 2 making an axe game
Made by Tom Hair
*/
#include "raylib.h" //double quote external libaru
int main()
{

    //Window Diamentions
    int width{800};//creates an integer has to be whole number
    int hight{450};
    InitWindow(width,hight,"Tom's Window"); // creates window width,hight,name

    //circle coordinates
    int circle_x{200};
    int circle_y{200};
    int circle_r{25};
    //axe coordinates
    int axe_x{400};
    int axe_y{0};
    int axe_width{50};
    int axe_hight{50};
    int direction{10};

    SetTargetFPS(60);
    while (WindowShouldClose() == false)//if esc or the x icon is pressed windowshouldclose swaps to false and ends the loop
    {
        BeginDrawing();
        ClearBackground(WHITE);  // makes window colour white

        // game logic begins

        DrawCircle(circle_x,circle_y,circle_r,BLUE);
        DrawRectangle(axe_x,axe_y,axe_width,axe_hight,RED);
        //move axe
        axe_y += direction;
        if (axe_y > 450 || axe_y <0)
        {
            direction = -direction;
        }

        //move circle
        if (IsKeyDown(KEY_D) && circle_x < 350)
        {
            circle_x += 10;
        }
        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x -= 10;
        }

        //game logic ends
        EndDrawing();
    }

}