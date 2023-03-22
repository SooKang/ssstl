#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity 개념
int main()
{
	std::vector<int> v(10, 0);

	std::cout << v.size() << ", " << v.capacity() << std::endl;

	v.resize(7); // 어떻게 구현했을까요 ?

	std::cout << v.size() << ", " << v.capacity() << std::endl;

	v.push_back(0); // 끝에 한개 추가
					// size < capacity 상태 이므로
					// "not expensive"

	std::cout << v.size() << ", " << v.capacity() << std::endl;

	v.shrink_to_fit();  // 여분의 메모리 제거
						// => 8개를 메모리를 재할당하는것
						// C++11 에서 추가

	std::cout << v.size() << ", " << v.capacity() << std::endl;

	v.push_back(0); // 현재 상태는 size == capacity 이므로
					// "expensive" 한 연산
}






