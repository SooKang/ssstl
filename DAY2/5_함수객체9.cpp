// 5_함수객체8
#include "show.h"
#include <functional>  // std::less, std::greater 등의 함수 객체가 이미 제공

int main()
{
	std::vector<int> v = { 1,3,2 };

	// 다음중 좋은 코드는 ?
	// 1. std::less 사용
	std::less<int> f;
	std::sort(v.begin(), v.end(), f);
	std::sort(v.begin(), v.end(), f);


	// 2. 람다 표현식 사용
	// => 모든 람다 표현식은 다른 타입 입니다.
	// => 아래 처럼 동일한 람다표현식을 사용해도 다른 타입입니다.
	// => sort() 함수가 2개 생성됩니다.
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });


	// 핵심 : 동일한 람다표현식이 여러번 사용되면 auto 변수에 담아서 사용하세요
	auto cmp = [](int a, int b) { return a < b; };
				// class xxx { operator ()}; xxx(); 즉 cmp 는 xxx 타입객체

	std::sort(v.begin(), v.end(), cmp);
	std::sort(v.begin(), v.end(), cmp); // ok.. sort 는 한개

}
