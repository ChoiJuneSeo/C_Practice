#include "ar.h"
#include <iostream>


void InitArr(tArr* _pArr)
{
	_pArr->pInt = (int*)malloc(sizeof(int)*2);
	_pArr->icount = 0;
	_pArr->iMaxCount =2;
}

void Reallocate(tArr* _pArr)
{
	// 1. 2배 더 큰 공간을 동적 할당한다.
	int* pNew = (int*)malloc(_pArr->iMaxCount * 2 * sizeof(int));
	// 2. 기존 공간에 있던 데이터들을 새로 할당한 공간으로 복사한다.
	for (int i = 0; i < _pArr->icount; ++i)
	{
		pNew[i] = _pArr->pInt[i];
	}

	// 3. 기존 공간은 메모리 해제
	free(_pArr->pInt);
	
	// 4. 배열이 새로 할당된 공간을 가르키게 한다.
	_pArr->pInt = pNew;

	// 5. MaxCount 변경점 적용
	_pArr->iMaxCount *= 2;
}

void PushBack(tArr* _pArr, int _iData)
{

	if (_pArr->iMaxCount <= _pArr->icount)
	{
		// 재할당
		Reallocate(_pArr);
	}

	// 데이터 추가
	_pArr->pInt[_pArr->icount++] = _iData;


}
void ReleaseArr(tArr* _pArr)
{
	free(_pArr->pInt);
	_pArr->icount = 0;
	_pArr->iMaxCount = 0;
}
