#include <iostream>
#include <list>

// 컨테이너::value_type : 컨테이너가 보관하는 요소의 타입
// 반복자::value_type   : 반복자가 가리키는 요소의 타입

// 반복자를 인자로 받아서 구간의 합을 구하는 함수
template<typename T>
typename T::value_type sum(T first, T last)
{
	typename T::value_type s = 0;

	while (first != last)
	{
		s += *first;
		++first;
	}
	return s;
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	int n = sum(std::begin(s), std::end(s));

	std::cout << n << std::endl; // 55
}
