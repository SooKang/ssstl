#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10};

	auto p1 = s.begin();
	auto p2 = s.end();

	// std::reverse_iterator< 반복자타입 > p3( 반복자 );

	// 인자로 전달된 반복자 보다 한개 앞을 가리키는 역반복자
	// ++ 연산시 <==  방향으로 이동
//	std::reverse_iterator p3(p2); // C++17 이면 이렇게사용가능
//	std::reverse_iterator p4(p1);

	// C++14 까지는 아래처럼 타입 명시해야 합니다
//	std::reverse_iterator< std::list<int>::iterator > p3(p2);
//	std::reverse_iterator< std::list<int>::iterator > p4(p1);

	// 함수 버전을 사용하면 타입을 명시할 필요가 없습니다.
	auto p3 = std::make_reverse_iterator(p2);
	auto p4 = std::make_reverse_iterator(p1);

	while (p3 != p4)
	{
		std::cout << *p3 << ", ";
		++p3;  // 기존 반복자와는 반대 방향으로 이동(<==)
	}

}
