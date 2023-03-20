#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };


	std::sort(s.begin(), s.end()); 
}
