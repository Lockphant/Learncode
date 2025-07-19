/*
axe_game.cpp
lesson 2 making an axe game
Made by Tom Hair
*/
#include "raylib.h" //double quote external libaru
int main()
{

    int width;//creates an integer has to be whole number
    int hight;
    hight = 200;// defines value of integer
    width = 350;
    
    InitWindow(width,hight,"Tom's Window"); // creates window width,hight,name

    while (WindowShouldClose() == false)//if esc or the x icon is pressed windowshouldclose swaps to false and ends the loop
    {
        BeginDrawing();
        ClearBackground(WHITE);  // makes window colour white
        DrawCircle(175,100,25,BLUE); // draws a circle first 2 ints being co-ords 3rd being radius and colour being the colour
        EndDrawing();
    }

}