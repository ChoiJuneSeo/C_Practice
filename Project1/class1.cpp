
#include <iostream>
#include "ar.h"

struct  tMY
{

};

class cMY
{
	// ���� ���� ������
	// prinate, protected(���), public

private:
	int m_i;
public:

	float m_f;
public:
	void SetInt(int i)
	{
		this->m_i = i;
	}
	
	// ������ �����ε�
	// ���� ������
	cMY& operator = (const cMY& _Other)
	{
		m_i = _Other.m_i;
		m_f = _Other.m_f;

		return *this;
	}

public:
	// ������
	cMY()
	{
		m_i = 100;
		m_f = 0.f;
	}

	// �̴ϼȶ�����
	/*cMY() : m_i(100)
			,m_f(0.f)
	{

	}*/

	// �Ҹ���
	~cMY()
	{

	}
	
};

int main()
{
	// C++ class Ư¡
	// �������� ������
	// Ŭ���� ���� ������� or ��� �Լ��� ���� ���� 
	
	// ������, �Ҹ���
	// ��ü ����, �Ҹ� �� �ڵ����� ȣ��
	// ���� ������ ������ �⺻ ������, �⺻ �Ҹ��ڰ� �������
	
	// ��� �Լ�
	// �ش� Ŭ������ ����ϴ� ���� �Լ�
	// �ش� Ŭ������ ��ü�� �ʿ���
	// ����Լ��� ��ü�� ���ؼ� ȣ���ϸ�, �ش� ��ü�� �ּҰ� this �����ͷ� ���޵ȴ�.
	
	
	{
		// ���۷���
		// �ڷ��� * ������;  ������ ���� ����
		// *������ ����;  �����ͷ� �ּ� ������
		// &����; ������ �ּڰ�
		// �ڷ���& ������; ���۷��� ���� ����

		// C++ �� �߰��� ���
		// �����Ϳ� ����
		// ������ �����Ѵ�.
		// ���������� ���ؼ� ���������� ������ ���� �� �� �ִ�.

		int a = 10;
		int* const p = &a;
		*p = 100;

		int& iRef = a;
		iRef = 100;


		const int* const p2 = &a;
		// *p2 = 10;
		
		const int& iRefConst = a;
		// iRefConst = 10;
	}
	

	tArr arr = { };
	InitArr(&arr);
	PushBack(&arr, 10);

	arr.icount = 100;


	ReleaseArr(&arr);


	cMY c;

	c.m_f = 12.34f;
	c.SetInt(10);
	
	cMY c2;
	c2.SetInt(100);

	cMY c3;
	c3.SetInt(1000);

	c = c2 = c3;
	



	return 0;
}