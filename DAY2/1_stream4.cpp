#include <iostream> // 표준 입출력
#include <fstream>  // 파일 입출력
#include <iterator>
#include <list>

int main()
{
//	std::ostream_iterator<char> out(std::cout, "");

	std::ofstream fout("b.txt");
	std::ostream_iterator<char> out(fout, "");


	std::ifstream f("1_stream4.cpp"); // 입력 파일

//	std::istream_iterator<char> p1(f);
//	std::istream_iterator<char> p2;		// 디폴트 생성자는 EOF

	// istream_iterator    : white space 무시(space, tab, enter등)
	// istreambuf_iterator : white space 도 입력!
	std::istreambuf_iterator<char> p1(f);
	std::istreambuf_iterator<char> p2;		



//	std::cout << *p1 << std::endl;

	std::copy(p1, p2, out);
}





