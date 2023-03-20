#include <forward_list>
#include <list>

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
	std::forward_list<int> s1 = { 1,2,3 };  // 싱글리스트
	std::list<int> s2 = { 1,2,3 };			// 더블리스트

	auto p1 = std::begin(s1);
	auto p2 = std::begin(s2);
	
	// 아래 코드에서 에러를 찾아 보세요.
	++p1;
	--p1; // error. 자료 구조 특징상
		  //        싱글링크드 리스트는 이전 노드로 이동할수 없다.
	++p2;
	--p2;

}
