class Test
{
public:
	enum { value = 1 };
	typedef int DWORD;
};
int p = 0;

template<typename T> void foo(T a)
{
	// 아래 2줄에서 * 의 의미를 생각해 보세요(1. 곱하기, 2. 포인터 변수 선언)

	// "타입::이름" 의 표현에서 "이름" 은
	// 1. 값 일수 있고     : enum 상수, static 멤버 데이타
	// 2. 타입 일수도 있다 : typedef 등

//	Test::value * p;	// 곱하기 의미의 * 연산자
//	Test::DWORD * p;	// 포인터 변수 p를 선언하는 코드

	// 의존이름(dependent name)
	// 템플릿 인자 T에 의존해서 꺼내는 이름
	// => 컴파일러는 항상 "값"으로 해석한다.
	// => 타입으로 사용하려면 typename 키워드가 필요
	T::value* p;	
//	T::DWORD* p1;	// error. * 를 곱하기로 해석

	typename T::DWORD* p1; // ok. DWORD를 타입으로 해석해 달라고 
							// 요청하는 것
}

int main()
{
	Test t;
	foo(t);
}


