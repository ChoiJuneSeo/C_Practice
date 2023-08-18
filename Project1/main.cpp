#include <stdio.h>
#include "func.h"
#include "common.h"
#include <wchar.h>
#include <assert.h>
#include <iostream>

//#define HUNGRY 0x01
//#define THIRSTY 0x02
//#define TIRED 0x04
//#define FIRE 0x08
//#define COLD 0x10
//#define POISON 0x20


int main() {

	// 힙영역 ( 동적 할당 )
	
	// 동적 할당
	// 1. 런타임 중에 대응 가능
	// 2. 사용자가 직접 관리해야함(해제)


	int* pInt = (int*)malloc(100);

	float* pF = (float*)malloc(4);
	int* pI = (int*)pF;

	*pF = 2.4f;

	if (nullptr != pInt)
	{
		free(pInt);
	}

	free(pF);




	return 0;

}
