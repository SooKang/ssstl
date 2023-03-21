#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// 알고리즘과 동일이름의 멤버 함수가 있다면
// => 멤버 함수를 사용해라!!!

// 알고리즘과 동일한 멤버함수가 있는 이유
// 1. 알고리즘 보다 좋은 성능으로 구현가능할때
//    => list는 std::remove() 사용가능하지만
//    => 멤버함수 remove() 가 더 좋은 성능
// 
// 2. 알고리즘에 보낼수 없을때 : list 는 std::sort() 사용 못함


// 어떤작업을 하고 싶다면

// 1. 멤버에서 먼저 찾아라!
// 2. 멤버에 없으면 알고리즘에서 찾아라.


int main()
{
//	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	std::list<int>   v = { 1,2,3,1,2,3,1,2,3,1 };

	// list 라도 아래 코드는 문제 없이 잘 실행됩니다.
	// => 그런데, 자료구조 특성상 성능이 좋지 않습니다.
	/*
	auto p = std::remove(v.begin(), v.end(), 3);
	show(v);

	v.erase(p, v.end());
	show(v);
	*/

	// 성능향상을 위해 list 는 멤버 함수 remove 가 있습니다.
	v.remove(3); // 순차적으로 이동하면서 3을 찾으면 즉시 제거

	show(v);
	return 0;
}
