#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// 예전에 만들어 놓은 함수
// => 배열의 주소와, 크기를 받는 함수
void foo(int* arr, int sz) {}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	foo(x, 10);

	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// foo 에 v를 보내 보세요.
//	foo(&v, v.size()); // 버퍼가 아닌 vector 객체의 주소

	foo(&v[0],    v.size()); // 예전 기술
	foo(v.data(), v.size()); // C++11에서 추가된 .data() 함수
}


