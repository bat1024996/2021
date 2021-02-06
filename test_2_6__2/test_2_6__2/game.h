#define _CRT_SECURE_NO_WARNINGS

#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#define ROW 3
#define COL 3


//初始化棋盘
void Intboard(char board[ROW][COL], int row, int col);

//显示棋盘
void Display_board(char board[ROW][COL],int row, int col );

//玩家走
void Playermove(char board[ROW][COL], int row, int col);

//电脑走
void Computermove(char board[ROW][COL], int row, int col);

//玩家赢	'*'
//电脑赢	'#'
//平局	Q
//继续	C

int Checkwin(char board[ROW][COL], int row, int col);
