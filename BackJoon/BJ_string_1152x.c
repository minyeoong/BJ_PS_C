////scanf_s("%[^\n]s", str, sizeof(str)); // scanf는 공백을 문자열의 끝으로 인식하기 때문에 공백을 받아줄 수 없다.
//////%[^\n]s 는 enter값이 들어오기 전까지 받는다는 걸 의미한다.
////예외처리 관련해서 매우 중요한 문제다.
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char str[1000000];
//	
//	scanf_s("%[^\n]s", str,sizeof(str)); // scanf는 공백을 문자열의 끝으로 인식하기 때문에 공백을 받아줄 수 없다.
//	
////%[^\n]s 는 enter값이 들어오기 전까지 받는다는 걸 의미한다.
//	int cnt = 0;
//
//	// strlen(str) == 1인 경우 예외처리 하는 거에서 계속 틀렸었다. 
//	//공백을 받을 때 공백을 받지 않을 때로 나뉜다.
//	if (strlen(str) == 1)
//	{
//		if (str[0] == ' ')
//			printf("0\n");
//		else
//			printf("1\n");
//
//	}
//	else
//	{
//		cnt = 0;
//		for (int i = 0; i < strlen(str); i++)
//		{
//			if (str[i] == ' ')
//			{
//				if (i != 0 && i != strlen(str)-1)
//				{
//					cnt++;
//				}
//			}
//		}
//	
//		printf("%d\n", cnt+1);
//
//	}
//}
//	//char s[10] = "hello";
//	//printf("%d\n", strlen(s));
//	//// -> 출력값은 5이다.
//	////문자열 배열에서 널값은 문자열의 크기로 세지 않는다.
//
//	
//
//	


////두번째 풀이
//#include<stdio.h>
//#include<string.h>
//
//int main(void)
//{
//	char str[1000000];
//	scanf_s("%[^\n]s", str, sizeof(str));
//
//	int cnt = 0;
//	if (strlen(str) == 1)
//	{
//		if (str[0]!= ' ')
//			printf("%d\n", 1);
//		else
//			printf("%d\n", 0);
//	}
//	else if (strlen(str) > 1)
//	{
//		for (int i = 0; i < strlen(str); i++)
//		{
//			if (i != 0 && i != strlen(str)-1)
//				if (str[i] == ' ')
//					cnt++;
//		}
//		printf("%d\n",cnt+1);
//	}
//
//}