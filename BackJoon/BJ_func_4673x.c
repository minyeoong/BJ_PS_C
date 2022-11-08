//int d(int n)
//{
//	int sum = 0;
//	sum += n;
//	int first;
//	while (n>0) // 
//	{
//		first = n % 10;
//		n /= 10;
//		sum += first;
//		
//	}
//
//	return sum;
//}
//d(n)함수 구하는 것까진 성공헀다 그런데 셀프 넘버는 어떻게 구하지,,,


//핵심 아이디어: array[n]에서 array의 공간들이 무엇을 의미할 것인가??

//나도 d(n)함수들을 모두 array[]에 넣고 10000까지의 전체 값이 들어있는 배열을 비교하는 아이디어를 생각했다
//그러나 그것을 어떻게 할 것인가??
//int array[10]; 라고 선언했을 때 array에 할당된 값은 무작위 난수들이다.
//int array[10]={0,};라고 선언했을 때 array에 할당된 값은 모두 0이다.
//total[10000] = {0,}; 라고 선언하고
//array 값과 비교한다.

//array의 자릿수가 숫자를 의미함 즉, 1부터 10000을 검토할 때 array[1]부터 array[10000]을 검토함
//#include<stdio.h>
//int d(int n);
//int main(void)
//{
//	int array[10001];
//	for (int i = 1; i < 10001; i++)
//	{
//		
//		if (d(i) < 10001)
//			array[d(i)] = 1;
//	}
//	for (int i = 1; i < 10001; i++)
//	{
//		if (array[i] != 1)
//			printf("%d\n", i);
//	}
//	return 0;
//
//
//}
//int d(int n)
//{
//	int sum = 0;
//	sum += n;
//	int first;
//	while (n>0) // 
//	{
//		first = n % 10;
//		n /= 10;
//		sum += first;
//		
//	}
//
//	return sum;
//}
//두번째 풀이

//#include<stdio.h>
//int dn(int num);
//int main(void)
//{
//	int dnResult;
//	int cnt = 0;
//	int arr[10001]={0,};
//	for(cnt =1; cnt<10001; cnt++)
//	{
//		
//		dnResult = dn(cnt);
//		
//		if(dnResult<=10000)
//			arr[dnResult]++;
//	}
//	for (int i = 1; i < 10001; i++)
//	{
//		if (arr[i] ==0)
//			printf("%d\n", i);
//	}
//}
//int dn(int n)
//{
//	int sum = 0;
//	sum += n;
//	int first;
//	while (n > 0) // 
//	{
//		first = n % 10;
//		n /= 10;
//		sum += first;
//
//	}
//
//	return sum;
//}
