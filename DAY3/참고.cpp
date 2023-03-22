#include <iostream>
#include <vector>
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
//	std::vector<Point> v1(10); // 10 번의 생성자 호출

	std::vector<Point> v2;
	v2.reserve(10); // sizeof(Point)*10 의 크기만큼의 메모리만 확보

	std::cout << "---" << std::endl;

	v2.push_back({ 0, 0 }); // 이 순간 1번째 생성자 호출
}



/*
int main()
{
//	Point* p1 = new Point; // 메모리 할당 + 생성자 호출

	Point* p2 = static_cast<Point*>(operator new(sizeof(Point))); //메모리만

	std::cout << p2 << std::endl;

	new(p2) Point(0, 0); // 생성자 호출 - placement new

}
*/





