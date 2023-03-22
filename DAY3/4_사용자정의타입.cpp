#include <vector>
#include "show.h"

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
int main()
{
//	std::vector<Point> v(10);	// error. Point 는 디폴트 생성자가 없습니다.
	
	Point pt(0, 0);
	std::vector<Point> v(10, pt);	// ok.. 10개를 만드는데 pt를 복사해서
									// 만들라는 것(복사 생성자 사용)

	std::vector<Point> v1(10, Point(0,0)); // 임시객체 형태로
	std::vector<Point> v2(10, { 0, 0 }); // C++11 부터 가능한 표기법

//	v2.resize(20); // error
	v2.resize(20, {0,0}); // ok
}



