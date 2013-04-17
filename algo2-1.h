
#ifndef ALGO2_1_H
#define ALGO2_1_H

#define Maxsize 50
typedef char ElemType;
typedef struct
{
	
	ElemType data[Maxsize];
	int length;
}SqList;//顺序表类型定义

/*初始化顺序表*/
void InitList(SqList *&L);//&L是以应用方式调用L，可以修改指针L

/*释放顺序表*/
void DestroyList(SqList *L);

/*判断顺序表是否为空*/
int ListEmpty(SqList *L);

/*返回顺序表的个数*/
int ListLength(SqList *L);

/*打印顺序表*/
void PrintList(SqList *L);

/*获取顺序表中第i个元素*/
int GetElem(SqList *L,int i,ElemType &e);

/*在顺序表中查找元素e，返回它的序号*/
int LocateElem(SqList *L,ElemType e);

/*在顺序表的第i个位置插入元素e*/
int InsertList(SqList *&L,int i,ElemType e);//&L是以应用方式调用L，可以修改指针L

/*在顺序表中删除第i个元素*/
int ListDelete(SqList *&L,int i,ElemType &e);//&L是以应用方式调用L，可以修改指针L

#endif