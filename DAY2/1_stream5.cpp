#include <iostream> 
#include <iterator>
#include <list>
#include "show.h"  // 아래 2개의 show 함수가 이미 만들어져 있습니다.

/*
template<typename Container>
void show(const Container& c)
{
	for (auto e : c)
		std::cout << e << ", ";

	std::cout << std::endl;
}

// 반복자 버전
template<typename InputIter>
void show(InputIter first, InputIter last)
{
	std::ostream_iterator< typename std::iterator_traits<InputIter>::value_type > p(std::cout, ", ");

	std::copy(first, last, p);

	std::cout << std::endl; 
}
*/

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너의 모든 내용 출력
	show(s);
	show(x);

	// show 의 반복자 버전
	show(s.begin(), s.end());
	show(x, x + 10);
}






