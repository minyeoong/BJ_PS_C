//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	int arr[26];
//	char S[100];
//	scanf_s("%s", S,sizeof(S)); //sizeof �ʼ��� ����� ��
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
////�ٽ� ���̵��: a���� �ҹ��� ������� ����� �Ǿ����
//// ���??? --> a�� �ش��ϴ� �ƽ�Ű�ڵ� �������� �ݺ������� ������Ű�� a���� ��������� 


////�ι�° Ǯ��
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