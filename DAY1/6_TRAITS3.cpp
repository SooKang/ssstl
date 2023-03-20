#include <iostream>
#include <list>

// 반복자처럼 동작하는 모든 것은 반복자이다.
// => ++ 로 이동가능하고, * 로 요소접근 가능하면 모두 반복자
// => raw pointer 도 반복자의 종류중 하나.

// 반복자는 형태에 따라서
// 1. 클래스로 만든 것과
// 2. raw pointer 가 있습니다.
// => 위 2가지형태의 때문에 아래 sum같은 것을 만들기 어렵습니다.

// 이 문제를 해결해 주는 도구
template<typename T> struct iterator_traits
{
	using value_type = typename T::value_type;
};
// 핵심 : template 부분 특수화 문법 !!
template<typename T> struct iterator_traits<T*> 
{
	using value_type = T;
};
template<typename T>
typename std::iterator_traits<T>::value_type sum(T first, T last)
{
//	typename T::value_type s = 0;

	typename std::iterator_traits<T>::value_type s = 0;



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


	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int n2 = sum(x, x + 10); //???

	std::cout << n2 << std::endl;
}
