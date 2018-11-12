#pragma once
#include "Stack.h"
#include "Queue.h"
#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include <stdlib.h>
typedef char BTDataType;
//�����ֵܱ�ʾ������ʾ��ÿһ�����ĵ�һ�����ӽ�㣬Ҳ��ʾ�����ӽ����ֵܽ��
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;

// a��һ��ǰ�����������
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
void BinaryTreeDestory(BTNode* root);
BTNode* BuyBTNode(BTDataType x);
int BinaryTreeSize(BTNode* root);  //���ĸ���
int BinaryTreeLeafSize(BTNode* root);  //Ҷ�ӽ��ĸ���
int BinaryTreeLevelKSize(BTNode* root, int k); //��k��Ľ����

// ����  �ݹ�&�ǵݹ�
void BinaryTreePrevOrder(BTNode* root);  //ǰ��
void BinaryTreeInOrder(BTNode* root);    //����
void BinaryTreePostOrder(BTNode* root);  //����
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);  //����Ԫ��
int BinaryTreeHeight(BTNode* root);      //�߶�
void BinaryTreeLevelOrder(BTNode* root);
int BinaryTreeComplete(BTNode* root); //�Ƿ�Ϊ��ȫ������
void BinaryTreePrevOrderNonR(BTNode* root);
void BinaryTreeInOrderNonR(BTNode* root);
void BinaryTreePostOrderNonR(BTNode* root);

void TestBinaryTree();
