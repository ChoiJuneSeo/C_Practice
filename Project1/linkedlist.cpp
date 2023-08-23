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

	// �߰��� �����Ͱ� ó������ �ƴ���
	if (_pList->pHeadNode == nullptr)
	{
		_pList->pHeadNode = pNode;
	}
	else
	{
		// ���� ���� ������ ����� pNext�� ����
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

// ������
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
