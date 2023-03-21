#include <iostream> 
#include <fstream>  
#include <sstream>  
#include <string>

int main()
{
	double pi = 3.1415;

	// pi 값을 문자열로 변경해 보세요
	// "pi = 3.1415" 형태로!

	// C언어
	char s[32];
//	sprintf(buf, "pi = %lf", pi); // pi 정밀도가 높아지면 s[32] 보다 클수있다
								// 버퍼 오버플로우 발생
	snprintf(buf, 32, "pi = %lf", pi); // 오버 플로우는 없지만 잘림 발생

	// C++ 해결책
	std::ostringstream oss;
	oss << "pi = : " << pi;  // <<"jh"

	std::string s1 = oss.str();

	std::cout << s1 << std::endl;
}




