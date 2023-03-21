#include <iostream>
#include <bitset> // 비트단위 데이타 관리를 위한 STL 요소

// 함수 객체는 
// => 동작뿐 아니라 상태를 가질수 있습니다.( 멤버 데이타가 있다는의미)

template<int N = 10>
class URandom
{
	std::bitset<N> bs;
	bool recycle;
public:
	URandom(bool b = false) : recycle(b)
	{
//		bs.set(4); // 4번째 비트만 1로
		bs.set();  // 모든 비트를 1로
	}
	int operator()()
	{
		if (bs.none())
		{
			if (recycle == false)
				return -1;
			
			bs.set(); // 다시 모두 1로 놓고 시작
		}

		int k = -1;

		while ( !bs.test(k = rand() % N) );

		bs.reset(k);

		return k;
	}

	int remain_count() { return bs.count(); } // 1의 갯수
};

//URandom urand;
URandom<100> urand(true);

int main()
{
	for (int i = 0; i < 15; i++)
		std::cout << urand() << std::endl;

	std::cout << urand.remain_count() << std::endl;
}





