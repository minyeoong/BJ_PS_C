//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	int num,cnt,a=0;
//	char str[100];
//	scanf_s("%d", &num);
//	cnt = num;
//	for (int i = 0; i < num; i++)
//	{
//	
//		scanf_s("%s",str,sizeof(str));
//		getchar();
//		for (int j = 0; j < strlen(str); j++)
//		{
//			if (strlen(str) == 1)
//			{
//				a++;
//			}
//
//			else if (strlen(str) > 1)
//			{
//				if (str[j] == str[j + 1])
//					a++;
//				//여기서 틀렸음 , 연속한 것이 하나도 없어도 그룹단어가 될 수 있다. ex)bac
//				//연속된 단어 기준이 아니다
//				//다시 !
//				else
//				{
//					a += 0;
//				}
//
//			}
//		}
//		if (a == 0)
//			cnt--;
//	}
//	printf("%d\n", cnt);
//}

// 위에는 내가 틀린 코드임

//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char str[100];
//	int num;
//	int /*a = 0,*/cnt = 0; // a를 여기서 초기화 시켜주면 당연히 안되지 !
//	scanf_s("%d", &num);
//	cnt = num;
//	for (int i = 0; i < num; i++)
//	{
//		int a = 0; // a를 초기화 시켜주는 위치가 중요했다.
//		scanf_s("%s", str, sizeof(str));
//		getchar(); //getchar도 또 까먹었다..
//		if (strlen(str) == 1)
//		{
//			a += 0;
//		}
//		else
//		{
//			for (int i = 0; i < strlen(str); i++)
//			{
//				for (int j = 0; j < strlen(str); j++)
//				{
//					if (str[i] == str[j])
//					{
//						
//						if (i < strlen(str) && i>0)
//						{
//							if (str[i] == str[i + 1] || str[i] == str[i - 1])
//							{
//								a += 0;
//							}
//							else if (i - j > 1 || i - j < -1)
//								a++;
//						}
//						else if (i == strlen(str))
//						{
//							if (str[i] == str[i - 1])
//							{
//								a += 0;
//							}
//							else if (i - j > 1 || i - j < -1)
//								a++;
//						}
//						else if (i == 0)
//						{
//							if (str[i] == str[i + 1])
//							{
//								a += 0;
//							}
//							else if (i - j > 1 || i - j < -1)
//								a++;
//						}
//
//					}
//				}
//			}
//
//		}
//		if (a > 0)
//			cnt--;
//	}
//	printf("%d\n", cnt);
//}

//이것도 내가 틀린 코드임
//aaaaaabbbbbccccc --> abc로 해석할 수 있다는 점을 생각하면 
//문자가 연속되는 건 상관이 없이 문자가 바뀔 때를 주목하면 된다
//하나의 변수를 선언하고 계속 그 변수로 갈아끼우면서
//변할 때는 그 전에 것과 같았나? 를 찾아보면됨
//구글링해서 첫번째 코드가 best임

//두번째풀이

//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	int N;
//	scanf_s("%d", &N);
//	int cnt;
//	cnt = N;
//	for (int i = 0; i < N; i++)
//	{
//		char str[100];
//		scanf_s("%s", str, sizeof(str));
//		getchar();
//		int alpha[26] = { 0, };
//
//		int criteria = 0;
//		for (int i = 0; i < strlen(str); i++)
//		{
//			
//			if (str[i] != criteria)
//			{
//				
//				criteria = str[i];
//				alpha[str[i] - 'a']++;
//			}
//			if (alpha[str[i] - 'a'] == 2)
//			{
//				cnt--;
//				break;
//			}
//		}
//	}
//	printf("%d\n", cnt);
//}