//#include<stdio.h>
//int main(void)
//{
//	char array[80];
//	int num;
//	int score = 0;
//	int cnt = 0;
//
//	scanf_s("%d", num);
//	for (int i = 0; i < 80; i++)
//	{
//		if (array[i] == 'X')
//			break;
//
//		else
//			cnt++;
//
//	}
//}
//�� Ǭ �� Ǯ��

//#include <stdio.h>
//#include <string.h> //strlen()�Լ� ������ �߰���Ų ��������� ���ڿ��� ���̸� ��ȯ�ϴ� �Լ���
//
//int main(void) {
//
//    int input, score, sum;
//    char test[80]; //���ڿ� �迭���� ũ�� �������ְ� �Է°�(���ڿ�) = test �� ���ڿ� �Է��� ������ ���ڿ��� ũ�� + NULL���� �迭�� ����.
//
//    scanf_s("%d", &input);
//
//    for (int i = 0; i < input; i++)
//    {
//        sum = 0;
//        score = 1;//���������� ���� ���ڿ� �ϳ��� ó���Ѵ�. ���� sum,score�� �ʱ�ȭ�ϴ� ������ ���Ⱑ �ž���
//
//        scanf_s("%s", test,sizeof(test));
//        //���ڿ��� scanf_s�� ���� ���� &test��� �ϸ� �ȵǰ� test��� �ؾ� ��, sizeof(test)��� ũ�⸦ �����������
//
//        for (int j = 0; j < strlen(test); j++) // strlen �Լ��� NULL������ \0�� ���ڿ� ���̿��� �������� ����
//        {
//            if (test[j] == 'O')
//            {
//                sum += score;
//                score++;
//                /*sum += score;
//                score++;*/
//                //�� �� ������ �ٽ��̾���
//            }
//            if (test[j] == 'X')  score = 1; //X�� ���´ٸ� score =1�� �ʱ�ȭ ��Ű�� �� �ſ� �߿���
//
//        }
//        printf("%d\n", sum);
//    }
//}
//
////�ٽ� ���̵��: �������� �ؼ��� ��� �� ���ΰ�, score�� �ʱ�ȭ ��Ű�� �� �߿����� 


//�ٽ� ���� �� �� �ڵ�
//#include<stdio.h>
//#include<string.h>
//
//int main(void)
//{
//	char quiz[80];
//	int score, sum,num;
//	scanf_s("%d", &num);
//	for (int i = 0; i < num; i++)
//	{
//		score = 1;
//		sum = 0;
//		scanf_s("%s", quiz, sizeof(quiz));
//		for (int j = 0; j < strlen(quiz); j++)
//		{
//			if (quiz[j] == 'O')
//			{
//				sum += score;
//				score++;
//			}
//			if (quiz[j] == 'X')
//			{
//				score = 1;
//			}
//		}
//		printf("%d\n", sum);
//	}
//}

//�ι�° Ǯ��

//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	char str[80];
//	int N;
//	scanf_s("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		int cnt = 0;
//		int score = 0; 
//
//		scanf_s("%s", str, sizeof(str));
//		getchar();
//		for (int i = 0; i < strlen(str); i++)
//		{
//			if (str[i] == 'X')
//			{
//				cnt = 0;
//			}
//	
//			else if (str[i] == 'O')
//			{
//				cnt += 1;
//				score += cnt;
//			}
//		
//		}
//
//		printf("%d\n", score);
//	}
//
//	
//}
//cnt =0�� if���� ����µ� else if������ �ʱ�ȭ�� �ɱ�?? �������� �������� ����??
//�ʱ�ȭ �ȴ�. cnt�� �����ϰ� �ʱ�ȭ �� �� �װͺ��� �� �ܰ� �պ� 