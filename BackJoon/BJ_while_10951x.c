//#include <stdio.h>
//
//int main() {
//	int A, B;
//	while (scanf("%d %d", &A, &B) != EOF)
//		printf("%d\n", A + B);
//	return 0;
//}
//
////10952문제와 다른 점은 입력값에서 break를 발동시키지 않는 다는 것임
////여기서 EOF라는 개념이 나오는데 End Of File이라고 파일의 끝을 표현하기 위해
////-1로 정의된 함수임 즉 파일의 끝이 되기 전까진 scanf_s를 실행해야 함.