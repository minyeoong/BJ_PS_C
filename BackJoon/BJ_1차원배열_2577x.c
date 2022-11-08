//매우 중요한 array 문제, 자릿수 문제
//arr[10]={0,} 이렇게 지정하면 arr배열의 크기가 10이 되는 것임 
//arr[]=추가할 숫자 이렇게 하면 리스트 추가처럼 배열에 원하는 숫자가 추가되는 것임

//핵심아이디어 : 정수를 자릿수에 따라 쪼개야할 때는 10으로 나눗셈/나머지 연산을 하면 
//간단하게 처리할 수 있다.


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
//        num = n % 10; //num = 일의자릿수
//        //기본 아이디어는 arr[n] = (n 숫자의 개수) 
//        arr[num]++; //가장 핵심적인 포인트이다. 배열을 0으로 초기화하고 1씩 더한다는 아이디어
//        n /= 10; //숫자에서 제일 첫번째 자릿수를 잘라가면서 검증해보기
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

//두번째풀이
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