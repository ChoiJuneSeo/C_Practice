#include <stdio.h>

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
	

	return 0;

}
