#include <stdio.h>
#include "func.h"
#include "common.h"

//#define HUNGRY 0x01
//#define THIRSTY 0x02
//#define TIRED 0x04
//#define FIRE 0x08
//#define COLD 0x10
//#define POISON 0x20


int main() {

	// ¹®ÀÚ
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

	





	return 0;

}
