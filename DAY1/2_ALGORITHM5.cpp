#include <iostream>

// step 5. 실패시 반환값을 어떻게 할것인가 ?
// 0 을 반환하지 말고 last 반환
// 1. last 는 검색 대상은 아니므로 검색 성공시는 last가 나올수 없다
// 2. last 는 결국, 다음 검색 구간의 시작을 의미
// 3. find 구현 자체가 빨라진다.

template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first;// == last ? nullptr : first;
}





int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = find(x, x + 3, 5);

	if (p == x+3)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}
