

//#include<stdio.h>
//int main(void)
//{
//	//array�� ��������0~9���� ���ڵ��� ī��Ʈ�Ѵ�
//	int input[10];
//	int array[42] = { 0, };
//	int num;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &input[i]);
//		
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//
//		array[input[i] % 42]++; //array�� �������� �� �� �ִ� ������ ���������� --> (0~41) 42��
//
//	}
//	int cnt = 0;
//
//	for (int i = 0; i < 42; i++) //i<42 ��� ���� ���߾��� . ������ ��ü�� ���� üũ�ؾ���
//	{
//		if (array[i] != 0)
//			cnt++;
//	}
//	printf("%d\n", cnt);
//
//}
//
////���δٸ� �������� ������ ���ϴ� �ٸ� �˰���
//
//
////for (int i = 0; i < 10; i++)
////{
////	int cnt = 0;
////	for (int j = i + 1; j < 10; j++) {
////		if (remain[i] == remain[j])cnt++;
////	}
////	if (cnt == 0)result++;
////}
////
////�̷��� ����for���� �̿��Ͽ� remain�ϳ��� ���� �ٸ� ��� remain�� ������ ���ϴ� ����� �ִ�

//�ι�° Ǯ��
//#include<stdio.h>
//int main(void)
//{
//	int n;
//	int arr[42] = { 0, };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &n);
//		arr[n % 42]++;
//
//	}
//	int cnt = 0;
//	for (int i = 0; i < 42; i++)
//	{
//		if (arr[i] != 0)
//			cnt++;
//	}
//	printf("%d\n", cnt);
//}