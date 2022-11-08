////개중요한 문제
//#include<stdio.h>
//int main(void)
//{
//	int num,a,b,first,newNum=0,result;
//	scanf_s("%d", &num);
//	result = num;
//
//	
//	
//	int cnt = 0;
//	while (1) //while(num !=newNum)에서 바꿈
//	{
//			
//			
//		a = num % 10;
//		b = num / 10;
//		first = a + b;
//		first = first % 10;
//		newNum = (a * 10) + first;
//		num = newNum; //이걸 못했었다. while문 반복이 들어갈 때 a,b가 다시 정의되려면 newNum이 
//		// 다시 num으로 들어갔어야 함 그러니까 위에서 result = num으로 입력된 num의 값을 기록하는 것.
//
//
//		cnt++;
//		if (result == num) break;
//			
//	}
//	printf("%d\n", cnt);
//
//		
//	
//}
//
////핵심 아이디어:  26 에서 2와 6을 나눈다는 아이디어에서 26을 10으로 나눈 나머지와 몫으로 표현할 수 있음
////while문을 이용해서 새로만들어진 수가 입력된 수와 같아질 때까지 반복할 수 있음


////두번째 풀이
//#include<stdio.h>
//int main(void)
//{
//	int N,a,b,new,contain;
//	scanf_s("%d", &N);
//	int cnt = 0;
//	contain = N;
//	while (1)
//	{
//		int new = 0;
//		int first = 0;
//		a = N % 10;
//		N /= 10;
//		b = N % 10;
//		first = (a + b) % 10;
//		new = 10 * a + first;
//		cnt++;
//		if (new ==contain)
//		{
//			printf("%d\n", cnt);
//			break;
//		}
//		N = new;
//	}
//}