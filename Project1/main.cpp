
#include <iostream>
#include "ar.h"

struct  tMY
{

};

class cMY
{
	// 접근 제한 지정자
	// prinate, protected(상속), public

private:
	int m_i;
public:

	float m_f;
public:
	void SetInt(int i)
	{
		m_i = i;
	}

public:
	// 생성자
	cMY()
	{
		m_i = 100;
		m_f = 0.f;
	}
	// 이니셜라이져
	/*cMY() : m_i(100)
			,m_f(0.f)
	{

	}*/

	// 소멸자
	~cMY()
	{

	}
	
};

int main()
{
	// C++ class 특징
	// 생성자, 소멸자
	// 객체 생성, 소멸 시 자동으로 호출
	// 직접 만들지 않으면 기본 생성자, 기본 소멸자가 만들어짐
	
	// 멤버 함수
	// 해당 클래스가 사용하는 전용 함수
	// 해당 클래스의 객체가 필요함



	tArr arr = { };
	InitArr(&arr);
	PushBack(&arr, 10);

	arr.icount = 100;


	ReleaseArr(&arr);


	cMY c;

	c.m_f = 12.34f;
	c.SetInt(10);

	return 0;
}