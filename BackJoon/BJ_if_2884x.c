//#include <stdio.h>
//int main(void)
//{
//	int h_bef, m_bef, m_total_bef, m_total_aft,h_aft,m_aft;
//
//	scanf_s("%d %d", &h_bef, &m_bef);
//	if (h_bef == 0 && m_bef < 45)
//
//	{
//		h_aft = 23; //h_aft == 23; 이라고 했었음
//		m_aft = 60 - (45-m_bef); //m_aft == 으로 했었음
//	}
//
//	else
//	{
//
//		m_total_bef = h_bef * 60 + m_bef;
//		m_total_aft = m_total_bef - 45;
//		h_aft = m_total_aft / 60;
//		m_aft = m_total_aft % 60;
//		
//	}
//	printf("%d %d\n", h_aft, m_aft);
//	
//	return 0;
//
//	//호정 누나 코드 ! M -=45 이걸 생각 했어야함
//	/*scanf_s("%d %d", &H, &M);
//
//	M -= 45;
//	if (M < 0) {
//		M += 60;
//		H--;
//		if (H < 0)
//			H += 24;
//	}*/
//	
//}

//#include<stdio.h>
//int main(void)
//{
//	int H, M;
//	scanf_s("%d %d", &H, &M);
//	if (M < 45)
//	{
//		M += 15;
//		if (H == 0)
//		{
//			H = 23;
//		}
//		else if (H > 0)
//		{
//			H --;
//		}
//	}
//	else if (M >=45 )
//	{
//		M -= 45;
//	}
//	printf("%d %d\n", H, M);
//}
//두번째 풀이