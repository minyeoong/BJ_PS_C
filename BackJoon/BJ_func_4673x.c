//int d(int n)
//{
//	int sum = 0;
//	sum += n;
//	int first;
//	while (n>0) // 
//	{
//		first = n % 10;
//		n /= 10;
//		sum += first;
//		
//	}
//
//	return sum;
//}
//d(n)�Լ� ���ϴ� �ͱ��� �������� �׷��� ���� �ѹ��� ��� ������,,,


//�ٽ� ���̵��: array[n]���� array�� �������� ������ �ǹ��� ���ΰ�??

//���� d(n)�Լ����� ��� array[]�� �ְ� 10000������ ��ü ���� ����ִ� �迭�� ���ϴ� ���̵� �����ߴ�
//�׷��� �װ��� ��� �� ���ΰ�??
//int array[10]; ��� �������� �� array�� �Ҵ�� ���� ������ �������̴�.
//int array[10]={0,};��� �������� �� array�� �Ҵ�� ���� ��� 0�̴�.
//total[10000] = {0,}; ��� �����ϰ�
//array ���� ���Ѵ�.

//array�� �ڸ����� ���ڸ� �ǹ��� ��, 1���� 10000�� ������ �� array[1]���� array[10000]�� ������
//#include<stdio.h>
//int d(int n);
//int main(void)
//{
//	int array[10001];
//	for (int i = 1; i < 10001; i++)
//	{
//		
//		if (d(i) < 10001)
//			array[d(i)] = 1;
//	}
//	for (int i = 1; i < 10001; i++)
//	{
//		if (array[i] != 1)
//			printf("%d\n", i);
//	}
//	return 0;
//
//
//}
//int d(int n)
//{
//	int sum = 0;
//	sum += n;
//	int first;
//	while (n>0) // 
//	{
//		first = n % 10;
//		n /= 10;
//		sum += first;
//		
//	}
//
//	return sum;
//}
//�ι�° Ǯ��

//#include<stdio.h>
//int dn(int num);
//int main(void)
//{
//	int dnResult;
//	int cnt = 0;
//	int arr[10001]={0,};
//	for(cnt =1; cnt<10001; cnt++)
//	{
//		
//		dnResult = dn(cnt);
//		
//		if(dnResult<=10000)
//			arr[dnResult]++;
//	}
//	for (int i = 1; i < 10001; i++)
//	{
//		if (arr[i] ==0)
//			printf("%d\n", i);
//	}
//}
//int dn(int n)
//{
//	int sum = 0;
//	sum += n;
//	int first;
//	while (n > 0) // 
//	{
//		first = n % 10;
//		n /= 10;
//		sum += first;
//
//	}
//
//	return sum;
//}
