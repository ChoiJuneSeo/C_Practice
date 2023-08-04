#include <stdio.h>
#define HUNGRY 0x01
#define THIRSTY 0x02
#define TIRED 0x04
#define FIRE 0x08
#define COLD 0x10
#define POISON 0x20


// 전역변수
int global = 0;

// 함수

int Add(int left, int right)
{
	return left + right;
}

int main() {
	// 자료형 : Data Type
	// 정수형 : char(1), short(2), int(4) long(4), long long(8) 
	// 실수형 : float, double

	int i = 0;   // 4 Byte 정수형 자료
	
	// 1 Byte  -> 256가지 -> 0~255 양수 
	//  unsinged -> 양수만

	unsigned char c = 0;

	c = 1;
	c = 256; // = 0

	// signed char -> -128 ~ 0 ~ 127
	// 0000 0001 == 1 | 1111 1111 == -1
	char c1 = 1;
	c1 = -1;
	
	// 2의 보수법 = 1의 보수법 + 1
	// 1의 보수법 = 반전

	// EX)  if 몬스터의 체력 int형 -> 32bit = +-21억 -> 몬스터 체력이 21억을 넘는 순간 음수가 되면서 몬스터 사망.
	// EX) 스타크래프트 255업이 풀업인 이유 -> 1byte였기 때문...?

	// 정수형과 실수형은 표현 방식이 다르다.
	// 실수 표현바식은 정밀도에 의존한다.
	// 따라서 double(8) 자료형이 float(4) 보다 더 아래의 소수점까지 정확하게 표현이 가능하다.

	// 정수는 정수끼리, 실수는 실수끼리 연산하되, 두 표현 방식의 피 연산자가 연산될 경우 명시적으로 반환하자.

	float f = 10.2415f + (float)20;
	// ------------------------------------------------------07/22------------------------------------------------------------------------
	
	// 연산자
	// 대입 연산자 =
	// 산술 연산자 + , - , * , / , ...
	int data = 10 + 10;
	data += 20;

	data = 10 % 3;   // 10. % 3. (피연산자가 모두 정수일 때만 가능)
	data = (int)(10. / 3.);  // data는 int형
	// 실수를 상수로 적을 경우 소수점 뒤에 f를 붙이면 float, 붙이지 않으면(.) double자료형으로 간주한다.

	// 증감 연산자 ( ++ , -- )
	
	data = 0;
	data++;
	// 1 증가가 아닌 한 단계 증가라고 생각. (포인터까지 고려)
	++data; // 제일 먼저
	data--; // 제일 나중에
	int a = 10;
	data = a++; // data = 10;
	data = ++a; // data = 11;
	// 평소엔 전위로 쓰는 것을 추천

	// 논리 연산자 !(역) , &&(and) , ||(or)
	// true : 0이 아닌 값 , 보통 1 
	// false : 0

	int tf = true; // tf = 1
	bool isTrue = 100; // isTrue = true
	isTrue = !isTrue;
	a = 100;
	a = !a; // a = 0;

	isTrue = 0 && 200;
	isTrue = 0 || 200;

	// ------------------------------------07/30-------------------------------------------
	// 비교 연산자
	// == , != , < , > , <= , >=
	
	// if else 구문
	a = 10;

	if (0 && 200)
	{
		a = 20;
	}
	
	if (a == 20)
	{
		a = 30;
	}
	else if(a == 30)
	{
		a = 0;
	}
	else
	{
		a = 1;
	}
	
	// switch case
	int b = 30;
	switch (b)
	{
	case 10:
	case 20:
		printf("what?");
		break;
	case 30:
		printf("\nIt's b!!\n");
		break;
	default:
		printf("Default");
		break;
	}

	if (b == 30 || 10 || 20)
	{
		b = 1;
	}

	// 삼항 연산자 ? :
	// 굳이? 쓸꺼면 써라?
	a = 10;
	a == 10 ? a = 100 : a = 10;

	if (a == 10)
	{
		a = 100;
	}
	else
	{
		a = 10;
	}

	//----------------------------------------07/31-----------------------------------

	// 비트 연산자

	// 비트 쉬프트 << , >> 

	unsigned char byte = 1;

	byte <<= 1;    // 0001 -> 0010  == 2

	byte >>= 2;    // 0010 -> 0000 == 0 

	unsigned char byte2 = 13;

	byte2 <<= 3;		// 2^n  배수
	byte2 >>= 3;		// 2^n 으로 나눈 몫

	// 비트 곱(&), 합(|), xor(^) , 반전(~)
	// & : 둘다 1이면 1 , | : 둘중 하나라도 1이면 1 , ^ : 같으면 0 , 다르면 1, ~ : 0은1 1은0으로
	
	unsigned int iStatus = 0;
	// 상태 추가
	iStatus |= HUNGRY;
	
	// 전처리기 #define HUNGRY 1
	// 전처리기 사용 이유 : 가독성 , 유지보수가 편함 
	// int형은 32bit 이므로 32개의 상태를 표현 가능

	iStatus |= THIRSTY;	

	// 상태 확인
	if (iStatus & THIRSTY) 
	{

	}
	// 특정 비트 제거
	iStatus &= ~THIRSTY;

	//-------------------------------08/01--------------------------------------------

	// 변수
	// 1. 지역변수
	// 2. 전역 변수
	// 3. 정적 변수
	// 4. 외부 변수

	int iName = 0;

	// 지역변수
	// 괄호 안에 선언된 변수(함수, 지역)
	{
		// 변수명 규칙
		int iName = 1;
	}

	iName = 2;

	// 함수 
	data = Add(10, 20);


	// 반복문
	/*for (반복자 초기화; 반복자 조건 체크; 반복자 변경)
	{

	}*/

	for (int i = 0; i < 10; ++i) 
	{
		if (i % 2 == 1)
		{
			continue;
		}

		printf("%d\n", i);
		// break
	}
	// 입출력 함수 printf(), scanf()

	i = 0;
	while (i < 2)
	{
		printf("OoO\n");

		++i;
	}






	return 0;

}
