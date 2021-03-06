#pragma once
#include <assert.h>
#include <malloc.h>
#include <stdio.h>


typedef int HPDataType;
typedef struct Heap
{
	HPDataType* _a;
	int _size;
	int _capacity;
}Heap;

void AdjustUp(HPDataType *a, int n, int child);
void AdjustDown(HPDataType *a, int n, int root);
void HeapInit(Heap* hp, HPDataType* a, int n);
void HeapDestory(Heap* hp);
void HeapPush(Heap* hp, HPDataType x);
void HeapPop(Heap* hp);
HPDataType HeapTop(Heap* hp);
int HeapSize(Heap* hp);
int HeapEmpty(Heap* hp);
void HeapPrint(Heap* hp);

// 不要直接调Heap
void HeapSort(HPDataType* a, int n);

void TestHeap();