// github.com/codenuri/ssstl  에서 DAY2.zip 받으시면 됩니다.
#include <iostream>
#include <iterator>
#include <list>

int main()
{
	// 1. Stream(화면, 파일) 출력을 위한 반복자
	std::ostream_iterator<int> p(std::cout, " ");

	*p = 10;	// std::cout << 10 << " ";
	*p = 20;	// std::cout << 20 << " ";

	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	std::copy(s.begin(), s.end(), p); // 예측해 보세요

	// 2. 입력 스트림
	std::istream_iterator<int> p1(std::cin);

	int n = *p1; // std::cin >> n

	std::cout << n << std::endl;
}

