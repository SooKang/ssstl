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
	
	v.resize(10);
	std::cout << "----------------" << std::endl;

	v.resize(5); // 기존 10개를 지우고 5개로 줄일까요 ??
				// 아니면 그냥 10개 사용하고, size 변수만 5로 할까요 ?
	std::cout << "----------------" << std::endl;
}

// cppreference.com  1번째 화면 Container Library 

// 단위 전략(Policy Base) 디자인

// => 클래스가 사용하는 다양한 정책을(메모리 할당, 비교, 상등조사등)
//    템플릿 인자를 사용해서 교체 하는 설계 기술

// STL 의 대부분 컨테이너에는 이 디자인을 사용
// => 메모리 할당 교체 : allocator
// => tree 의 비교 정책 교체
// => hash 의 해쉬 함수 교체등
