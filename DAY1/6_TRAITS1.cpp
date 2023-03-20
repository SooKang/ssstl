#include <iostream>
// 임의 타입의 배열에 대해서 합을 구하는 함수
template<typename T>
T sum(T* first, T* last)
{
	int s = 0;

	while (first != last)
	{
		s += *first;
		++first;
	}
	return s;
}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int s = sum(x, x + 10);

	std::cout << s << std::endl; // 55 나와야 합니다
}
