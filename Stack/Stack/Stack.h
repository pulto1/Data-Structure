#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

//// �����Ƕ����ľ�̬ջ�Ľṹ��ʵ����һ�㲻ʵ�ã�����������Ҫʵ�������֧�ֶ�̬������ջ
//typedef int STDataType;
//#define N 10
//typedef struct Stack
//{
//	STDataType _a[N];
//	int _top; // ջ��
//}Stack;
// ֧�ֶ�̬������ջ

typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top; // ջ��
	int _capacity; // ����
}Stack;
// ��ʼ��ջ
void StackInit(Stack* pst);
// ��ջ
void StackPush(Stack* pst, STDataType x);
// ��ջ
void StackPop(Stack* pst);
// ��ȡջ��Ԫ��
STDataType StackTop(Stack* pst);
// ��ȡջ����ЧԪ�ظ���
int StackSize(Stack* pst);
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0
int StackEmpty(Stack* pst);
// ����ջ
void StackDestroy(Stack* pst);