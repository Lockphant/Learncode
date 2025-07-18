/*
axe_game.cpp
lesson 2 making an axe game
Made by Tom Hair
*/
#include "raylib.h" //double quote external libaru
int main()
{
    float root_beer = 1.99;// float alows for non-whole numbers, Initialization by assignment
    double cheese_burger{5.99};//double allows for non-whole numbers with more detail takes up more memory, braced initalization
    bool shouldhavelunch{};// bool can be either true or false and nothing else, Braced empty on bool is always falce
    
    int width;//creates an integer has to be whole number
    int hight;
    hight = 400;// defines value of integer
    width = 700;
    
    InitWindow(width,hight,"Tom's Window"); // creates window width,hight,name
}