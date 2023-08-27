#pragma once
#include <assert.h>


template<typename T>
class CArr
{
private:
	T* m_pData;
	int m_iCount;
	int m_iMaxCount;

public:
	void push_back(const T& _Data);
	void resize(int _iResizeCount);

	T& operator[] (int idx);
public:
	CArr();
	~CArr();
};

template<typename T>
CArr<T>::CArr()
	: m_pData(nullptr)
	, m_iCount(0)
	, m_iMaxCount(2)
{
	m_pData = new T[2];
}
template<typename T>
CArr<T>::~CArr()
{
	delete[] m_pData;

	/*	int* p = new int;
		delete p;	*/
}


template<typename T>
void CArr<T>::push_back(const T& _Data)
{
	if (m_iMaxCount <= m_iCount)
	{
		resize(m_iMaxCount * 2);
	}

	m_pData[m_iCount++] = _Data;
}

template<typename T>
void CArr<T>::resize(int _iResizeCount)
{
	// 현재 최대 수용량 보다 더 적은 수치로 확장하려는 경우
	if (m_iMaxCount >= _iResizeCount)
	{
		assert(nullptr);
	}

	// 1. 리사이즈 시킬 개수만큼 동적 할당 한다.
	T* pNew = new T[_iResizeCount];

	// 2. 기존 데이터들을 복사
	for (int i = 0; i < m_iCount; ++i)
	{
		pNew[i] = m_pData[i];
	}

	// 3. 기존 공간 메모리 해제
	delete[] m_pData;

	// 4. 배열이 새로 할당된 공간을 가르키게 한다.
	m_pData = pNew;

	// 5. Maxcount 갱신
	m_iMaxCount = _iResizeCount;

}
template<typename T>
T& CArr<T>::operator[](int idx)
{
	return m_pData[idx];
}

