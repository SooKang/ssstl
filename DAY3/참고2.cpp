#include <iostream>
#include <vector>

class Point
{
	int x, y;
public:
	Point(int a , int b ) : x(a), y(b)
	{
		std::cout << "생성자" << std::endl;
	}
};

int main()
{
	// Point 한개를 힙에 할당
	Point* p1 = new Point(0, 0);

	// Point 10개를 힙에 할당해 보세요..
}











