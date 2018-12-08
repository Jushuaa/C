#pragma once
#include <malloc.h>
#include <assert.h>
#include<stdio.h>
#include <stdlib.h>

typedef int STDataType;
#define DEFAULT_SZ 5

typedef struct STNode
{
	STDataType * data;
	struct Node* next;

}NODE, *PNODE;
typedef struct Stack
{
	STDataType * data;
	PNODE _top;		// ջ��
	PNODE _end;    //ջ��
	int _capacity;  // //ջ���ܴ�С 
	int _size;//��ǰջ�Ĵ�С

}Stack;

void StackInit(Stack* ps);
void StackDestory(Stack* ps);

void StackPush(Stack* ps, STDataType x);
void StackPop(Stack* ps);
STDataType StackTop(Stack* ps);
int StackEmpty(Stack* ps);
int StackSize(Stack* ps);
void StackPrint(Stack *ps);

void TestStack();