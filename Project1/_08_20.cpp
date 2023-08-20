//
//// 힙영역 ( 동적 할당 )
//
//// 동적 할당
//// 1. 런타임 중에 대응 가능
//// 2. 사용자가 직접 관리해야함(해제)
//
//
//int* pInt = (int*)malloc(100);
//
//float* pF = (float*)malloc(4);
//int* pI = (int*)pF;
//
//*pF = 2.4f;
//
//if (nullptr != pInt)
//{
//	free(pInt);
//}
//
//free(pF);
//
//// 가변배열
//
//int a = 10;
//
//int arr[10] = {};
//
//// 배열 개수를 선언할 때에는 변수를 사용할 수 없다.
//// int arr[a];
//
//// 객체 (Instance)
//// int 
//
//tArr s1;
//InitArr(&s1);
//
//for (int i = 0; i < 10; ++i)
//{
//	PushBack(&s1, i);
//}
//
//for (int i = 0; i < s1.icount; ++i)
//{
//	printf("%d\n", s1.pInt[i]);
//}
//
//ReleaseArr(&s1);
