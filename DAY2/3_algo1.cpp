#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 알고리즘 기본
// 1. 멤버 함수가 아닌 일반 함수(템플릿) 으로 되어 있다.
// 2. <algorithm>
//    <numeric>
//    <memory>

// 3. 대부분 반복자를 인자로 받게 된다.
//    각 알고리즘은 인자로 전달되는 반복자에 대한 요구조건이 있다
//    std::reverse(양방향 반복자)

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	
	auto p = std::find( v.begin(), v.end(), 3);

	return 0;
}



















//
