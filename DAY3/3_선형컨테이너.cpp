// 선형컨테이너
// => 요소들이 삽입된 순서대로 한줄로 놓여 있는 컨테이너
// => STL 에는 5개 컨테이너 제공

// C++98 에서 3개
#include <vector>  // 연속된 메모리, 임의접근 반복자
				   // 순차적 요소 이동이 빠르다. 검색 빠르다.
				   // 삽입 삭제는 느리다.

#include <deque>   // 연속된 메모리와 유사, 임의접근 반복자

#include <list>    // 떨어진 메모리, 양방향 반복자
				   // 삽입, 삭제가 빠르지만
				   // 순차 접근은 느리다.

// C++11 추가된 2개
#include <forward_list> // 싱글링크드 리스트, 전진형 반복자
#include <array>		// 임의접근 반복자



#include "show.h"

int main()
{
	
//	std::list<int> c = { 1,2,3 };
	std::vector<int> c = { 1,2,3 };

	// 핵심 1. 선형 컨테이너 는 사용법의 거의 동일 합니다.
	// => 기능은 유사 하지만, 각 기능의 성능이 다르다.
	// => 멤버 함수 이름이 동일하므로 컨테이너만 변경해서 성능 측정가능
	c.push_back(5);
	int n1 = c.front();
	int n2 = c.back();

	// 핵심 2. 사용법이 다른 경우 의도적으로 사용하지 말라는 의미!
	// => vector 는 앞쪽에 삽입/삭제가 안된다.

//	c.push_front(5); // vector 라면 에러.
//	c.pop_front();   // vector 라면 에러
	int n = front(); // 단, 접근은 가능

	// => [] 연산은 list 는 안됨.
	c[0] = 10; // list 라면 error
			   // vector 와 deque 은 가능

	for (int i = 0; i < c.size(); i++)
	{
//		c[i] = 0; // 만약 list 에서 [] 가능하다면 성능을 생각해 보세요
	}

	// 전방삽입은 필요 없고, [] 를 사용하고 싶다 : vector
	// 전방삽입은 필요 하고, [] 를 사용하고 싶다 : deque(덱, 디큐)
	// 삽입 삭제가 많다. : list

	// CPU 캐쉬를 고려하면 "vector" 가 가장 좋습니다.
	// 항상 vector를 우선 고려 하세요

}
