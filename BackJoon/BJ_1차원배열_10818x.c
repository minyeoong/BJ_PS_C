//#include<stdio.h>
//int main(void)
//{
//	int num,input,min = 1000001,max=-1000001;
//	scanf_s("%d", &num);
//	for (int i = 0; i < num; i++)
//	{
//		scanf_s("%d", &input);
//		if (input > max)
//			max = input;
//		if (input < min)
//			min = input;
//	}
//	printf("%d %d", min, max);
//}
////핵심 아이디어 : min max를 계속해서 초기화 시켜 줌


////두번째 풀이
//#include<stdio.h>
//int main(void)
//{
//	int N, n, max = -1000001, min = 1000001;
//	scanf_s("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf_s("%d", &n);
//		if (max < n)
//		{
//			max = n;
//		}
//		if (min > n)
//		{
//			min = n;
//		}
//	}
//	printf("%d %d", min, max);	
//}