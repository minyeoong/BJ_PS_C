//#include<stdio.h>
//int main(void)
//{
//	int num=0;
//	double input[1000];
//	double re_input[1000];
//	int max = 0;
//	double sum = 0,avg;
//	//input ,re_input 이렇게 둘 필요가 없고 
//	//input[i] /= max 이렇게 했으면 됐음
//	scanf_s("%d", &num);
//
//	for (int i = 0; i < num; i++)
//	{
//		scanf_s("%lf", &input[i]);
//		if (input[i] > max)
//			max = input[i];
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		re_input[i] = input[i] / max;
//		//re_input[i]선언할 필요 없이 input[i]/=max 라고 했으면 됐다.
//		re_input[i] *= 100;
//		sum += re_input[i];
//	}
//
//	avg = sum / num;
//
//	printf("%lf\n", avg);	
//}
////실수로 선언을 했으면 지정할 때 %d가 아니라 %f or %lf로 받아야한다.
////핵심 아이디어 : 실수와 정수를 구분하는 게 핵심이었다
//// 배열에서 넣어주는 숫자를 정하지 않았다면 int array[100];와 같이 선언한다
////int array[];는 안된다 크기를 정하긴 해야 한다.


//#include<stdio.h>
//int main(void)
//{
//	int N;
//	int max = 0;
//	double avg = 0;
//	double arr[1000] = { 0, };
//	scanf_s("%d", &N);
//
//	for (int i = 0; i < N; i++)
//	{
//		scanf_s("%lf", &arr[i]);
//		if (max < arr[i])
//			max = arr[i];
//	}
//	for (int i = 0; i < N; i++)
//	{
//		arr[i] = arr[i]*100 / max;
//		avg += arr[i];
//	}
//	avg /= N;
//	printf("%lf\n", avg);
//}