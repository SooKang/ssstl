#include <iostream>
#include <list>
#include <filesystem> // C++17 입니다.

// 반복자는
// 1. 컨테이너에서 꺼낼수도 있고
// 2. 독립된 형태의 반복자도 있습니다

int main()
{
	std::filesystem::directory_iterator p("C:\\windows");

	std::cout << *p << std::endl;
	++p;
	std::cout << *p << std::endl;
}










