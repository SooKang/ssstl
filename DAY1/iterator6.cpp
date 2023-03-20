// copy
#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s1 = { 1,2,3,4,5 };
	std::list<int> s2 = { 0,0,0,0,0 };

	// copy 알고리즘 소개
	std::copy( s1.begin(), s1.end(), s2.begin() );

	// 컨테이너 모든 요소 출력은 C++11 의 range for 가 제일 편리합니다.
	for (auto e : s2)
	{
		std::cout << e << ", ";
	}
}
