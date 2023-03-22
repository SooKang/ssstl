#include "show.h"

template<typename T, typename Alloc = std::allocator<T>>
class list
{
public:
	// 핵심 : STL 컨테이너는 다양한 멤버 타입이 있습니다.
	using size_type = unsigned int;
	using value_type = T;
	using pointer = T*;
	using iterator = list_iterator<T>;
	//....
};

int main()
{
	// STL 컨테이너의 특징
	std::list<int> s = { 1,2,3 };

	// 아래 ? 자리에 최선의 코드는 뭘까요 ? auto 말고
//	unsigned int sz = s.size();
//	std::list<int>::size_type sz = s.size();

	// 1. 멤버 타입이 있다.
	std::list<int>::value_type n = s.front();
	std::list<int>::size_type sz = s.size();


	// 2. 반환과 제거를 동시에 하지 않는다.
	// => 예외 안전성의 강력 보장을 지키려면 이렇게 설계할수 밖에 없다.
	int n = s.back();	// 반환만. 제거되지 않는다.
	s.pop_back();		// 제거만 한다. 반환 타입은 void


	// 3. 단위 전략을 많이 사용한다.
	std::list<int, MyAlloc<int>> s2;
	std::set<int, greater<int>, MyAlloc<int>> ss;
}
