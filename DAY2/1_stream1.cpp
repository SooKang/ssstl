// github.com/codenuri/ssstl  에서 DAY2.zip 받으시면 됩니다.
#include <iostream>
#include <iterator>
#include <list>

int main()
{
	int n1;
	int n2;

	// 실행한후 "10 20" 이라고 입력해 보세요
//	std::cin >> n1;
//	std::cin >> n2;

	// 입력 버퍼의 포인터 얻기
	std::streambuf* buf = std::cin.rdbuf();

	// "10 20"
	n1 = buf->sgetc();
	buf->snextc();
	buf->snextc();
	n2 = buf->sgetc();

	std::cout << n1 << ", " << n2 << std::endl;
}

