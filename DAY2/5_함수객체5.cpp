#include <iostream>
#include <algorithm> 

// 137page 아래부분
// 아래 Sort() 는 정렬할때 사용할 비교 함수를 인자로 받아서사용합니다.
// => C언어가 가진 "qsort" 가 이런 설계 입니다.

// 장점 : 사용자가 비교 정책을 변경할수 있다.
// 단점 : 비교 할때 마다 함수 호출하게 되므로 느리다.
//       데이타 량이 많은 때는 사용하면 너무 느리다.!

// 정책 변경이 가능한데, 성능저하가 없게 할수 없을까 ??
// => STL 의 설계 핵심!!!


// 비교정책을 사용자가 변경할수 있게 해보자.
void Sort(int* x, int sz, bool(*cmp)(int, int) )
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
//			if (x[i] > x[j])  // 1

			if ( cmp(x[i], x[j]) == true ) // 2 
				std::swap(x[i], x[j]);
		}
	}
}
//-----------------------------
inline bool cmp1(int a, int b) { return a > b; }
inline bool cmp2(int a, int b) { return a < b; }

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

//	Sort(x, 10, cmp1);
	Sort(x, 10, cmp2);
}





