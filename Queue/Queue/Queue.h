#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int QDataType;

// ��ʽ�ṹ����ʾ����
typedef struct QueueNode
{
	struct QueueNode* _next;
	QDataType _data;
}QueueNode;
// ���еĽṹ
typedef struct Queue{
	QueueNode* _head; //��ͷ
	QueueNode* _tail;  // ��β
}Queue;
// ��ʼ������
void QueueInit(Queue* pq);
// ��β�����
void QueuePush(Queue* pq, QDataType x);
// ��ͷ������
void QueuePop(Queue* pq);
// ��ȡ����ͷ��Ԫ��
QDataType QueueFront(Queue* pq);
// ��ȡ���ж�βԪ��
QDataType QueueBack(Queue* pq);
// ��ȡ��������ЧԪ�ظ���
int QueueSize(Queue* pq);
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0
int QueueEmpty(Queue* pq);
// ���ٶ���
void QueueDestroy(Queue* pq);