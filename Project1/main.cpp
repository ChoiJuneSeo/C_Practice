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
	// ���� ���� üũ �뵵
	int i = 0;

	while (_pStr[i] != '\0')
	{
		
		++i;
		
	}

	return i;
}


int main() {

	// ����
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

	// ��Ƽ����Ʈ ( ���� �Ⱦ����� , ms�� ����� )
	char szTest[10] = "abc�ѱ�";
	
	// ���̵����Ʈ ( ���� 2����Ʈ )
	wchar_t szTestW[10] = L"abc�ѱ�";

	wchar_t szName[10] = L"Raimond";

	int iLen = wcslen(szName);
	int iLen2 = GetLength(szName);

	// ���ڿ� �̾� ������
	// wcscat_s();



	return 0;

}
