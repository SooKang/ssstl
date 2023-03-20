#include <iostream>
#include <list>
#include <iterator>

// 삽입반복자종류

int main(int argc, char** argv)
{
	std::list<int> c1 = { 1,2,3,4,5 };
	std::list<int> c2 = { 0,0,0,0,0 };

	// 클래스 버전
	std::back_insert_iterator<std::list<int>> p1(c2);
	std::front_insert_iterator<std::list<int>> p2(c2);
	std::insert_iterator<std::list<int>> p3(c2, 
								         std::next(c2.begin(), 2) );
//	*p1 = 10; // c2.push_back(10)
//	*p2 = 20; // c2.push_front(20);
//	*p3 = 30; // c2.insert(2번째인자로전달한위치, 30)

	// 함수 버전

//	std::copy(c1.begin(), c1.end(), std::back_inserter(c2));
//	std::copy(c1.begin(), c1.end(), std::front_inserter(c2));
					// => 5, 4, 3, 2, 1, 0, 0, 0, 0, 0

	// 임의 삽입 반복자로 전방삽입하기
	std::copy(c1.begin(), c1.end(), std::inserter(c2, c2.begin()));
					// => 1,2,3,4,5,0,0,0,0,0


	for (auto& n : c2)
		std::cout << n << ", ";
}
