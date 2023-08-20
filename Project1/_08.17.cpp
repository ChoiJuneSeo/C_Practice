//unsigned int GetLength(const wchar_t* _pStr)
//{
//	// 문자 개수 체크 용도
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
//	// 예외처리
//
//	int iDestLen = GetLength(_pDest);
//	int iSrcLen = GetLength(_pSrc);
//
//	if (_iBufferSize < iDestLen + iSrcLen + 1) // NULL 문자 공간까지 계산
//	{
//		assert(nullptr);
//	}
//
//	// 문자열 이어붙히기
//	// 1. Dest 문자열의 끝을 확인
//	// 2. 반복적으로 Src 문자열을 Dest 끝 위치에 복사하기
//	// 3. Src 문자열의 끝을 만나면 반복 종료
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
//// 문자
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
//// 멀티바이트 ( 이젠 안쓸거임 , ms만 사용중 )
//char szTest[10] = "abc한글";
//
//// 와이드바이트 ( 전부 2바이트 )
//wchar_t szTestW[10] = L"abc한글";
//
//wchar_t szName[10] = L"Raimond";
//
//int iLen = wcslen(szName);
//int iLen2 = GetLength(szName);
//
//// 문자열 이어 붙히기
//wchar_t szString[100] = L"abc";
//
//wcscat_s(szString, 100, L"def");
//wcscat_s(szString, 100, L"ghi");
//StrCat(szString, 100, L"holy");
//
//printf("%ws", szString);
//printf("\n");
//
//// 함수 오버로딩 (인자에 따라서 같은 이름의 여러가지 함수 가능)
//
//wchar_t t1[10] = L"abc";
//wchar_t t2[10] = L"abb";
//int r = Mycmp(t1, t2);
//
//printf("%d\n", r);
//
//// 구조체와 포인터
//
//MYST2 s = {};
//MYST2* pST = &s;
//
//(*pST).a = 100;
//(*pST).b = 10.2f;
//
//// 같은 의미
//
//pST->a = 120;
//pST->b = 1033.321f;
