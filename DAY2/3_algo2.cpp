#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// 알고리즘은 컨테이너를 알지 못한다.

// 1. std::remove 는 자신이 어떤 컨테이너에 대해 remove 하는지
//    알수 없습니다.
//    => 따라서, 실제 메모리는 줄이지 않고
//       "3"을 찾으면 뒤에 있는 요소를 "3" 의 위치에 덮어쓰게 됩니다.

// 2. 실제 컨테이너의 요소를 제거 하는 것은 컨테이너의 멤버함수로만 
//    가능합니다.
//    v.erase(p, v.end())

// 3. 위 작업은 결국 "C언어" 로 해도 연속된 메모리인경우는 위처럼할수
//   밖에 없습니다.

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	/*
	auto p = std::remove(v.begin(), v.end(), 3);
	show(v);  
	v.erase(p, v.end());
	show(v);
	*/

	// 보통 위코드를 아래 처럼 작성합니다.
	// => 흔히 "erase-remove" 라고 불리는 기법입니다.
	v.erase(std::remove(v.begin(), v.end(), 3), v.end());

	show(v);

	return 0;
}



















//
