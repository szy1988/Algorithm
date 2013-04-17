#include<iostream>
#include<stdlib.h>
#include<malloc.h>
#include"algo2-1.h"

using namespace std;

/*初始化顺序表*/
void InitList(SqList *&L)//&L是以应用方式调用L，可以修改指针L,初始化链表当然需要对参数做修改
{
	L=(SqList*)malloc(sizeof(SqList));
	L->length=0;		
}

/*释放顺序表*/
void DestroyList(SqList *&L)
{
	LinkList *p=L,*q=p->next;
	while(q!=NULL)//一个结点一个结点的释放
	{
		free(p);
		p=q;
		q=p->next;
	}
	free(p);
}

/*判断顺序表是否为空*/
int ListEmpty(SqList *L)
{
	return (L->length==0);	
	
}

/*返回顺序表的个数*/
int ListLength(SqList *L)
{
	return(L->length);	
}

/*打印顺序表*/
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

/*获取顺序表中第i个元素*/
int GetElem(SqList *L,int i,ElemType &e)
{
	if(i<0||i>L->length)
	{
		return 0;
	}
	e=L->data[i];
	return 1;
}

/*在顺序表中查找元素e，返回它的下标*/
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

/*在顺序表的第i个位置插入元素e*/
int InsertList(SqList *&L,int i,ElemType e)//&L是以应用方式调用L，可以修改指针L
{
	if(i<0||i>L->length)
		return 0;
	for(int j=L->length;j>i;j--)
	{
		L->data[j]=L->data[j-1];//从第i个元素开始依次向后移动
	}
	L->data[i]=e;
	L->length++;
	return 1;
}

/*在顺序表中删除第i个元素*/
int ListDelete(SqList *&L,int i,ElemType &e)//&L是以应用方式调用L，可以修改指针L
{
	if(i<0||i>=L->length)
		return 0;
	e=L->data[i];//保存删除的元素
	for(int j=i;j<L->length-1;j++)
	{
		L->data[j]=L->data[j+1];
	}	
	L->length--;
	return 1;
}