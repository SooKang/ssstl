// insert2.cpp
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

int main(int argc, char** argv)
{
	std::list<int> c1 = { 1,2,3,4,5 };
	std::list<int> c2 = { 0,0,0,0,0 };

	// 1. 아래 코드는 c1 의 내용으로 c2에 덮어쓰기
//	std::copy(c1.begin(), c1.end(), c2.begin());


	// 2. 삽입반복자를 직접 만들어서 c1을 c2끝에 추가
//	std::back_insert_iterator< std::list<int> > p(c2);
//	*p = 10; // c2.push_back(10)
//	std::copy(c1.begin(), c1.end(), p); // 0, 0, 0, 0,0,1,2,3,4,5,


	// 3. 삽입 반복자를 만드는 함수 를 사용
	std::copy(c1.begin(), c1.end(), std::back_inserter(c2) );

	 
	for (auto e : c2)
		std::cout << e << ", ";
}
    
