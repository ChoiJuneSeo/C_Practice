#include <iostream>
#include "CArr.h"
#include "myArr.h"

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

	CArr cArr;
	
	cArr.push_back(10);
	cArr.push_back(20);
	cArr.push_back(30);

	int a = cArr[1];
	cArr[1] = 30;


	return 0;
}