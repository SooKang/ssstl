// cpp17
#include "show.h"
#include <thread>
#include <chrono>
#include <execution>
using namespace std::literals;

void foo(int n)
{
	std::cout << std::this_thread::get_id() << " : " << n << std::endl;

	std::this_thread::sleep_for(300ms); // 300ms  대기
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

//	std::for_each(s.begin(), s.end(), foo);

	std::for_each( std::execution::par,  s.begin(), s.end(), foo);
}



// 구글에서 "github  mingw 11" 로 검색후 1번째 링크
// ASSET 에서 207 m 받으세요

// Mingw64 폴더를 통째로 원하는 위치에 복사 => 강사는 "D:\\mingw64"

// g++ 경로 : "D:\mingw64\bin"
