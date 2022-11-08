//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	int arr[26];
//	char S[100];
//	scanf_s("%s", S,sizeof(S)); //sizeof 필수로 해줘야 함
//	int i, j;
//	for (int i = 0; i < 26; i++)
//		arr[i] = -1;
//	for (i = 97; i <= 122; i++)
//	{
//		for (j =0 ; j < strlen(S); j++)
//		{
//			if (S[j] == i)
//			{
//				arr[S[j] - 'a'] = j;
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < 26; i++)
//		printf("%d", arr[i]);
//}
////핵심 아이디어: a부터 소문자 순서대로 출력이 되어야함
//// 어떻게??? --> a에 해당하는 아스키코드 정수값을 반복문으로 증가시키면 a부터 순서대로임 


////두번째 풀이
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char S[100];
//	int alpha[26];
//	int alphaCnt[26];
//	scanf_s("%s", S, sizeof(S));
//	for (int i = 0; i < 26; i++)
//		alphaCnt[i] = -1;
//	for (int i = 97; i < 123; i++)
//		alpha[i - 'a'] = i;
//
//	for (int i = 0; i < 26; i++)
//	{
//		for (int j = 0; j < strlen(S); j++)
//		{
//			
//			if (alpha[i] == S[j])
//			{
//				alphaCnt[i] = j;
//			}
//			if (alphaCnt[i] != -1)
//				break;
//		}
//	}
//	for (int i = 0; i < 26; i++)
//	{
//
//		printf("%d ", alphaCnt[i]);
//	}
//	printf("\n");
//	
//}