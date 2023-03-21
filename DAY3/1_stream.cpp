// github.com/codenuri/ssstl  DAY3.zip 받으시면 됩니다.
#include <iostream> // 표준 입출력 스트림
#include <fstream>  // 화일 스트림
#include <sstream>  // 메모리(스트링)스트림
#include <string>

// cout 의 정체
/*
namespace std
{
	template<typename T>
	class basic_ostream
	{
	};
	using ostream = basic_ostream<char>;
	using wostream = basic_ostream<wchar_t>;

	ostream cout;    // ANSI 문자열 출력용
	wostream wcout;  // Unicode 문자열 출력용

	// 파일 출력용
	template<typename T>
	class basic_ofstream : public basic_ostream<T>
	{
	};
	using ofstream = basic_ofstream<char>;
}
*/
int main()
{
	std::cout << "hello";
	std::wcout << L"hello"; // L"" 유니코드 문자열(wide character)

	std::ofstream fout("a.txt");

	// fout 은 결국 cout 과 동일한 방식으로 사용하면 됩니다.
	// => 화면 출력이 아닌 파일 출력
	fout << "hello : " << 10 << std::endl;

}

