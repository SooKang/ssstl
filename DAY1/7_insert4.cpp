#include <iostream>
#include <list>
#include <algorithm>

// 반복자는
// 1. 컨테이너에서 꺼낼수도 있고
// 2. 독립적으로 만드는 것들고 있습니다.(ex. 삽입반복자)
//    => 이런 반복자의 원리는 간단합니다.

template<typename C>
class back_insert_iterator
{
	C& c;
public:
	back_insert_iterator(C& c) : c(c) {}

	back_insert_iterator& operator*() 
	{ 
		return *this; 
	}
	back_insert_iterator& operator=(const typename C::value_type& value)
	{
		c.push_back(value); // 결국 이순간 컨테이너 끝에 추가된것!
		return *this;
	}

	// std::copy() 등에 보내려면 ++ 가능해야 합니다.
	// => 하지만 삽입반복자는 ++에서 해야할일은 없습니다
	// => 단지, copy() 에서 사용시 에러나지 않게 하기 위해 모양만 만들면됩니다.
	back_insert_iterator& operator++()
	{
		return *this;
	}
	
};

int main()
{
	std::list<int> s1 = { 0, 0 };
	std::list<int> s = { 1,2 };

	back_insert_iterator<std::list<int>> p(s);

	*p = 30; // s.push_back(30)
			 // ( p.operator*() ).operator=(30)

//	std::copy(s1.begin(), s1.end(), p);

	for (auto& n : s)
		std::cout << n << ", ";
}
