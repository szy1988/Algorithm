// exp2-1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


#include<iostream>
#include"algo2-1.h"

using namespace std;

int main()
{
	SqList *L;
	ElemType e;
	cout<<"(1)��ʼ��˳���L"<<endl;
	InitList(L);

	cout<<"(2)���β���β���뷨����a,b,c,d,eԪ��"<<endl;
	InsertList(L,0,'a');
	InsertList(L,1,'b');
	InsertList(L,2,'c');
	InsertList(L,3,'d');
	InsertList(L,4,'e');
	InsertList(L,5,'g');
	InsertList(L,6,'h');

	cout<<"(3)���˳���L:"<<endl;
	PrintList(L);

	cout<<"(4)˳���L�ĳ���ΪL->length="<<ListLength(L)<<endl;
	
	cout<<"(5)�ж�˳����Ƿ�Ϊ��"<<endl;
	if (ListEmpty(L))
	{
		cout<<"˳���Ϊ��"<<endl;
	} 
	else
	{
		cout<<"˳���Ϊ��"<<endl;
	}
	GetElem(L,2,e);
	cout<<"(6)˳���L�ĵ�2��Ԫ��Ϊ="<<e<<endl;

	cout<<"(7)˳�����Ԫ��a��λ��i="<<LocateElem(L,'a')<<endl;

	cout<<"(8)�ڵ�3��Ԫ��λ���ϲ���fԪ��"<<endl;
	InsertList(L,3,'f');
	cout<<"(9)���˳���"<<endl;
	PrintList(L);

	cout<<"(10)ɾ��˳����еĵڶ���Ԫ��"<<endl;
	ListDelete(L,2,e);																	
	cout<<"(11)���˳���L"<<endl;
	PrintList(L);

	cout<<"(12)�ͷ�˳���L"<<endl;
	DestroyList(L);
	return 0;
}

