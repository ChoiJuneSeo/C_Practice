#include <stdio.h>
#include "func.h"
#include "common.h"
#include <wchar.h>
#include <assert.h>
#include <iostream>
#include "ar.h"

//#define HUNGRY 0x01
//#define THIRSTY 0x02
//#define TIRED 0x04
//#define FIRE 0x08
//#define COLD 0x10
//#define POISON 0x20


int main() {

	// ������ ( ���� �Ҵ� )
	
	// ���� �Ҵ�
	// 1. ��Ÿ�� �߿� ���� ����
	// 2. ����ڰ� ���� �����ؾ���(����)


	int* pInt = (int*)malloc(100);

	float* pF = (float*)malloc(4);
	int* pI = (int*)pF;

	*pF = 2.4f;

	if (nullptr != pInt)
	{
		free(pInt);
	}

	free(pF);

	// �����迭
	
	int a = 10;

	int arr[10] = {};

	// �迭 ������ ������ ������ ������ ����� �� ����.
	// int arr[a];

	// ��ü (Instance)
	// int 

	tArr s1;
	InitArr(&s1);

	for (int i = 0; i < 10; ++i)
	{
		PushBack(&s1, i);
	}

	ReleaseArr(&s1);

	return 0;

}
