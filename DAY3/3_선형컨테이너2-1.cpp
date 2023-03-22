#include <vector>
#include <iostream>

// 핵심 : [] 와 at() 의 차이점

int main()
{
	std::vector<int> v = { 1,2,3 };

	try
	{
	//	v.at(10) = 0; // 잘못된 인덱스 사용시 예외 발생
		v[10] = 0;    // 잘못된 인덱스인지 확인 하는 코드 없음
					  // 잘못된 인덱스 보내면 그냥 비정상 종료
	}
	catch (const std::out_of_range& e)
	{
		std::cout << "예외 발생 : " << e.what() << std::endl;
	}

	for (int i = 0; i < v.size(); i++)
	{
		// 다음중 좋은 코드는 ?
		// => i 가 항상 유효한 값이다. 2번 권장
		//v.at(i) = 0; // 1
		v[i] = 0;    // 2
	}
}




