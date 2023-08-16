#include <stdio.h>
#include "func.h"
#include "common.h"
#include <wchar.h>



//#define HUNGRY 0x01
//#define THIRSTY 0x02
//#define TIRED 0x04
//#define FIRE 0x08
//#define COLD 0x10
//#define POISON 0x20

unsigned int GetLength(const wchar_t* _pStr)
{
	// 문자 개수 체크 용도
	int i = 0;

	while (_pStr[i] != '\0')
	{
		
		++i;
		
	}

	return i;
}


int main() {

	// 문자
	// char(1) , wchar(2)

	char c = 'a';
	wchar_t wc = L'a';

	char szChar[10] = "abcdef";

	wchar_t szWChar[10] = L"abcdef";

	short arrShort[10] = { 97,98,99,100,101,102, };

	int a = 0;

	const wchar_t* pChar = L"abcdef";

	szChar[1] = 'z';
	// pChar[1] = 'z';

	// 멀티바이트 ( 이젠 안쓸거임 , ms만 사용중 )
	char szTest[10] = "abc한글";
	
	// 와이드바이트 ( 전부 2바이트 )
	wchar_t szTestW[10] = L"abc한글";

	wchar_t szName[10] = L"Raimond";

	int iLen = wcslen(szName);
	int iLen2 = GetLength(szName);

	// 문자열 이어 붙히기
	// wcscat_s();



	return 0;

}
