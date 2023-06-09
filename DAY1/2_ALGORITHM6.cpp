#include <iostream>

// find 정리

// 검색 구간 : 임의 타입 배열의 [first, last) 구간에서 "선형검색" 수행
// 
// 구간의표현 :  반드시 포인터일필요는 없다. 객체도 가능
//				단, ++, ==, !=, * 연산가능해야 한다.

// 구간의 이동 : 전위형 증가 연산자

// 실패의 반환 : last ( past the end 라고 부릅니다.)

// cppreference.com 에 접속해 보세요.  오른쪽 위에서 std::find 검색

// 반복자는 크기가 크지 않습니다. "call by value" 로 받으세요
// 찾는 요소는 사용자 정의 타입일수 있습니다 : const T& 로 받으세요

template<typename InputIter, typename T>
InputIter find(InputIter first, InputIter last, const T& c)
{
	while (first != last && *first != c)
		++first;

	return first;
}

int main()
{
	find()
}
