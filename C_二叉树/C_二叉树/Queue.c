#include "Queue.h"
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->_front = NULL;
	pq->_back = NULL;
}
void QueueDestory(Queue* pq)
{
	QueueNode *cur = NULL;
	QUDataType *del = NULL;
	assert(pq);
	if (pq->_front == NULL)
		return;
	del = pq->_front;
	cur = pq->_front->_next;
	while (cur) //cur->_back!=NULL   ���һ���ڵ�û���ͷ�
	{
		free(del); //�ڵ��ͷţ��ڴ滹�ڣ��ռ仹��,�ռ��ֵ����λ���ֵ
		del = cur;
		cur = cur->_next;
	}
	pq->_front = pq->_back = NULL;
}
QUDataType* BuyQUDataType(QUDataType x)
{
	QueueNode *newNode = (QUDataType*)malloc(sizeof(QUDataType));
	assert(newNode);
	newNode->_data = x;
	newNode->_next = NULL;
	return newNode;
}

void QueuePush(Queue* pq, QUDataType x)
{
	QUDataType *newNode = NULL;
	assert(pq);
	newNode = BuyQUDataType(x);
	if (pq->_back == NULL)
	{
		pq->_front = newNode;
		pq->_back = newNode;
	}
	else
	{
		pq->_back->_next = pq->_back;

	}
}

void QueuePop(Queue* pq)
{
	QUDataType *cur = NULL;
	assert(pq);
	if (pq->_front == NULL)
		return;
	cur = pq->_front->_next; //�Ƚ���һ���ڵ㱣�棬��free front,��ֹ�ڴ�й©
	free(pq->_front);
	pq->_front = cur;
	if (cur == NULL)
	{
		pq->_back = NULL;
	}
}

//return INT_MAX��ʾ����Ϊ��
QUDataType QueueFront(Queue* pq)
{
	assert(pq);
	return pq->_front->_data;
}
QUDataType QueueBack(Queue* pq)
{
	return pq->_back->_data;
}
//�շ���0���ǿշ���1
int QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->_front == NULL ? 0 : 1;
}

int QueueSize(Queue* pq)
{
	int count = 0;
	QueueNode *cur = pq->_front;
	while (cur)
	{
		count++;
		cur = cur->_next;
	}
	return count;
}

void TestQueue()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	while (QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
	QueueDestory(&q);
}