#include <vector>
#include <iostream>

template<typename T>
class MyAlloc
{
public:
	T* allocate(std::size_t sz) // unsigned int
	{
		void* p = malloc(sizeof(T) * sz);
		printf("allocate : %p, %d cnt\n", p, sz);
		return static_cast<T*>(p);
	}
	void deallocate(T* p, std::size_t sz)
	{
		printf("deallocate : %p, %d cnt\n", p, sz);
		free(p);
	}

	// 위 2개 함수 외에도 아래 3개 더 필요 : 관례적인 코드
	using value_type = T;

	MyAlloc() {}	// 디폴트 생성자
	template<typename U> MyAlloc(const MyAlloc<U>&) {} // generic생성자
};




int main()
{
	std::vector<int, MyAlloc<int> > v;

	std::cout << "----------------" << std::endl;
	v.resize(5);
	std::cout << "----------------" << std::endl;
	v.resize(5);
	std::cout << "----------------" << std::endl;
}
