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
//				//���⼭ Ʋ���� , ������ ���� �ϳ��� ��� �׷�ܾ �� �� �ִ�. ex)bac
//				//���ӵ� �ܾ� ������ �ƴϴ�
//				//�ٽ� !
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

// ������ ���� Ʋ�� �ڵ���

//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char str[100];
//	int num;
//	int /*a = 0,*/cnt = 0; // a�� ���⼭ �ʱ�ȭ �����ָ� �翬�� �ȵ��� !
//	scanf_s("%d", &num);
//	cnt = num;
//	for (int i = 0; i < num; i++)
//	{
//		int a = 0; // a�� �ʱ�ȭ �����ִ� ��ġ�� �߿��ߴ�.
//		scanf_s("%s", str, sizeof(str));
//		getchar(); //getchar�� �� ��Ծ���..
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

//�̰͵� ���� Ʋ�� �ڵ���
//aaaaaabbbbbccccc --> abc�� �ؼ��� �� �ִٴ� ���� �����ϸ� 
//���ڰ� ���ӵǴ� �� ����� ���� ���ڰ� �ٲ� ���� �ָ��ϸ� �ȴ�
//�ϳ��� ������ �����ϰ� ��� �� ������ ���Ƴ���鼭
//���� ���� �� ���� �Ͱ� ���ҳ�? �� ã�ƺ����
//���۸��ؼ� ù��° �ڵ尡 best��

//�ι�°Ǯ��

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