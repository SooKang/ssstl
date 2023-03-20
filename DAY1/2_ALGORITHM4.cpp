#include <iostream>

// step 4. 보다 일반화 되게

// template 을 아래 처럼 만들면 2가지의 문제점이 있습니다.
// 1. 구간의 타입과 검색요소의 타입이 연관됩니다.
//    double 배열에서 int 검색 안됩니다.

// 2. T* 라고 하면 "raw pointer" 만 사용가능합니다.
//    스마트 포인터 등의 포인터와 유사하게동작하는 객체를 사용못함

//template<typename T> T* find(T* first, T* last, T c)

template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}





int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	
	double* p = find(x, x + 10, 5 );


	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}
