#include <iostream>

// 일반 함수
// => 동작은 있지만, 상태를 가질수 없다.
// => 함수 수행중에 발생한 데이타를 저장할 공간이 없다.
// => 아래 예제에서 이미 발생된 난수를 저장하려면 전역변수필요

// 0 ~ 9 사이의 "중복되지않은" 난수를 반환하는 함수
int urand()
{
	return rand() % 10;
}

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}





