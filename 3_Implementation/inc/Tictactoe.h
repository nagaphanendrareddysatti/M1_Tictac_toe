#ifdef __TICTACTOE_H
#define __TICTACTOE_H
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>


void menu();
void go(int n);
void start_game();
void check_draw();
void draw_board();
void player_first();
void put_X_O(char ch,int pos);

#endif