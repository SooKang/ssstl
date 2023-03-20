#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

//	std::sort(s.begin(), s.end());  // error

	s.sort(); // 퀵 이 아닌 다른 알고리즘
			 // 알고리즘 std::sort()에 반복자를 보낼수 없으므로
			 // 멤버 함수 sort 제공

	v.sort(); // vector 에도 이 멤버 함수가 있을까요 ?
			  // vector 반복자는 임의 접근 반복자 이므로
			  // std::sort() 사용가능..
			  // 멤버 함수로 제공할 필요 없다.
			  // 모든 알고리즘(일반함수) 사용가능하다.
	
	// 핵심 
	// 1. 각 컨테이너에서 꺼내는 반복자는 어떤 카테고리인가를
	//    알아야 합니다.
	// vector : 임의 접근
	// list   : 양방향
	// forward_list : 전진형

	// 2. 각 알고리즘이 요구하는 반복자 종류를 알아야 합니다.
}
