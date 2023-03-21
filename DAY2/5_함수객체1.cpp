// 3_함수객체1
#include <iostream>

// 함수 객체(function object)
// => () 연산자를 재정의 해서 함수 처럼 사용가능한 객체

// 왜?? 일반 함수로 하면 되지, 함수 객체를 사용하나요 ?
// => 장점이 아주 많습니다
// => C++20 부터는 거의 모든 것을 함수 객체로 합니다(함수는 거의 없음)
// => python, rust 등의 많은 다른 언어에도 있는 개념

struct Plus
{
	int operator()(int a, int b)
	{
		return a + b;
	}
};
int main()
{
	Plus p;		// p 는 함수 가 아니라. Plus 타입의 객체 입니다.

	int n = p(1, 2); // 객체 p를 마치 함수 처럼 사용합니다.	
					 // "함수 처럼 사용 가능한 객체" 를 
					 // "함수객체" 라고 합니다
					 // p.operator()(1,2)

	int n2 = p.operator()(1, 2); // 이렇게 직접 호출해도 됩니다.

	// a + b; // a.operator+(b)
	// a - b; // a.operator-(b)
	// a();   // a.operator()()
	// a(1,2);// a.operator()(1,2) 로 해석됩니다.
}
