//다시 복습 꼭 하기 //제일 오래걸린 문제임
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	char S[1000000];
//	scanf_s("%s", S, sizeof(S));
//	int array_s[26];
//	for (int i = 0; i < 26; i++)
//		array_s[i] = i + 'a';
//	int array_b[26];
//	for (int i = 0; i < 26; i++)
//		array_b[i] = i + 'A';
//	int array_cnt[26]={0,};
//
//	for (int i = 65; i < 91; i++)
//	{
//		for (int j = 0; j < strlen(S); j++)
//		{
//			if (array_b[i - 'A'] == S[j])
//				array_cnt[i-'A']++;
//
//		}
//	}
//	for (int i = 97; i < 123; i++)
//	{
//		for (int j = 0; j < strlen(S); j++)
//		{
//			if (array_s[i - 'a'] == S[j])
//				array_cnt[i-'a']++;
//
//		}
//	}
//	int result = 0;
//	int max = 0;
//	for (int i = 0; i < 26; i++)
//		if (array_cnt[i] >= max)
//		{
//			max = array_cnt[i];
//			result = i;
//
//		}
//	int cnt = 0;
//	for (int i = 0; i < 26; i++)
//	{
//	
//		if (array_cnt[i] == max)
//			cnt++;
//		
//	}
//	if (cnt > 1)
//	{
//		printf("%c\n", '?');
//
//	}
//	else if (cnt == 1)
//	{
//		printf("%c\n", result + 'A');
//
//	}
//}
//#include<stdio.h>
//int main(void)
//{
//	int array[10];
//	printf("%d", array[0]);
//} 
//그냥 이렇게 선언만 하면 쓰레기값이 배열된다 (0이 배열되는 게 아님!!

//두번째풀이

//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	int alphaCnt[26] = { 0, };
//	int big[26];
//	int small[26];
//
//	for (int i = 65; i < 91; i++)
//		big[i - 'A'] = i;
//	for (int i = 97; i < 123; i++)
//		small[i - 'a'] = i;
//
//	char str[1000000];
//
//	scanf_s("%s", str, sizeof(str));
//
//	for (int i = 0; i < 26; i++)
//	{
//		for (int j = 0; j < strlen(str); j++)
//		{
//			if (str[j] == big[i])
//				alphaCnt[i]++;
//		}
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		for (int j = 0; j < strlen(str); j++)
//		{
//			if (str[j] == small[i])
//				alphaCnt[i]++;
//		}
//	}
//	int max = 0;
//	int maxalpha;
//	for (int i = 0; i < 26; i++)
//	{
//		if (max < alphaCnt[i])
//		{
//			max = alphaCnt[i];
//			maxalpha = i + 'A';
//		}
//
//	}
//	int cnt = 0;
//	for (int i = 0; i < 26; i++)
//	{
//		if (alphaCnt[i] == max)
//			cnt++;
//
//	}
//	if (cnt != 1)
//		printf("%c\n", '?');
//
//	else
//		printf("%c\n", maxalpha);
//
//}