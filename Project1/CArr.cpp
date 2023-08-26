#include "CArr.h"
#include <assert.h>

void CArr::push_back(int _Data)
{
	if (m_iMaxCount <= m_iCount)
	{
		resize(m_iMaxCount*2);
	}

	m_pInt[m_iCount++] = _Data;
}

void CArr::resize(int _iResizeCount)
{
	// 현재 최대 수용량 보다 더 적은 수치로 확장하려는 경우
	if (m_iMaxCount >= _iResizeCount)
	{
		assert(nullptr);
	}

	// 1. 리사이즈 시킬 개수만큼 동적 할당 한다.
	int* pNew = new int[_iResizeCount];

	// 2. 기존 데이터들을 복사
	for (int i = 0; i < m_iCount; ++i)
	{
		pNew[i] = m_pInt[i];
	}

	// 3. 기존 공간 메모리 해제
	delete[] m_pInt;

	// 4. 배열이 새로 할당된 공간을 가르키게 한다.
	m_pInt = pNew;

	// 5. Maxcount 갱신
	m_iMaxCount = _iResizeCount;

}

int& CArr::operator[](int idx)
{
	return m_pInt[idx];
}

CArr::CArr()
	: m_pInt(nullptr)
	, m_iCount(0)
	, m_iMaxCount(2)
{
	m_pInt = new int[2];
}

CArr::~CArr()
{
	delete[] m_pInt;

	/*	int* p = new int;
		delete p;	*/
}