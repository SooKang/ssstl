// 5_함수객체8
#include "show.h"
#include <functional>  // std::less, std::greater 등의 함수 객체가 이미 제공

int main()
{
	std::vector<int> v = { 1,3,2 };

	// 기본 버전 : 오름 차순 정렬
	std::sort(v.begin(), v.end());

	// 비교 정책 교체 1. 일반 함수
//	std::sort(v.begin(), v.end(), cmp1);  


	// 비교 정책 교체 2. C++ 표준의 함수 객체 사용 - C++98 시절 부터
	std::less<int> f;
	std::sort(v.begin(), v.end(), f);

	std::sort(v.begin(), v.end(), std::less<int>() ); // 임시객체로 전달


	// 비교 정책 교체 3. 람다 표현식 - C++11 부터
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; } );

	// 위 코드를 보고 컴파일러는 아래 코드를 생성합니다.
	class CompilerGeneratedName
	{
	public:
		inline bool operator()(int a, int b) { return a < b; }
	};

	std::sort(v.begin(), v.end(), CompilerGeneratedName() );

	// 핵심 : 람다 표현식은 "함수객체"를 컴파일러에게 만들어 달라는 요청.
}
