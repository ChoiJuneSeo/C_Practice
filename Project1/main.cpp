#include <iostream>
#include "CArr.h"
#include "myArr.h"

int main()
{
	// 구조체 --> 클래스

	// 객체지향 언어 특징
	// 1. 캡슐화
	// 기능을 수행하기 위해 필요한 멤버 선언, 묶음, 은닉성
	// 멤버 함수들

	// 2. 상속

	// 3. 다형성

	// 4. 추상화

	// 구조체 버전 가변 배열 --> 클래스 버전

	// C++ 동적 할당 new, delete
	
	// CArr 예시

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