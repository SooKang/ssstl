#include <vector>

// resize 의 원리를 생각해 봅시다.
template<typename T, typename Alloc = std::allocator<T> > 
class vector
{
	Alloc ax; // 메모리 할당기 객체
			  // vector 의 모든 멤버 함수는 메모리 할당이 필요하면
			  // 이 객체(ax) 를 사용해야 합니다.
public:
	void resize(int sz)
	{
		// 메모리 할당이 필요한 경우 어떻게 할까요 ?
		// new ? malloc ? memory pool

		T* p = ax.allocate(sz);

		ax.deallocate(p, sz);
	}
};

int main()
{
	std::vector<int> v(5);
	v.resize(10);
}


