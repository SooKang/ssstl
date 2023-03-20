#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
//	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::begin(s);

	// 반복자 p를 5칸 전진하고 싶다.
//	p = p + 5;  // 방법 1. + 연산자 사용
				// => 임의접근 반복자만 가능
	
//	++p; ++p; ++p; ++p; ++p; // 방법 2. ++ 연산자를 5회!!
							 // => 모든 반복자에 사용가능.
							 // => 임의접근이라면 비 효율적

	std::advance(p, 5); // 방법 3. std::advance() 사용
						// p가 임의 접근 이면 + 로 이동
						//     아니면 ++p 를 5회 반복.

	// 참고 next() 도 있습니다.
	auto p2 = std::next(p, 3); // p보다 3칸 전진한 새로운 반복자 반환
	auto p3 = std::prev(p, 2);


	sdt::cout << *p << std::endl;
}
