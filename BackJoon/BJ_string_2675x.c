//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	int T;
//	scanf_s("%d", &T);
//	for (int i = 0; i < T; i++)
//	{
//		char S[20];
//		
//		
//		int R = 0;
//		int space[200];
//		scanf_s("%d", &R);
//		scanf_s("%s", S, sizeof(S));
//		getchar(); //getchar(); 써야할듯?? 왜냐? 문자를 scanf_s로 받으니까
//		for (int j = 0; j < strlen(S); j++)
//		{
//			for (int k = 0; k < R; k++)
//			{
//				/*SA[k] += S[j];*/ //문자열은 이렇게 붙일 수 없다.
//				/*printf("%c", S[j]);*/ // 이렇게 하는 게 베스트인데 밑에 두 줄로 할 수도 있음(아스키코드 사용)
//				space[k] = S[j];
//				printf("%c", space[k]);
//			}
//			
//		}
//		printf("\n");
//		
//		
//
//
//	}
//
//	
//}

////두번째 풀이
//
//#include<stdio.h>
//#include<string.h>
//
//int main(void)
//{
//	int N;
//	scanf_s("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		char S[20];
//		int R = 0;
//		scanf_s("%d", &R);
//		scanf_s("%s", S, sizeof(S));
//		getchar();
//		for (int i = 0; i < strlen(S); i++)
//		{
//			for (int j = 0; j < R; j++)
//				printf("%c", S[i]);
//		}
//		printf("\n");
//		
//
//	}
//}