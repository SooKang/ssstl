// 5_함수객체8
#include "show.h"

int main()
{
	std::vector<int> v = { 1,3,2 };

	// 기본 버전 : 오름 차순 정렬
	std::sort(v.begin(), v.end());

	// 비교 정책 교체 1. 일반 함수
	std::sort(v.begin(), v.end(), cmp1);  
}
