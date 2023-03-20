#include <iostream>
#include <vector> // 모든 요소가 연속된 메모리의 컨테이너(수요일날자세히)
#include <list>	  // 더블 링크드 리스트
#include <algorithm> // 우리가 만든 find 같은 함수 템플릿을 (멤버가 아닌)
					// STL 에서 알고리즘이라고 합니다.
int main()
{
//	std::list<int> c = { 1,2,3,4,5,6,7,8,9,10 }; 
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 뒤집는 알고리즘은 std::reverse() 입니다. 뒤집어 보세요
	
	std::reverse(c.begin(), c.end()); // 1

//	c.reverse(); // 2


	for (auto e : c)
		std::cout << e << ", ";
}
