//�ſ� �߿��� array ����, �ڸ��� ����
//arr[10]={0,} �̷��� �����ϸ� arr�迭�� ũ�Ⱑ 10�� �Ǵ� ���� 
//arr[]=�߰��� ���� �̷��� �ϸ� ����Ʈ �߰�ó�� �迭�� ���ϴ� ���ڰ� �߰��Ǵ� ����

//�ٽɾ��̵�� : ������ �ڸ����� ���� �ɰ����� ���� 10���� ������/������ ������ �ϸ� 
//�����ϰ� ó���� �� �ִ�.


//#include <stdio.h>
//
//int main() {
//    int a, b, c;
//    int arr[10] = { 0, };
//    scanf("%d %d %d", &a, &b, &c);
//    int n = a * b * c;
//
//    int num;
//    while (n > 0) {
//        num = n % 10; //num = �����ڸ���
//        //�⺻ ���̵��� arr[n] = (n ������ ����) 
//        arr[num]++; //���� �ٽ����� ����Ʈ�̴�. �迭�� 0���� �ʱ�ȭ�ϰ� 1�� ���Ѵٴ� ���̵��
//        n /= 10; //���ڿ��� ���� ù��° �ڸ����� �߶󰡸鼭 �����غ���
//    }
//
//    for (int i = 0; i < 10; i++) {
//        printf("%d\n", arr[i]);
//    }
//
//    return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int a, b, c,n,firstNum;
//	int array[10] = { 0, };
//
//	scanf_s("%d",&a);
//	scanf_s("%d",&b);
//	scanf_s("%d",&c);
//	
//
//	n = a * b * c;
//
//	while(n>0)
//	{
//		firstNum = n % 10;
//		array[firstNum]++;
//		n /= 10;
//
//		 
//	}
//	for (int i = 0; i < 10; i++)
//		printf("%d\n", array[i]);
//
//}
//

//�ι�°Ǯ��
//#include<stdio.h>
//int main(void)
//{
//	int A, B, C,num;
//	scanf_s("%d", &A);
//	scanf_s("%d", &B);
//	scanf_s("%d", &C);
//	num = A * B * C;
//	int arr[10] = { 0, };
//	while(num>0)
//	{
//		arr[num % 10]++;
//		num /= 10;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}