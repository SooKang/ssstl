#include "show.h"

bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::list<int> s = { 1,9,3,2 };

	int k = 3; 
	
	// k 배수 찾기 - 일반함수로는 안됨.
	//auto ret = std::find_if(s.begin(), s.end(), foo);

	// 람다 표현식은 가능 - 결국 함수 객체이므로
	auto ret = std::find_if(s.begin(), s.end(), 
				[k](int n) { return n % k == 0;  });

	class CompilerGeneratedName
	{
		int k;
	public:
		CompilerGeneratedName(int n) : k(n) {}

		bool operator()(int n) { return n % k == 0; }
	};
	auto ret = std::find_if(s.begin(), s.end(),	CompilerGeneratedName(k));

	// 결국 3-2 에서 직접 만든 IsTimes 와 거의 동일합니다
}






