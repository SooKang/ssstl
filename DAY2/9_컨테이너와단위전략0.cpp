// 9_컨테이너와단위전략0
#include <memory>
int main()
{
	// 아래 코드에서 메모리 할당 방식을 new 대신 malloc 으로 변경하려면
	// 몇군데를 변경해야 할까요 ?
	// => 모두 변경해야 합니다.
	int* p1 = new int;
	int* p2 = new int;

	delete p1;
	delete p2;

	// allocator : 메모리 할당을 추상화한 클래스

//	std::allocator<int> ax; // C++ 표준 메모리 할당기(C++98)

	UserDefineAllocator<int> ax; // 사용자가 만든 할당기
	// => 규칙 : 반드시 allocate(), deallocate()가 있어야 합니다.

	int* p3 = ax.allocate(1); // int 한개 할당
	int* p4 = ax.allocate(1); // 내부적으로 new 사용

	ax.deallocate(p3, 1); 
	ax.deallocate(p4, 1);  // delete 사용
}
