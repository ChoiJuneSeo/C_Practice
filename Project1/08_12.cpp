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
//printf("1�� ���� ���� : %d\n", iData);
//
//
//char cArr[2] = { 1,1 };
//short* pS = (short*)cArr;
//
//iData = *pS;
//
//printf("2�� ���� ���� : %d\n", iData);
//
//
//int a = 100;
//
//Test(&a);
//
//
//printf("��� : %d\n", a);
//
//// scanf_s("%d", &a);
//
//// const 
//const int cint = 100;
//
//// ���ȭ
//// r-value : ���
//// l-value : ����
//
//pI = (int*)&cint;
//
//*pI = 300;
//
//printf("��� : %d\n", cint);	// cint���� 300�� ��������� �����Ϸ��� �������� �޸𸮿��� 100 �����;;
//
//
//int* pInt = &a;
//
//*pInt = 1;
//
//pInt = nullptr;
//// ============
//// const ������
//// ============
//const int* pConstInt = &a;
//
////	*pConstInt = 100;
//
//int b = 0;
//
//pConstInt = &b;
//// ============
//// ������ const
//// ============
//int* const pIntConst = &a;
//
//*pIntConst = 400;
//
////	pIntConst = &b;
//
//// �ʱ�ȭ�� ����Ų ��� ����Ŵ, ����Ű�� ������ ������ �� ����
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
