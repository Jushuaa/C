#ifndef __LINKLIST_H__ 
#define __LINKLIST_H__ 

#include <stdio.h>
#include<assert.h>
#include<stdlib.h>


typedef int DataType;
typedef struct Node
{
	DataType data;
	struct Node* next;
}Node, *pNode, List, *pList;
pNode BuyNode(DataType d);
void PushFront(pList* pplist, DataType d);//ͷ������
pNode Find(pList plist, DataType d);//����Ԫ��
void PrintLinkList(pList plist);
void PushBack(pList* pplist, DataType d);//β��
void DestroyLinkList(pList* pplist);//��������

void PrintTailToHead(pList plist);// ��β��ͷ��ӡ������ 

void DelNodeNotTail(pNode pos);//ɾ��һ����ͷ������ķ�β�ڵ� 
void InsertNode(pNode pos,DataType d);//����ͷ�������һ���ڵ�ǰ����һ���ڵ� 
 
void JosephCycle(pList * pplist, int k);//������ʵ��Լɪ��
 
void ReverseList(pList* pplist);//����/��ת������

void BubbleSort(pList plist);// ����������ð������ 


pList Merge(pList plist1, pList plist2);//�ϲ�������������,�ϲ�����Ȼ���� 

pList  Merge_R(pList plist1, pList plist2);//�ݹ� 

pNode FindMidNode(pList plist);// ���ҵ�������м�ڵ㣬Ҫ��ֻ�ܱ���һ������ 

pNode FindLastKNode(pList plist, int k);// ���ҵ�����ĵ�����k���ڵ㣬Ҫ��ֻ�ܱ���һ������ 

pNode CheckCycle(pList plist);// �жϵ������Ƿ����
int GetCircleLength(pNode meet);//���������󻷵ĳ���

pNode GetCycleEntryNode(pList plist, pNode meet);//�󻷵���ڵ�   ������ÿ���㷨��ʱ�临�Ӷ�&�ռ临�Ӷȡ�
int CheckCross(pList plist1, pList plist2);// �ж����������Ƿ��ཻ
pNode GetCrossNode(pList plist1, pList plist2);//���ཻ���󽻵㡣���������������� 

void UnionSet(pList plist1, pList plist2);//����������������(�)��

#endif //__LINKLIST_H__ 