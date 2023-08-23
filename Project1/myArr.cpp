#include "myArr.h"
#include <iostream>


void InitArr(mAr* _pArr)
{
	_pArr->iCount = 0;
	_pArr->iMaxCount = 64;
	_pArr->pInt = (int*)malloc(sizeof(int) * _pArr->iMaxCount);
}

void PushBack(mAr* _pArr, int _iData)
{
	if (_pArr->iCount == _pArr->iMaxCount)
	{
		Reallocate(_pArr);
	}

	_pArr->pInt[_pArr->iCount] = _iData;
	

	++_pArr->iCount;
}

void Reallocate(mAr* _pArr)
{
	int* ptemp = (int*)malloc(sizeof(int) * _pArr->iMaxCount * 2);

	for (int i = 0; i < _pArr->iCount; ++i)
	{
		ptemp[i] = _pArr->pInt[i];
	}

	free(_pArr->pInt);

	_pArr->pInt = ptemp;

	_pArr->iMaxCount *= 2;

}

void ReleaseArr(mAr* _pArr)
{
	free(_pArr->pInt);
	_pArr->iCount = 0;
	_pArr->iMaxCount = 0;
}

void BubbleSort(mAr* _pArr)
{
	if (_pArr->iCount <= 1)
	{
		return;
	}

	for (int i = _pArr->iCount - 1; i > 0  ; --i)
	{
		for (int j = _pArr->iCount - 1; j > 0; --j)
		{
			if (_pArr->pInt[j] < _pArr->pInt[j - 1])
			{
				

				int ptemp2 = _pArr->pInt[j];

				_pArr->pInt[j] = _pArr->pInt[j - 1];

				_pArr->pInt[j - 1] = ptemp2;

			}
		}
	}
}

//while (true)
//{
//	bool bFinish = true;
//
//	for (int j = _pArr->iCount - 1; j > 0; --j)
//	{
//		if (_pArr->pInt[j] < _pArr->pInt[j - 1])
//		{
//
//
//			int ptemp2 = _pArr->pInt[j];
//
//			_pArr->pInt[j] = _pArr->pInt[j - 1];
//
//			_pArr->pInt[j - 1] = ptemp2;
//
//			bFinish = false;
//		}
//	}
//	if (bFinish = true)
//	{
//		break;
//	}
//}
