#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// v의 모든요소를 뒤집어(reverse) 보세요
	std::reverse(v.begin(), v.end());	// vector는 멤버 함수
										// reverse 없다
	show(v);
	
	std::list<int> s = { 1,2,3,1,2,3,1,2,3,1 };

	s.reverse(); // list 는 멤버 함수 reverse()가 있다.
				 // std::reverse()도 사용가능

	// std::reverse  : 저장하는 요소를 swap 해서 구현
	// s.reverse()   : 노드의 next, prev 가 가진 주소를 swap
	//				   저장하는 요소의 크기가 큰 경우 멤버 함수가 유리.

	show(s);

}
