//#include<stdio.h>
//int main(void)
//{
//	int num=0;
//	double input[1000];
//	double re_input[1000];
//	int max = 0;
//	double sum = 0,avg;
//	//input ,re_input �̷��� �� �ʿ䰡 ���� 
//	//input[i] /= max �̷��� ������ ����
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
//		//re_input[i]������ �ʿ� ���� input[i]/=max ��� ������ �ƴ�.
//		re_input[i] *= 100;
//		sum += re_input[i];
//	}
//
//	avg = sum / num;
//
//	printf("%lf\n", avg);	
//}
////�Ǽ��� ������ ������ ������ �� %d�� �ƴ϶� %f or %lf�� �޾ƾ��Ѵ�.
////�ٽ� ���̵�� : �Ǽ��� ������ �����ϴ� �� �ٽ��̾���
//// �迭���� �־��ִ� ���ڸ� ������ �ʾҴٸ� int array[100];�� ���� �����Ѵ�
////int array[];�� �ȵȴ� ũ�⸦ ���ϱ� �ؾ� �Ѵ�.


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