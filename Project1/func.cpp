#include "func.h"
#include "common.h"
#include <stdio.h>

int g_iExtern = 200;

int Add(int left, int right)
{
	printf("g_iStatic 의 값은 : %d\n", g_iStatic);
	printf("g_iExtern 의 값은 : %d\n", g_iExtern);

	return left + right;
}
int Factorial(int num)
{
	int iValue = 1;

	for (int i = 0; i < num - 1; ++i)
	{
		iValue = iValue * (i + 2);

	}
	return iValue;
}
int reFact(int num)
{
	if (num == 1)
	{
		return 1;
	}

	return num * reFact(num - 1);

}
int Fibo(int num)
{
	if (num == 1 || num == 2)
	{
		return 1;
	}

	return Fibo(num - 1) + Fibo(num - 2);

}
int Fibo2(int num)
{
	int a = 1;
	int b = 1;
	int temp = 0;

	if (num == 1 || num == 2)
	{
		return 1;

	}

	for (int i = 0; i < num - 2; ++i)
	{
		temp = a + b;
		a = b;
		b = temp;
	}

	return temp;
}

