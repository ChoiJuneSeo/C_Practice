
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
		m_i = i;
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
	// ������, �Ҹ���
	// ��ü ����, �Ҹ� �� �ڵ����� ȣ��
	// ���� ������ ������ �⺻ ������, �⺻ �Ҹ��ڰ� �������
	
	// ��� �Լ�
	// �ش� Ŭ������ ����ϴ� ���� �Լ�
	// �ش� Ŭ������ ��ü�� �ʿ���



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