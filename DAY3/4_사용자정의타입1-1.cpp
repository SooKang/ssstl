#include <vector>
#include "show.h"
using namespace std::rel_ops;
/*
namespace std
{
	namespace rel_ops
	{
		template<typename T> bool operator >(const T& a, const T& b)
		{
			return b < a;
		}
	}
}
*/

class Point
{
public:
	int x, y;
public:
	Point() : x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}

	bool operator<(const Point& other) const { return x < other.x; }
	bool operator==(const Point& other) const
	{
		return x == other.x && y == other.y; 
	}
};


int main()
{
	// 1. vector 는 복사 생성자가 있는 모든 타입을 보관할수 있습니다.
	std::vector<Point> v(10);

	// 2. 그런데, 다양한 알고리즘을 사용하려면
	//    알고리즘이 요구하는 연산이 가능해야 합니다.
//	std::sort(v.begin(), v.end()); // error
								   // sort 하려면 크기 비교가 되어야 합니다.

	// 방법 1. 람다 표현식으로 조건자 전달
	std::sort(v.begin(), v.end(),
		[](const Point& p1, const Point& p2) { return p1.x < p2.x; });

	// 방법 2. Point 클래스 자체에 < 연산자 재정의를 제공
	// => STL 은 대부분 "<" 와 "==" 를 요구하는 경우가 많습니다.

	// => < 와 == 가 되면 나머지 비교 연산도 가능해 집니다.
	Point p1(1, 2);
	Point p2(2, 3);

	bool b1 = p1 > p2;
	bool b2 = p1 != p2;

}



