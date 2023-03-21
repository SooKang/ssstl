#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };

	// 1. 기본형(inplace 버전)
//	auto p1 = std::remove(v1.begin(), v1.end(), 3);

	// 2. 조건자 버전
//	auto p1 = std::remove_if(v1.begin(), v1.end(), 
//								[](int n) { return n % 2 == 0; });

	// 3. copy 버전
	// => v1 을 v2에 복사한후, v2를 remove 하는 것 보다
	// => remove_copy() 를 사용하면 2배 빨라질수 있다.
	// 
	// 반환 값 p1 은 v2 의 반복자이다
//	auto p1 = std::remove_copy(	v1.begin(), v1.end(),
//								v2.begin(), 
//								3);

	// 4. copy if 버전(복사 조건자 버전)
	auto p1 = std::remove_copy_if(v1.begin(), v1.end(),
					v2.begin(),
					[](int n) { return n % 2 == 1; });


	show(v1);
	show(v2);
}
