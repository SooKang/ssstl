#include "show.h"

// 조건자(predicator)
// => bool 을 반환하거나, bool로 변환 가능한 타입을 반환하는 함수
// => _if 로 끝나는 알고리즘에 인자로 전달되는 함수

bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::list<int> s = { 1, 9, 2, 3 };

	// std::find    : 주어진 구간에서 "값(3)" 을 찾아라! 3번째 인자로 값 전달
	// std::find_if : 주어진 구간에서 "조건을 만족하는 요소" 을 찾아라! 
	//                 => 3번째 인자로 함수 전달

//	auto ret = std::find(s.begin(), s.end(), 3);

	// 주어진 구간에서 1번째 나오는 "3의 배수"를 찾고 싶다.

//	auto ret = std::find_if(s.begin(), s.end(), foo);

	auto ret = std::find_if(s.begin(), s.end(), [](int n) { return n % 3 == 0; });

	std::cout << *ret << std::endl; // 9
}

// std::for_each, std::transform 등
// => 설계 자체를 인자로 함수를 받게 만들었습니다.
// => _if 붙이지 않습니다

// std::find, std::remove 등
// => 값 버전과 함수(조건자) 버전이 있습니다.
// => 조건자 버전은 _if 를 붙이게 됩니다.
// => 일반 함수 보다는 람다 표현식 사용하세요
