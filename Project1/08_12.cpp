//void Test(int* a)
//{
//	*a = 500;
//}
//
//void Output(const int* pI)
//{
//	int i = *pI;
//	int* pInt = (int*)pI;
//	*pInt = 100;
//}
//
//
//
//
//
//
//
//short sArr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//int* pI = (int*)sArr;
//int iData = *((short*)(pI + 2));
//printf("1번 문제 정답 : %d\n", iData);
//
//
//char cArr[2] = { 1,1 };
//short* pS = (short*)cArr;
//
//iData = *pS;
//
//printf("2번 문제 정답 : %d\n", iData);
//
//
//int a = 100;
//
//Test(&a);
//
//
//printf("출력 : %d\n", a);
//
//// scanf_s("%d", &a);
//
//// const 
//const int cint = 100;
//
//// 상수화
//// r-value : 상수
//// l-value : 변수
//
//pI = (int*)&cint;
//
//*pI = 300;
//
//printf("출력 : %d\n", cint);	// cint에는 300이 들어있으나 컴파일러가 레지스터 메모리에서 100 갖고옴;;
//
//
//int* pInt = &a;
//
//*pInt = 1;
//
//pInt = nullptr;
//// ============
//// const 포인터
//// ============
//const int* pConstInt = &a;
//
////	*pConstInt = 100;
//
//int b = 0;
//
//pConstInt = &b;
//// ============
//// 포인터 const
//// ============
//int* const pIntConst = &a;
//
//*pIntConst = 400;
//
////	pIntConst = &b;
//
//// 초기화시 가리킨 대상만 가리킴, 가리키는 원본을 수정할 수 없음
//const int* const pConstIntConst = nullptr;
//
//int const* p = &a;
//
//{
//	int a = 0;
//	const int* pInt = &a;
//	// a = 100;
//}
//a = 1000;
//Output(&a);
//
//// Ctrl + Shitf + Space ?
