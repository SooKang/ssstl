#include <vector>

int main()
{
	// 핵심 : C++17 부터는 STL 사용시 초기값이 있으면 타입 인자 생략가능합니다.

	std::vector<int> v1 = { 1,2,3,4,5 }; // C++14까지는 타입 전달해야 함

	std::vector v2 = { 1,2,3,4,5 }; // C++17 부터 가능

//	std::vector v3; // error. 타입추론 안됨.!

	std::vector v4(10,0); // ok.. 10개를 0으로!
}
