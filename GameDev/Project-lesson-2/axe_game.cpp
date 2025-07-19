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
    //circle edges
    int l_circle_x{circle_x - circle_r};
    int r_circle_x{circle_x + circle_r};
    int u_circle_y{circle_y - circle_r};
    int b_circle_y{circle_y + circle_r};
    //axe coordinates
    int axe_x{400};
    int axe_y{0};
    int axe_length{50};
    int direction{10};
    //axe edges
    int u_axe_y{axe_y};
    int b_axe_y{axe_y + axe_length};
    int l_axe_x{axe_x };
    int r_axe_x{axe_x + axe_length};


    SetTargetFPS(60);
    while (WindowShouldClose() == false)//if esc or the x icon is pressed windowshouldclose swaps to false and ends the loop
    {
        BeginDrawing();
        ClearBackground(WHITE);  // makes window colour white

        // game logic begins

        DrawCircle(circle_x,circle_y,circle_r,BLUE);
        DrawRectangle(axe_x,axe_y,axe_length,axe_length,RED);
        //move axe
        axe_y += direction;
        if (axe_y > hight || axe_y <0) // || = or statement
        {
            direction = -direction;
        }

        //move circle
        if (IsKeyDown(KEY_D) && circle_x < width)
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