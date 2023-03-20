#include <iostream>
#include <list>

int main()
{
	std::list<int> s1 = { 1,2,3 };

	// 1. past the end iterator
	// => end() 는 마지막이 아닌 마지막 다음
	// => * 연산하지 마세요
	auto p1 = std::begin(s1);
	auto p2 = std::end(s1);

	*p1 = 10; // ok
//	*p2 = 10; // runtime error

	// 2. end()로 얻은 반복자는 == 와 != 연산에만 사용해야 합니다.
	// [p1, p2)

	while (p1 != p2)
	{
		++p1;
	}

	std::list<int> s3;
	if (s3.empty()) {}

	// 3. 아래 코드가 참인 것은 empty 를 의미 합니다.
	if (std::begin(s3) == std::end(s3)) {}	
}
