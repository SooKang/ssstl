// 1_STL_PREVIEW1
#include <iostream>
#include <string>
#include <string_view> // C++17 에서 추가
int main()
{
	// C언어의 문자열 : char 배열 또는 char* 사용
	char s1[] = "Hello";
	char s2[] = "Hello";

	if (s1 == s2) {} // 배열 주소 비교 항상 false
					 // if ( strcmp(s1, s2) == 0 )
	
//	s2 = s1; // error

	// C++언어의 문자열 : std::string 타입 사용
	std::string s3 = "ABCD";
	std::string s4 = s3; // 복사 가능하고

	std::string s5 = s3 + s4; // +도 가능
					// s3 * 3; // *는 안됩니다.

	std::cout << s5 << std::endl; // 출력도 가능

	// 읽기 전용 문자열은 string 보다 string_view 더 효율적입니다
	std::string_view sv = s3; 
}
