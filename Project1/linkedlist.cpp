#include "linkedlist.h"
#include <iostream>

void InitList(tLL* _pList)
{
	_pList->pHeadNode = nullptr;
	_pList->iCount = 0;
}

void PushBack(tLL* _pList, int _iData)
{
	node* pNode = (node*)malloc(sizeof(node));

	pNode->iData = _iData;
	pNode->pNextNode = nullptr;

	// 추가한 데이터가 처음인지 아닌지
	if (_pList->pHeadNode == nullptr)
	{
		_pList->pHeadNode = pNode;
	}
	else
	{
		// 현재 가장 마지막 노드의 pNext를 변경
		node* pCurrentFinalNode = _pList->pHeadNode;

		while (pCurrentFinalNode->pNextNode)
		{
			pCurrentFinalNode = pCurrentFinalNode->pNextNode;
		}

		pCurrentFinalNode->pNextNode = pNode;

	}

	++_pList->iCount;

}

void ReleaseList(tLL* _plist)
{
	node* pDN = _plist->pHeadNode;

	while (pDN)
	{
		node* pNext = pDN->pNextNode;
		free(pDN);
		pDN = pNext;
	}
}

// 만들어보기
void PushFront(tLL* _pList, int _iData)
{
	node* pNode = (node*)malloc(sizeof(node));
	
	pNode->iData = _iData;
	pNode->pNextNode = nullptr;

	if (_pList->pHeadNode==nullptr)
	{
		_pList->pHeadNode = pNode;
	}
	else
	{
		pNode->pNextNode = _pList->pHeadNode;
		_pList->pHeadNode = pNode;
	}

	++_pList->iCount;
}
