#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// �˰����� �����̳ʸ� ���� ���Ѵ�.

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	auto p = std::remove(v.begin(), v.end(), 3);

	show(v);  


	return 0;
}



















//
