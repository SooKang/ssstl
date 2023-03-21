// cpp17
#include "show.h"
#include <thread>
#include <chrono>
using std::literals;

void foo(int n)
{
	std::cout << std::this_thread::get_id() << " : " << n << std::endl;

	std::this_thread::sleep_for(300ms); // 300ms  대기
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	std::for_each(s.begin(), s.end(), foo);
}



