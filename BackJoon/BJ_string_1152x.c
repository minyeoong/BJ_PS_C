////scanf_s("%[^\n]s", str, sizeof(str)); // scanf�� ������ ���ڿ��� ������ �ν��ϱ� ������ ������ �޾��� �� ����.
//////%[^\n]s �� enter���� ������ ������ �޴´ٴ� �� �ǹ��Ѵ�.
////����ó�� �����ؼ� �ſ� �߿��� ������.
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char str[1000000];
//	
//	scanf_s("%[^\n]s", str,sizeof(str)); // scanf�� ������ ���ڿ��� ������ �ν��ϱ� ������ ������ �޾��� �� ����.
//	
////%[^\n]s �� enter���� ������ ������ �޴´ٴ� �� �ǹ��Ѵ�.
//	int cnt = 0;
//
//	// strlen(str) == 1�� ��� ����ó�� �ϴ� �ſ��� ��� Ʋ�Ⱦ���. 
//	//������ ���� �� ������ ���� ���� ���� ������.
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
//	//// -> ��°��� 5�̴�.
//	////���ڿ� �迭���� �ΰ��� ���ڿ��� ũ��� ���� �ʴ´�.
//
//	
//
//	


////�ι�° Ǯ��
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