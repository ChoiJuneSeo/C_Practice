//unsigned int GetLength(const wchar_t* _pStr)
//{
//	// ���� ���� üũ �뵵
//	int i = 0;
//
//	while (_pStr[i] != '\0')
//	{
//
//		++i;
//
//	}
//
//	return i;
//}
//void StrCat(wchar_t* _pDest, unsigned int _iBufferSize, const wchar_t* _pSrc)
//{
//	// ����ó��
//
//	int iDestLen = GetLength(_pDest);
//	int iSrcLen = GetLength(_pSrc);
//
//	if (_iBufferSize < iDestLen + iSrcLen + 1) // NULL ���� �������� ���
//	{
//		assert(nullptr);
//	}
//
//	// ���ڿ� �̾������
//	// 1. Dest ���ڿ��� ���� Ȯ��
//	// 2. �ݺ������� Src ���ڿ��� Dest �� ��ġ�� �����ϱ�
//	// 3. Src ���ڿ��� ���� ������ �ݺ� ����
//
//	for (int i = 0; i < iSrcLen; ++i)
//	{
//		_pDest[iDestLen + i] = _pSrc[i];
//
//	}
//
//
//}
//int Mycmp(wchar_t* _a, wchar_t* _b)
//{
//	int aLen = GetLength(_a);
//	int bLen = GetLength(_b);
//
//	for (int i = 0; i < aLen && i < bLen; ++i)
//	{
//		if (_a[i] < _b[i])
//		{
//			return -1;
//		}
//		if (_a[i] > _b[i])
//		{
//			return 1;
//		}
//	}
//	if (aLen < bLen)
//	{
//		return -1;
//	}
//	if (aLen > bLen)
//	{
//		return 1;
//	}
//
//	return 0;
//}
//typedef struct {
//	int a;
//	float b;
//}MYST2;
//
//
//
//// ����
//// char(1) , wchar(2)
//
//char c = 'a';
//wchar_t wc = L'a';
//
//char szChar[10] = "abcdef";
//
//wchar_t szWChar[10] = L"abcdef";
//
//short arrShort[10] = { 97,98,99,100,101,102, };
//
//int a = 0;
//
//const wchar_t* pChar = L"abcdef";
//
//szChar[1] = 'z';
//// pChar[1] = 'z';
//
//// ��Ƽ����Ʈ ( ���� �Ⱦ����� , ms�� ����� )
//char szTest[10] = "abc�ѱ�";
//
//// ���̵����Ʈ ( ���� 2����Ʈ )
//wchar_t szTestW[10] = L"abc�ѱ�";
//
//wchar_t szName[10] = L"Raimond";
//
//int iLen = wcslen(szName);
//int iLen2 = GetLength(szName);
//
//// ���ڿ� �̾� ������
//wchar_t szString[100] = L"abc";
//
//wcscat_s(szString, 100, L"def");
//wcscat_s(szString, 100, L"ghi");
//StrCat(szString, 100, L"holy");
//
//printf("%ws", szString);
//printf("\n");
//
//// �Լ� �����ε� (���ڿ� ���� ���� �̸��� �������� �Լ� ����)
//
//wchar_t t1[10] = L"abc";
//wchar_t t2[10] = L"abb";
//int r = Mycmp(t1, t2);
//
//printf("%d\n", r);
//
//// ����ü�� ������
//
//MYST2 s = {};
//MYST2* pST = &s;
//
//(*pST).a = 100;
//(*pST).b = 10.2f;
//
//// ���� �ǹ�
//
//pST->a = 120;
//pST->b = 1033.321f;
