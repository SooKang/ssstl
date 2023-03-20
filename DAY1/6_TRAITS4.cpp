#include <iostream>
#include <list>

template<typename T> void foo(T it)
{
	// T 가 반복자 일때

	typename T::value_type n1;  // T가 가리키는 요소의 타입
								// T가 raw pointer 라면 에러

	typename std::iterator_traits<T>::value_type n2;
									// T가 포인터 라도 에러 아님!!

	// C++20 부터 간단해 집니다. typename 도 필요 없습니다.
	std::iter_value_t<T> n3;  
}

int main()
{

}
