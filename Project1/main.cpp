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

	// 연결형 리스트
	tLL list;
	InitList(&list);
	PushBack(&list, 100);
	PushBack(&list, 200);
	PushBack(&list, 300);
	

	ReleaseList(&list);
	return 0;

}

// 1. 가변배열 만들기
// 2. 가변배열 안에 넣은 데이터 정렬 ( 버블 정렬 )
