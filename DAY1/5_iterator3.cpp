#include <iostream>
#include <list>   
#include <vector>

// 반복자를 꺼내는 법

int main()
{
//	std::list<int> s = { 1,2,3,4,5 };
//	std::vector<int> s = { 1,2,3,4,5 };
	int s[5] = { 1,2,3,4,5 };

	// 1. 반복자의 정확한 타입
	// => 정확한 타입 사용시, 컨테이너 교체 하면 반복자타입도
	//    변경해야 합니다.
	// std::list<int>::iterator p = s.begin();
	// std::vector<int>::iterator p = s.begin();

	// C++11 에서 등장한 auto 를 권장합니다.
	auto p = s.begin();


	// 2. 반복자를 꺼내는 방법
	auto p1 = s.begin();	// 멤버 함수 begin
							// s 가 raw array 라면 에러

	auto p2 = std::begin(s);// 일반 함수 begin. C++11 에서 추가
							// s 가 raw array 라도 ok

	auto sz1 = s.size();	 // raw array 라면 에러
	auto sz2 = std::size(s); // raw array 라도 ok


	// 참고. C++20 에서 새로운 begin() 등장 합니다.
//	auto p3 = std::range::begin(s); // C++20 style
}



