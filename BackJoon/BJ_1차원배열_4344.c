//#include<stdio.h>
//int main(void)
//{
//	int num,N,score[1000];
//	scanf_s("%d", &num);
//	for (int i = 0; i < num; i++)
//	{
//		int sum = 0;
//		float avg = 0;
//		int cnt = 0,total_cnt=0;
//		float result = 0;
//		scanf_s("%d", &N);
//		for(int j=0; j<N; j++)
//		{
//			scanf_s("%d", &score[j]);
//			sum += score[j];
//		}
//		avg = (float)sum / N;
//		for (int k = 0; k < N; k++)
//		{
//			if (avg < score[k])
//				cnt++;
//			total_cnt++;
//		}
//		result = (float)cnt / total_cnt;
//		result *= 100;
//		
//		printf("%.3f%\n",result);
//	}
//}