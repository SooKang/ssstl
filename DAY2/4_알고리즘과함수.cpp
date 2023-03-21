#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"
using namespace std;
// 알고리즘은 함수를 인자로 받는 경우가 많이 있습니다

// 단항 함수 : 인자가 1개인 함수
// 이항 함수 : 인자가 2개인 함수
void foo(int n)
{
    std::cout << n << ", ";
}
int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    
    // for_each 알고리즘
    std::for_each(v.begin(), v.end(), foo);
    
    
    // C++11 부터는 일반 함수로 하지 말고, 람다 표현식을 사용하세요
    std::for_each(v.begin(), v.end(), 
        [](int n)   {  std::cout << n << ", ";});

	return 0;
}



















//
