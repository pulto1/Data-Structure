#pragma once
#include<stdio.h>
#include <stdlib.h>
#include <assert.h>

// ˳�����Ч�����������б���������
// ��̬˳������ ���̶���С��
//typedef int SLDataType;
//#define N 10
//
//// vector
//struct SeqList
//{
//	SLDataType a[N];
//	int size;
//};
//
//void SeqListPushBack(struct SeqList* ps, SLDataType x);
//void SeqListPopBack(struct SeqList* ps);
//void SeqListPushFront(struct SeqList* ps, SLDataType x);
//void SeqListPopFront(struct SeqList* ps);

// ��̬˳������ ����С�ɱ䣩
typedef int SLDataType;

// vector
typedef struct SeqList
{
	SLDataType* a;
	int size;      // ��Ч���ݵĸ���
	int capacity;  // ����
}SL;

// β��βɾ  ͷ��ͷɾ
void SeqListInit(SL* ps);
void SeqListDestory(SL* ps);

void SeqListPrint(SL* ps);
void SeqListCheckCapacity(SL* ps);

void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

// ����λ�õĲ���ɾ��
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);

// ˳������
int SeqListFind(SL* psl, SLDataType x);

// ...
//int SeqListSort(SL* psl);
//int SeqListBinaryFind(SL* psl, SLDataType x);





