#pragma once

typedef struct myTagArr
{
	int* pInt;
	int iCount;
	int iMaxCount;

}mAr;

// 배열 초기화 함수
void InitArr(mAr* _pArr);

// 데이터 추가 함수
void PushBack(mAr* _pArr, int _iData);

// 데이터 재할당 함수
 void Reallocate(mAr* _pArr);

// 배열 메모리 해제 함수
void ReleaseArr(mAr* _pArr);

// 버블 정렬
void BubbleSort(mAr* _pArr);