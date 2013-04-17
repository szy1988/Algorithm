// exp2-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include<iostream>
#include"algo2-1.h"

using namespace std;

int main()
{
	SqList *L;
	ElemType e;
	cout<<"(1)初始化顺序表L"<<endl;
	InitList(L);

	cout<<"(2)依次采用尾插入法插入a,b,c,d,e元素"<<endl;
	InsertList(L,0,'a');
	InsertList(L,1,'b');
	InsertList(L,2,'c');
	InsertList(L,3,'d');
	InsertList(L,4,'e');
	InsertList(L,5,'g');
	InsertList(L,6,'h');

	cout<<"(3)输出顺序表L:"<<endl;
	PrintList(L);

	cout<<"(4)顺序表L的长度为L->length="<<ListLength(L)<<endl;
	
	cout<<"(5)判断顺序表是否为空"<<endl;
	if (ListEmpty(L))
	{
		cout<<"顺序表为空"<<endl;
	} 
	else
	{
		cout<<"顺序表不为空"<<endl;
	}
	GetElem(L,2,e);
	cout<<"(6)顺序表L的第2个元素为="<<e<<endl;

	cout<<"(7)顺序表中元素a的位置i="<<LocateElem(L,'a')<<endl;

	cout<<"(8)在第3个元素位置上插入f元素"<<endl;
	InsertList(L,3,'f');
	cout<<"(9)输出顺序表"<<endl;
	PrintList(L);

	cout<<"(10)删除顺序表中的第二个元素"<<endl;
	ListDelete(L,2,e);																	
	cout<<"(11)输出顺序表L"<<endl;
	PrintList(L);

	cout<<"(12)释放顺序表L"<<endl;
	DestroyList(L);
	return 0;
}

