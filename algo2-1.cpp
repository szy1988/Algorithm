#include<iostream>
#include<stdlib.h>
#include<malloc.h>
#include"algo2-1.h"

using namespace std;

/*��ʼ��˳���*/
void InitList(SqList *&L)//&L����Ӧ�÷�ʽ����L�������޸�ָ��L,��ʼ������Ȼ��Ҫ�Բ������޸�
{
	L=(SqList*)malloc(sizeof(SqList));
	L->length=0;		
}

/*�ͷ�˳���*/
void DestroyList(SqList *&L)
{
	LinkList *p=L,*q=p->next;
	while(q!=NULL)//һ�����һ�������ͷ�
	{
		free(p);
		p=q;
		q=p->next;
	}
	free(p);
}

/*�ж�˳����Ƿ�Ϊ��*/
int ListEmpty(SqList *L)
{
	return (L->length==0);	
	
}

/*����˳���ĸ���*/
int ListLength(SqList *L)
{
	return(L->length);	
}

/*��ӡ˳���*/
void PrintList(SqList *L)
{
	if(ListEmpty(L))
	{
		cout<<"The SqList is empty!"<<endl;
		return ;
	}
	for(int i=0;i<L->length;i++)
		cout<<L->data[i]<<'\t';
	cout<<endl;
}

/*��ȡ˳����е�i��Ԫ��*/
int GetElem(SqList *L,int i,ElemType &e)
{
	if(i<0||i>L->length)
	{
		return 0;
	}
	e=L->data[i];
	return 1;
}

/*��˳����в���Ԫ��e�����������±�*/
int LocateElem(SqList *L,ElemType e)
{
	int i;
	for(i=0;i<L->length;i++)
	{
		if(L->data[i]!=e)
			continue;
		else
			break;	
	}	
	if(i>=L->length)
		return 0;
	else
		return i;
}

/*��˳���ĵ�i��λ�ò���Ԫ��e*/
int InsertList(SqList *&L,int i,ElemType e)//&L����Ӧ�÷�ʽ����L�������޸�ָ��L
{
	if(i<0||i>L->length)
		return 0;
	for(int j=L->length;j>i;j--)
	{
		L->data[j]=L->data[j-1];//�ӵ�i��Ԫ�ؿ�ʼ��������ƶ�
	}
	L->data[i]=e;
	L->length++;
	return 1;
}

/*��˳�����ɾ����i��Ԫ��*/
int ListDelete(SqList *&L,int i,ElemType &e)//&L����Ӧ�÷�ʽ����L�������޸�ָ��L
{
	if(i<0||i>=L->length)
		return 0;
	e=L->data[i];//����ɾ����Ԫ��
	for(int j=i;j<L->length-1;j++)
	{
		L->data[j]=L->data[j+1];
	}	
	L->length--;
	return 1;
}