#pragma once

#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include <limits.h>
//˳��ṹ����ʽ�ṹ����ʵ��
//��ʽ�ṹ���� ����ɾ��
//��ʽ�ṹ��Ҫһ���ڵ�  �ṹ��
typedef int QUDataType;
typedef struct QueueNode
{
	struct QueueNode* _next; //�ڵ���
	QUDataType _data;      //������
}QueueNode;

typedef struct Queue
{
	QueueNode* _front; // ��ͷ
	QueueNode* _back;  // ��β
}Queue;
void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);
QueueNode* BuyQueueNode(QUDataType x);
void QueuePush(Queue* pq, QUDataType x);
void QueuePop(Queue* pq);
QUDataType QueueFront(Queue* pq);
QUDataType QueueBack(Queue* pq);
int QueueEmpty(Queue* pq);
int QueueSize(Queue* pq);
void TestQueue();