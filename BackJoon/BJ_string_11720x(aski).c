//������ �ڷ����� ��⿡�� 25�ڸ����� �ʹ� ũ�� --> ���������� %10, /10 ���� ���� ����� �Ѱ谡 ����
// -> ���ڿ����� �����ؼ� �������� ���������� �ٲ��ش�.

//���� ���� --> ���ڿ��� �ν��ؼ� �ϳ��ϳ� ���´�
//https://develop247.tistory.com/22
//�ƽ�Ű�ڵ忡 ���� ���ذ� �ʿ��ϴ�.

//#include<stdio.h>
//
//int main()
//{
//    int n, sum = 0;
//    scanf_s("%d", &n);
//    char arr[n]; // ũ�Ⱑ ������ �迭 (VLA - �������̹迭)���� ��쿡 visual studio���� �������� �ʴ´�.
//    scanf_s("%s", &arr);
//    for (int i = 0; i < n; i++) {
//        sum += arr[i] - '0';
//    }
//    //���� -> int �� ��ȯ�ϴ� ���̵��
//    printf("%d", sum);
//}
//#include <stdio.h>
//int main(void)
//{
//	printf("%c\n", 65);
//	printf("%d\n", 'A');
//	printf("%c\n", 'A' + 32);
//	printf("%d", 65 - 'A');
//}


//�ι�°Ǯ��
//#include<stdio.h>
//int main(void)
//{
//	int N;
//	char str[100];
//	scanf_s("%d", &N);
//	scanf_s("%s", str, sizeof(str));
//	int sum = 0;
//	for (int i = 0; i < N; i++)
//	{
//
//		sum += str[i] - 48;
//	}
//	printf("%d\n", sum);
//
//}