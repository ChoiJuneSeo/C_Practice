#pragma once

typedef struct _tagMYST
{
	int a;
	float f;

}MYST;
typedef struct _tagBig
{
	MYST k;
	int i;
	char c;

}BIG;
typedef int INT;


int Add(int left, int right);
int Factorial(int num);
int reFact(int num);
int Fibo(int num);
int Fibo2(int num);
