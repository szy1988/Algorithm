
#ifndef ALGO2_1_H
#define ALGO2_1_H

#define Maxsize 50
typedef char ElemType;
typedef struct
{
	
	ElemType data[Maxsize];
	int length;
}SqList;//˳������Ͷ���

/*��ʼ��˳���*/
void InitList(SqList *&L);//&L����Ӧ�÷�ʽ����L�������޸�ָ��L

/*�ͷ�˳���*/
void DestroyList(SqList *L);

/*�ж�˳����Ƿ�Ϊ��*/
int ListEmpty(SqList *L);

/*����˳���ĸ���*/
int ListLength(SqList *L);

/*��ӡ˳���*/
void PrintList(SqList *L);

/*��ȡ˳����е�i��Ԫ��*/
int GetElem(SqList *L,int i,ElemType &e);

/*��˳����в���Ԫ��e�������������*/
int LocateElem(SqList *L,ElemType e);

/*��˳���ĵ�i��λ�ò���Ԫ��e*/
int InsertList(SqList *&L,int i,ElemType e);//&L����Ӧ�÷�ʽ����L�������޸�ָ��L

/*��˳�����ɾ����i��Ԫ��*/
int ListDelete(SqList *&L,int i,ElemType &e);//&L����Ӧ�÷�ʽ����L�������޸�ָ��L

#endif