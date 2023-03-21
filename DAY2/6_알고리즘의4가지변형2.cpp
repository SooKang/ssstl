#include "show.h"

int main()
{
	std::list<int> s1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int> s2;

	// 주어진 구간에서 3 을 -1로 변경하는 코드 입니다.
//	std::replace(s1.begin(), s1.end(), 3, -1);

	// s1에서 짝수를 0으로 변경한 결과를 s2에 넣어 보세요


	show(s1); // 1,2,3,4,5,6,7,8,9,10
	show(s2); // 1,0,3,0,5,0,7,0,9,0
}
