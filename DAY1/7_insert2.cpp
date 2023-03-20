// insert2.cpp
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

int main(int argc, char** argv)
{
//	std::vector<int> c1 = { 1,2,3,4,5 };
//	std::vector<int> c2 = { 0,0,0,0,0 };

	std::list<int> c1 = { 1,2,3,4,5 };
	std::list<int> c2 = { 0,0,0,0,0 };

	// c1 => c2 에 복사하는 방법.
	// 1. for 문과 [] 연산자 사용
	// => list 는 [] 연산이 안되므로 아래 코드를 사용못함.
	/*
	for (int i = 0; i < c1.size(); i++)
	{
		c2[i] = c1[i];
	}
	*/

	// 2. list 등의 모든 컨테이너에서 가능하게 하려면 반복자로 해야 한다.
	auto p1 = c1.begin();
	auto p2 = c2.begin();

	while (p1 != c1.end())
	{
		*p2 = *p1;
		++p2;
		++p1;
	}

	// 3. 위코드를 함수로 만들어 놓은 것이 std::copy 입니다.
	std::copy( c1.begin(), c1.end(), c2.begin() );
}
