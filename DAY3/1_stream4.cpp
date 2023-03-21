#include <iostream> 
#include <fstream>  
#include <sstream>  
#include <string>

int main()
{
	std::ostringstream oss; // 메모리(문자열) 출력
	std::istringstream iss("to be or not to be");

	std::string s;
	
//	std::cin >> s; // 표준 입력에서 단어 입력

	while (iss >> s )		// iss 가 가진 문자열에서 단어 입력
		std::cout << s << std::endl;

}




