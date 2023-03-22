
#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"
#include <list>

int main()
{
	// 1. 생성
	std::vector<int> v1;
	std::vector<int> v2(10);    // 10 개의 요소를 0으로 초기화
	std::vector<int> v3(10, 3); // 10 개의 요소를 3으로 초기화
	std::vector<int> v5{10, 3}; // 2개의 요소를 10, 3으로 초기화
	std::vector<int> v6 = { 10, 3 }; // 위와 동일
	std::vector<int> v4(v3);	// v3과 동일한 vector

//	std::list<int> s1(v3); // error
	std::list<int> s1(v3.begin(), v3.end());
	std::list<int> s2(v3.begin(), v3.begin() + 2);

	// 2. 삽입, 
	auto p = v3.begin();

//	v3.push_front(10); // 전방 삽입(vector는 안됨)
	v3.push_back(10);
	v3.insert(p, 10); // 반복자 p 앞에 10 넣기


	// 3. 접근
	int n1 = v3.front(); // 앞
	int n2 = v3.back();  // 뒤
	int n3 = v3[1];      // list 안됨
	int n4 = v3.at(1);   // list 안됨

	// list 는 반복자를 꺼내서 이동후 접근
	auto p3 = v3.begin();
	std::advance(p3, 2);
	int n5 = *p3;
	
	// 4. 요소 제거
	v3.pop_back();
//	v3.pop_front(); // vector 안됨

	auto p3 = v3.begin();
	v3.erase(p3); // 한개 제거
	v3.erase(p3, v3.end()); // 구간 제거
	v3.clear(); // 모두 제거

	// 5. 요소 변경
	std::list<int> s3 = { 1,2,3 };

	v3.assign(s3.begin(), s3.end()); // v3의 모든 요소를 변경

	// 6. 기타
	auto ax = v3.get_allocator(); // 메모리 할당기 얻기
	auto s1 = v3.size();
	auto s2 = v3.max_size(); // 보관 가능한 최대 크기

	
}
