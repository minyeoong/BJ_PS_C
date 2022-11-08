//정수형 자료형에 담기에는 25자리수는 너무 크다 --> 정수형으로 %10, /10 으로 끊는 방법은 한계가 있음
// -> 문자열으로 접근해서 마지막에 정수형으로 바꿔준다.

//공백 없이 --> 문자열로 인식해서 하나하나 끊는다
//https://develop247.tistory.com/22
//아스키코드에 대한 이해가 필요하다.

//#include<stdio.h>
//
//int main()
//{
//    int n, sum = 0;
//    scanf_s("%d", &n);
//    char arr[n]; // 크기가 변수인 배열 (VLA - 가변길이배열)같은 경우에 visual studio에선 지원하지 않는다.
//    scanf_s("%s", &arr);
//    for (int i = 0; i < n; i++) {
//        sum += arr[i] - '0';
//    }
//    //문자 -> int 로 변환하는 아이디어
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


//두번째풀이
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