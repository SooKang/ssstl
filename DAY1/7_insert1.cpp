#include <iostream>
#include <list>
#include <iterator>

// 전방 삽입 반복자를 만들어주는 함수 템플릿
template<typename T>
std::back_insert_iterator<T>   back_insert(T& c)
{
	return std::back_insert_iterator<T>(c);
}

int main(int argc, char** argv)
{
	std::list<int> s = { 1, 2, 3, 4, 5};

	// 컨테이너 끝에 추가하는 방법
	// 1. push_back 사용
	s.push_back(10);


	// 2. 후방 삽입 반복자 사용
//	std::back_insert_iterator< std::list<int> > p(s);  // s에 끝에 추가하는 반복자

//	auto p = back_insert(s); 

	auto p = std::back_inserter(s); // 이미 표준에 있습니다.


	*p = 10; // s.push_back(10) 과 동일
}
