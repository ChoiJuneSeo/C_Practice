#include <stdio.h>
#include <iostream>
#include <assert.h>
#include "linkedlist.h"
#include "myArr.h"
#include <time.h>
//#include "func.h"
//#include "common.h"
//#include <wchar.h>
//#include "ar.h"
//#define HUNGRY 0x01
//#define THIRSTY 0x02
//#define TIRED 0x04
//#define FIRE 0x08
//#define COLD 0x10
//#define POISON 0x20


int main() {

	// ������ ����Ʈ
	tLL list;

	InitList(&list);

	PushBack(&list, 100);
	PushFront(&list, 500);
	PushBack(&list, 200);
	PushBack(&list, 300);
	PushFront(&list, 700);

	ReleaseList(&list);

	// myArr
	mAr arr;
	InitArr(&arr);

	// ����(����)
	srand(time(nullptr));
	

	for (int i = 100; i > 0; --i)
	{
		int iRand = rand() % 100 + 1;
		PushBack(&arr, iRand);
	}

	for (int i = 0; i < arr.iCount; ++i)
	{
		printf("%d\n",arr.pInt[i]);

	}
	
	 BubbleSort(&arr);
	 printf("����\n");
	for (int i = 0; i < arr.iCount; ++i)
	{
		printf("%d\n", arr.pInt[i]);

	}

	return 0;

}

// 1. �����迭 �����
// 2. �����迭 �ȿ� ���� ������ ���� ( ���� ���� )
