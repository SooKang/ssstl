// github.com/codenuri/ssstl  DAY3.zip 받으시면 됩니다.
#include <iostream> // 표준 입출력 스트림
#include <fstream>  // 화일 스트림
#include <sstream>  // 메모리(스트링)스트림
#include <string>

int main()
{
	// std::ostream cout;		// 표준 출력객체. 전역변수로 만들어져 있습니다.
	std::ofstream fout("a.txt");// 파일 출력객체. 사용자가 만들어서 사용
	std::ostringstream oss;		// 메모리(string) 출력객체. 
								// oss의 내부 버퍼에 출력, 
								// 사용자가 만들어서 사용

	oss << "hello : " << 10;

	std::string s = oss.str();   // oss 의 내부 버퍼에 있는 문자열을 꺼내기

	std::cout << s << std::endl; 

}

