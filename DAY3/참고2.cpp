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

	// Point 10개를 힙(연속된메모리로)에 할당해 보세요..

//	Point* p2 = new Point[10]; // 디폴트 생성자가 있어야 가능

	// 메모리 할당과 생성자 호출을 같이 하려고 하니까 위코드가 에러

	// 메모리 할당과 생성자 호출을 분리하면 유연성이 좋아 집니다.
	Point* p2 = static_cast<Point*>( operator new(sizeof(Point) * 10));
}

// malloc : 메모리 할당
// new    : 메모리 할당이 아닌 객체의 생성(메모리 할당 + 생성자 호출)

// new Point(1,1)     : 새로운 메모리에 객체를 만들어 달라
// new(p1) Point(1,1) : 이미 할당된 p1 메모리에 객체를 만들어 달라
					// 생성자만호출 해달라는것










