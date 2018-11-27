#ifndef _GAME_H_  
#define _GAME_H_  

#include<stdio.h>  
#include"game.h"  
#include<stdlib.h>  
#include<time.h>  
#include<string.h>  
#pragma warning(disable:4996)  

typedef unsigned int uint;

enum OPTION
{
	EXIT,
	START
};

#define ROW 3  
#define  COL 3  

void menu();
void init_board(char board[ROW][COL], int row, int col);//��ʼ������
void print_board(char board[ROW][COL], int row, int col);//��ӡ����
void computer_move(char board[ROW][COL], int row, int col);//������
void  palyer_move(char board[ROW][COL], int row, int col);//�����
int is_full(char board[ROW][COL], int row, int col);//�ж��Ƿ�����
char is_win(char board[ROW][COL], int row, int col);//�ж���Ӯ


#endif //_GAME_H_  