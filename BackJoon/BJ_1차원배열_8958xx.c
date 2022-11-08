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
//못 푼 내 풀이

//#include <stdio.h>
//#include <string.h> //strlen()함수 때문에 추가시킨 헤더파일임 문자열의 길이를 반환하는 함수임
//
//int main(void) {
//
//    int input, score, sum;
//    char test[80]; //문자열 배열에서 크기 선언해주고 입력값(문자열) = test 로 문자열 입력을 받으면 문자열의 크기 + NULL값이 배열에 들어간다.
//
//    scanf_s("%d", &input);
//
//    for (int i = 0; i < input; i++)
//    {
//        sum = 0;
//        score = 1;//이중포문을 통해 문자열 하나씩 처리한다. 따라서 sum,score을 초기화하는 위상은 여기가 돼야함
//
//        scanf_s("%s", test,sizeof(test));
//        //문자열을 scanf_s로 받을 때는 &test라고 하면 안되고 test라고 해야 함, sizeof(test)라고 크기를 지정해줘야함
//
//        for (int j = 0; j < strlen(test); j++) // strlen 함수는 NULL문자인 \0은 문자열 길이에서 포함하지 않음
//        {
//            if (test[j] == 'O')
//            {
//                sum += score;
//                score++;
//                /*sum += score;
//                score++;*/
//                //이 두 문장이 핵심이었음
//            }
//            if (test[j] == 'X')  score = 1; //X가 나온다면 score =1로 초기화 시키는 게 매우 중요함
//
//        }
//        printf("%d\n", sum);
//    }
//}
//
////핵심 아이디어: 수열적인 해석을 어떻게 할 것인가, score을 초기화 시키는 게 중요했음 


//다시 내가 써 본 코드
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

//두번째 풀이

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
//cnt =0을 if에서 만드는데 else if에서도 초기화가 될까?? 지역변수 전역변수 개념??
//초기화 된다. cnt를 선언하고 초기화 한 게 그것보다 한 단계 앞블럭 