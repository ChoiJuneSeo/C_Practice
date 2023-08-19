#include "ar.h"
#include <iostream>


void InitArr(tArr* _pArr)
{
	_pArr->pInt = (int*)malloc(sizeof(int)*2);
	_pArr->icount = 0;
	_pArr->iMaxCount =2;
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

void Reallocate(tArr* _pArr)
{

}

void ReleaseArr(tArr* _pArr)
{
	free(_pArr->pInt);
	_pArr->icount = 0;
	_pArr->iMaxCount = 0;
}
