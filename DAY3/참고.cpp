#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b)
	{
		std::cout << "생성자" << std::endl;
	}
};
int main()
{
	Point* p1 = new Point; // 메모리 할당 + 생성자 호출

	Point* p2 = static_cast<Point*>(operator new(sizeof(Point))); //메모리만
//	new(p2) Point(0, 0); // 생성자 호출

}


