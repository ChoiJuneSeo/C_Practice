#include <iostream>
#include "CArr.h"
#include "myArr.h"


//int Add(int a, int b)
//{
//	return a + b;
//}
//
//float Add(float f, float f2)
//{
//	return f + f2;
//}

template<typename T>
T Add(T a, T b)
{
	return a + b;
}


int main()
{
	// ����ü --> Ŭ����

	// ��ü���� ��� Ư¡
	// 1. ĸ��ȭ
	// ����� �����ϱ� ���� �ʿ��� ��� ����, ����, ���м�
	// ��� �Լ���

	// 2. ���

	// 3. ������

	// 4. �߻�ȭ

	// ����ü ���� ���� �迭 --> Ŭ���� ����

	// C++ ���� �Ҵ� new, delete
	
	// CArr ����

	mAr arr = {};
	InitArr(&arr);

	PushBack(&arr, 10);
	PushBack(&arr, 20);
	PushBack(&arr, 30);

	ReleaseArr(&arr);

	CArr<int> cArr;
	
	cArr.push_back(10);
	cArr.push_back(20);
	cArr.push_back(30);

	int a = cArr[1];
	cArr[1] = 30;

	// �Լ� ���ø�  ( �Լ��� ������� X )

	int i = Add<int>(10, 20);

	float f = Add<float>(10.f, 20.f);

	// Ŭ���� ���ø�
	CArr<float> CArr2;
	
	CArr2.push_back(10.2f);

	return 0;
}