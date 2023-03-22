// 3_선형컨테이너3-1
#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,3,2,3,1,3,2,3 };

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 8, 8

	auto p = std::remove(v.begin(), v.end(), 3);

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 8, 8


	v.erase(p, v.end());

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 4, 8

	v.clear();
	std::cout << v.size() << ", " << v.capacity() << std::endl; // 0, 8

	v.shrink_to_fit();
	std::cout << v.size() << ", " << v.capacity() << std::endl; // 0, 0

	// vector 를 완전히 비우려면 clear() 하고 shink_to_fit() 수행 - C++11부터

	//------------------------------
	std::vector<int> v1(10);
	v1.resize(7);  // size = 7, capacity=10

	std::vector<int> v2 = v1;

	std::cout << v2.size() << ", " << v2.capacity() << std::endl; // 7, 7

	// shink_to_fit() 이 없던 시절 vector의 메모리를 완전히 비우는 기술
	// effective-STL 에서 소개된 내용

	std::vector<int>().swap(v2);

	std::cout << v2.size() << ", " << v2.capacity() << std::endl; // 7, 7

}






