#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>

// 53 page 반복자 카테고리
// 입력 반복자 : =*p, ++
// 출력 반복자 : *p=, ++
// 
// ==> 위 2개는 멀티 패스 보장 안함, 아래 3개는 멀티 패스 보장
// 
// 전진 반복자 : =*p, ++				싱글리스트 반복자
// 양방향 반복자 : =*p, ++, --		더블리스트의 반복자
// 임의접근 반복자:=*p, ++, --, +, -, []  연속된메모리와 유사한 컨테이너의 반복자
//										 vector
// continuos iterator(C++17)

int main()
{
	std::forward_list<int> s1 = { 1,2,3 };
	std::list<int> s2 = { 1,2,3 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// find 의 1, 2번째 인자는 반복자 입니다.
	// => 최소 요구 조건을 위 5가지 분류에서 찾아 보세요..
	auto p = std::find(std::begin(v), std::end(v), 5);
						// => 입력 반복자

	std::reverse(v.begin(), v.end()); 
						// => 양방향 반복자

//	std::reverse(s1.begin(), s1.end()); // error
					// reverse 는 양방향 반복자 요구
					// 싱글리스트 반복자는 전진형 반복자
					// 요구 조건 충족할수 없음.

	std::reverse(s2.begin(), s2.end()); // ok

	//----------------------

	std::sort(v.begin(), v.end()); // 퀵소트 입니다.
								// 인자의 최소 요구 조건은 ?
								// 임의 접근 반복자만 가능!!

	std::sort(s2.begin(), s2.end()); // list 반복자 전달
									// error.
}
