#include "show.h"

class IsTimes
{
	int value;
public:
	IsTimes(int n) : value(n) {}

	// () 연산자 자체는 단항 함수 지만, 
	// 생성자를 통해서 전달받은값을 보관하고 있습니다.
	bool operator()(int n) { return n % value == 0; }
};

int main()
{
	std::list<int> s = { 1,9,3,2 };

	int k = 3; 

	IsTimes f(k);  // 단항 함수 객체인 f 가 k를 보관
	bool b = f(10); // 10 % k 수행
	auto ret = std::find_if(s.begin(), s.end(), f);

	std::cout << *ret << std::endl;


	// 참고 : 객체를 만드는 2가지 방법
	// Point pt(0,0) : pt 라는 이름을 가진 객체
	// Point (0,0)   : 이름이 없는 객체. 객체를 함수 인자로 보낼때 널리사용

	// find_if 에 함수 객체 보낼때, 임시객체(이름없는객체)형태로 널리 사용합니다.
	auto ret2 = std::find_if(s.begin(), s.end(), IsTimes (k) );
}

// 일급 객체(first class object)
// => 함수의 인자나 반환 값으로 사용가능한 객체
// => "C/C++" 은 함수도 일급 객체이다(다른 함수 인자로 전달할수있다는것)

// 클로져(Closure)
// => 자신이 속한 문맥의 지역변수를 캡쳐 할수 있는 일급 객체'
// => find_if 에, "함수 + 지역변수k" 를 같이 보낼수 있는것!!

// 일반 함수 : 일급 객체 이지만 클로져가 될수 없다.
// 함수 객체 : 일급 객체 이고 클로져 이다.





