#include <iostream>

// Step 2. 검색 구간의 일반화 : 전체 문자열뿐 아니라 부분 문자열도
//							검색 가능하게 하자

// [first, last) 사이의 구간에서 선형검색 수행.
//               => 반 개행 구간(half open range) 라고 합니다.

char* xstrchr(char* first, char* last, int c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}





int main()
{
	char s[] = "abcdefgh";

	char* p = xstrchr(s, s+4, 'e');


	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}
