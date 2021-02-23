#define _CRT_SECURE_NO_WARNINGS

#include "Stack.h"

// ��ʼ��ջ
void StackInit(Stack* pst)
{
	assert(pst);
	pst->_a = (STDataType*)malloc(sizeof(STDataType)* 4);
	pst->_top = 0;
	pst->_capacity = 4;
}

// ��ջ
void StackPush(Stack* pst, STDataType x)
{
	assert(pst);

	//�ռ䲻��������
	if (pst->_top == pst->_capacity)
	{
		pst->_capacity *= 2;
		STDataType* tmp = (STDataType*)realloc(pst->_a, sizeof(STDataType)* pst->_capacity);
		if (tmp == NULL)
		{
			printf("�ڴ治��\n");
			exit(-1);
		}
		else
		{
			pst->_a = tmp;
		}
	}

	pst->_a[pst->_top] = x;
	pst->_top++;
}

// ��ջ
void StackPop(Stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);

	--pst->_top;
}

// ��ȡջ����ЧԪ�ظ���
int StackSize(Stack* pst)
{
	assert(pst);
	return pst->_top;
}

// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0
int StackEmpty(Stack* pst)
{
	assert(pst);

	return pst->_top == 0 ? 1 : 0;
}

// ��ȡջ��Ԫ��
STDataType StackTop(Stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);

	return pst->_a[pst->_top - 1];
}

// ����ջ
void StackDestroy(Stack* pst)
{
	assert(pst);
	free(pst->_a);

	pst->_a = NULL;
	pst->_top = pst->_capacity = 0;
}