// 5_함수객체3-1
#include "show.h"

// 핵심 : 아래 일반 함수 foo 안에서는  
//        main 함수의 지역변수인 k에 접근할수 있는 방법이 없습니다.
bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::list<int> s = { 1,9,3,2 };

	int k = 3; // 사용자 입력값이라고 생각해 보세요.

	// 주어진 구간에서 "k의 배수"를 찾고 싶다.
	auto ret = std::find_if(s.begin(), s.end(), foo);
}
