#include <stdio.h>
#include <iostream>
#include <assert.h>
#include "linkedlist.h"

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
	PushBack(&list, 200);
	PushBack(&list, 300);
	

	ReleaseList(&list);
	return 0;

}

// 1. �����迭 �����
// 2. �����迭 �ȿ� ���� ������ ���� ( ���� ���� )
