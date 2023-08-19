#pragma once

typedef  struct _tabArr
{
	int* pInt;
	int icount;
	int iMaxCount;

}tArr;


// 배열 초기화 함수
void InitArr(tArr* _pArr);

// 데이터 추가 함수
void PushBack(tArr* _pArr,int _iData);

// 데이터 재할당 함수
void Reallocate(tArr* _pArr);

// 배열 메모리 해제 함수
void ReleaseArr(tArr* _pArr);
