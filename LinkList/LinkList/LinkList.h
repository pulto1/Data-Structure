#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SListDataType;
// ���
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;

//struct SList
//{
//	SListNode* head;
//	SListNode* tail;
//};

void SListPushBack(SListNode** pphead, SListDataType x);
void SListPopBack(SListNode** pphead);
void SListPushFront(SListNode** phead, SListDataType x);
void SListPopFront(SListNode** phead);
SListNode* SListFind(SListNode* phead, SListDataType x);

// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SListNode* pos, SListDataType x);

// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos);


void SListPrint(SListNode* phead);




