#define _CRT_SECURE_NO_WARNINGS

#include "DoubleLinkList.h"

ListNode* ListInit()
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

ListNode* BuyListNode(LTDataType x)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->next = NULL;
	node->prev = NULL;
	node->data = x;

	return node;
}

void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}

	printf("\n");
}


void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);

	ListNode* tail = phead->prev;
	ListNode* newnode = BuyListNode(x);
	
	tail->next = newnode;
	newnode->prev = tail;

	newnode->next = phead;
	phead->prev = newnode;

}

void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	ListNode* tail = phead->prev;
	ListNode* tailPrev = tail->prev;

	tailPrev->next = phead;
	phead->prev = tailPrev;
	free(tail);
	tail = NULL;
}

// ˫������ͷ��
void ListPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);

	ListNode* first = phead->next;
	ListNode* newnode = BuyListNode(x);

	phead->next = newnode;
	newnode->prev = phead;

	newnode->next = first;
	first->prev = newnode;
}

// ˫������ͷɾ
void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	ListNode* first = phead->next;
	ListNode* second = first->next;

	phead->next = second;
	second->prev = phead;

	free(first);
}

// ˫���������
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;

		cur = cur->next;
	}

	return NULL;

}

// ˫��������pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* posPrev = pos->prev;
	ListNode* newnode = BuyListNode(x);

	posPrev->next = newnode;
	newnode->prev = posPrev;
	newnode->next = pos;
	pos->prev = newnode;
}

// ˫������ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* posPrev = pos->prev;
	ListNode* posNext = pos->next;

	free(pos);
	posPrev->next = posNext;
	posNext->prev = posPrev;
}

// ˫����������
void ListDestory(ListNode** pphead)
{
	assert(*pphead);
	ListNode* cur = *pphead;
	while (cur != *pphead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}

	free(*pphead);
	*pphead = NULL;
}

void ListClear(ListNode* phead)
{
	assert(phead);
	//�����������ݽ�㣬����ͷ��㣬���Լ���ʹ��

	ListNode* cur = phead;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}

	phead->next = phead;
	phead->prev = phead;
}