#pragma once

typedef  struct _tabArr
{
	int* pInt;
	int icount;
	int iMaxCount;

}tArr;


// �迭 �ʱ�ȭ �Լ�
void InitArr(tArr* _pArr);

// ������ �߰� �Լ�
void PushBack(tArr* _pArr,int _iData);

// ������ ���Ҵ� �Լ�
void Reallocate(tArr* _pArr);

// �迭 �޸� ���� �Լ�
void ReleaseArr(tArr* _pArr);
