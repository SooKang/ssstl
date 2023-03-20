#include <iostream>
#include <list>   
#include <vector>

// 반복자 무효화
int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	
	auto p = std::begin(v);

	std::cout << *p << std::endl;

	v.resize(10); // 이순간 vector의 내부 버퍼가 교체 됩니다.
				  // 기존에 꺼내놓은 모든 반복자는 무효화(invalidate)
				  // 됩니다.
				  // 더이상 사용하면 안됩니다.
				  // cppreference.com 에서 std::vector 검색

	std::cout << *p << std::endl; // ???
}



