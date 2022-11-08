

//#include<stdio.h>
//int main(void)
//{
//	//array로 나머지가0~9까지 숫자들을 카운트한다
//	int input[10];
//	int array[42] = { 0, };
//	int num;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &input[i]);
//		
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//
//		array[input[i] % 42]++; //array는 나머지가 될 수 있는 숫자의 갯수여야함 --> (0~41) 42개
//
//	}
//	int cnt = 0;
//
//	for (int i = 0; i < 42; i++) //i<42 라고 하지 못했었다 . 나머지 전체에 대해 체크해야함
//	{
//		if (array[i] != 0)
//			cnt++;
//	}
//	printf("%d\n", cnt);
//
//}
//
////서로다른 나머지의 개수를 구하는 다른 알고리즘
//
//
////for (int i = 0; i < 10; i++)
////{
////	int cnt = 0;
////	for (int j = i + 1; j < 10; j++) {
////		if (remain[i] == remain[j])cnt++;
////	}
////	if (cnt == 0)result++;
////}
////
////이렇게 이중for문을 이용하여 remain하나에 대해 다른 모든 remain이 같은지 비교하는 방법도 있다

//두번째 풀이
//#include<stdio.h>
//int main(void)
//{
//	int n;
//	int arr[42] = { 0, };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &n);
//		arr[n % 42]++;
//
//	}
//	int cnt = 0;
//	for (int i = 0; i < 42; i++)
//	{
//		if (arr[i] != 0)
//			cnt++;
//	}
//	printf("%d\n", cnt);
//}