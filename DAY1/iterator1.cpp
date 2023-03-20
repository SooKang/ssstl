// iterator1.cpp
#include <iostream>
#include <list>

int main()
{
	int x[5] = { 1,2,3,4,5 };
	
	// 배열은 시작 주소만 알면 모든 요소 열거가능
	int* p = x;
	*p; 
	++p;

	// STL은 반복자만 꺼내면 모든 요소 열거가능
	std::list<int> s = { 1,2,3,4,5 };
	std::list<int>::iterator p2 = s.begin();

	*p2;
	++p2;
}










