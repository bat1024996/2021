#define _CRT_SECURE_NO_WARNINGS

#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#define ROW 3
#define COL 3


//��ʼ������
void Intboard(char board[ROW][COL], int row, int col);

//��ʾ����
void Display_board(char board[ROW][COL],int row, int col );

//�����
void Playermove(char board[ROW][COL], int row, int col);

//������
void Computermove(char board[ROW][COL], int row, int col);

//���Ӯ	'*'
//����Ӯ	'#'
//ƽ��	Q
//����	C

int Checkwin(char board[ROW][COL], int row, int col);
