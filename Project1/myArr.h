#pragma once

typedef struct myTagArr
{
	int* pInt;
	int iCount;
	int iMaxCount;

}mAr;

// �迭 �ʱ�ȭ �Լ�
void InitArr(mAr* _pArr);

// ������ �߰� �Լ�
void PushBack(mAr* _pArr, int _iData);

// ������ ���Ҵ� �Լ�
 void Reallocate(mAr* _pArr);

// �迭 �޸� ���� �Լ�
void ReleaseArr(mAr* _pArr);

// ���� ����
void BubbleSort(mAr* _pArr);