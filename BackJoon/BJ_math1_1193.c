//#include<stdio.h>
//float even(int order, int n);
//float odd (int order, int n);
//
//
//int main(void)
//{
//	
//	int i = 2, j = 1, X, cnt = 1,order;
//	scanf_s("%d", &X);
//	while (1)
//	{
//		cnt++;
//		if (X == 1)
//		{
//			printf("%d", 1);
//		}
//
//		else if(i <= X && X <= i + j)
//		{
//			if (cnt % 2 == 0)
//			{
//				order = X - i;
//				printf("%f",even(order, cnt));
//				break;
//				
//			}
//			else
//			{
//				order = X - i;
//				printf("%f", odd(order, cnt));
//				break;
//			}
//		}
//		i = i + j + 1;
//		j++;
//
//	}
//}
//float even(int order, int n) //�����ͷ�??
//{
//	float arr[10][10];
//	for (int i = 0; i < 10; i++)
//		for (int j = 0; j < 10; j++)
//			arr[i][j] = (float)(i + 1) / (j + 1);
//
//	int xpos, ypos;
//	int result;
//	int cnt = 0;
//	xpos = 0;
//	ypos = n - 1;
//
//
//	for (int i = 0; i < order; i++)
//	{
//		xpos++;
//		ypos--;
//	}
//	return arr[xpos][ypos];
//}
//	
//	
//float odd (int order, int n) //�����ͷ�??
//{
//	float arr[10][10];
//	for (int i = 0; i < 10; i++)
//		for (int j = 0; j < 10; j++)
//			arr[i][j] = (float)(i + 1) / (j + 1);
//
//	int xpos, ypos;
//	int result;
//	int cnt = 0;
//	xpos = n-1;
//	ypos = 0;
//
//
//	for (int i = 0; i < order; i++)
//	{
//		xpos--;
//		ypos++;
//	}
//	return arr[xpos][ypos];
//}

//���� ���� �ڵ�� �迭�� ũ�⸦ 10000*10000���� �ø� ���� ��� �Ѱ谡 �ִ�.


//��ȯ���� �ΰ� �̻� ���� �� ������??
// �ؿ� ���� ��°��� �̻��ϰ� ���´�
// ��ȯ���� �ϳ��� �����ϴ�
//#include<stdio.h>
//int func(int a, int b);
//int main(void)
//{
//	int c=0, d=0;
//	c,d = func(3, 5);
//	printf("%d %d", c, d);
//}
//int func(int a, int b)
//{
//	int result = a + b;
//	return result,result;
//}

