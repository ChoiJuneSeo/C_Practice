#pragma once


typedef struct _tagNode
{
	
	int iData;
	struct _tagNode* pNextNode;

}node;


typedef struct _tagList 
{

	int iCount;
	node* pHeadNode;
	
}tLL;

void InitList(tLL* _pList);
void PushBack(tLL* _pList, int _iData);
void ReleaseList(tLL* _plist);
void PushFront(tLL* _pList, int _iData);