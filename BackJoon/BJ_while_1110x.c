////���߿��� ����
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
//	while (1) //while(num !=newNum)���� �ٲ�
//	{
//			
//			
//		a = num % 10;
//		b = num / 10;
//		first = a + b;
//		first = first % 10;
//		newNum = (a * 10) + first;
//		num = newNum; //�̰� ���߾���. while�� �ݺ��� �� �� a,b�� �ٽ� ���ǵǷ��� newNum�� 
//		// �ٽ� num���� ����� �� �׷��ϱ� ������ result = num���� �Էµ� num�� ���� ����ϴ� ��.
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
////�ٽ� ���̵��:  26 ���� 2�� 6�� �����ٴ� ���̵��� 26�� 10���� ���� �������� ������ ǥ���� �� ����
////while���� �̿��ؼ� ���θ������ ���� �Էµ� ���� ������ ������ �ݺ��� �� ����


////�ι�° Ǯ��
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