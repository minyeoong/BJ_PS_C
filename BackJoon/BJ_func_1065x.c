////매우 중요한 문제임
////계속 막혔었음
//#include<stdio.h>
//int series(int a, int b, int c);
//
//int main(void)
//{
//	int N,cnt =0;
//	
//	scanf_s("%d", &N);
//
//	if (N < 100)
//	{
//		int cnt = 0;
//		for (int i = 1; i <= N; i++)
//			cnt++;
//		printf("%d\n", cnt);
//	}
//	else if (N >= 100 && N<1000)
//	{
//		for (int i = 100; i <= N; i++)
//		{
//			int a, b, c, result = 0;
//			int tempt = 0;
//			tempt = i;
//			//위 두문장을 못했어서 1시간 고생했음
//			//i는 for문에서 +1씩 되는 개념이지 새롭게 재정의 되는 개념이 아님
//			//같은 100 101 102 이어도 i=100, i=101, i=102 가 아니라는 것임
//
//			a = tempt % 10;
//			tempt /= 10;
//			b = tempt % 10;
//			tempt /= 10;
//			c = tempt % 10;
//			result = series(a, b, c);
//			if (result == 1)
//			{
//				cnt++;
//			}
//
//
//		}
//		cnt += 99;
//		printf("%d\n", cnt);
//
//
//	}
//	else if (N == 1000)
//		printf("%d\n", 144);
//}
//int series(int a, int b, int c)
//{
//	
//	if ((b-a)==(c-b))
//		return 1;
//	else if ((b - a) != (c - b))
//		return 0;
//}


////두번째 풀이
//#include<stdio.h>
//int main(void)
//{
//	int N;
//	int cnt = 99;
//	scanf_s("%d", &N);
//	if (N < 100)
//		printf("%d\n",N);
//	else if (N >= 100 && N<1000)
//	{
//		for (int i = 100; i <= N; i++ )
//		{
//			if (series(i) == 1)
//				cnt++;
//		}
//		printf("%d\n",cnt);
//	}
//	else if (N == 1000)
//	{
//		printf("%d", 144);
//	}
//}
//int series(int n)
//{
//	int a, b, c;
//	a = n % 10;
//	n /= 10;
//	b = n % 10;
//	n /= 10;
//	c = n % 10;
//	if (b - a == c - b)
//		return 1;
//	return 0;
//		
//}