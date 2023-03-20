#include <iostream> // 표준 입출력
#include <fstream>  // 파일 입출력
#include <iterator>
#include <list>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	std::ofstream f("a.txt"); // 출력 전용 파일
	f << "hello" << std::endl; // 파일에 쓰기

//	std::ostream_iterator<int> p(std::cout, " ");
	std::ostream_iterator<int> p(f, " ");

	*p = 0; // 파일에 "0 " 쓰기

	std::copy(s.begin(), s.end(), p);
}

