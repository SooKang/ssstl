#include <iostream>
#include <vector>
#include <list>

/*
void print_first_element(std::vector<int>& v)
{
	int n = v.front();

	std::cout << n << std::endl;
}
*/
/*
template<typename T> 
void print_first_element(std::vector<T>& v)
{
	T n = v.front();

	std::cout << n << std::endl;
}
*/

template<typename T>
void print_first_element(T& v)
{
	// T	         : std::list<double>
	// T::value_type => std::list<double>::value_type => double

//	typename T::value_type n = v.front();

	auto n = v.front(); // ok.. C++11 부터 가능

	std::cout << n << std::endl;

	// v의 요소타입과 동일한 타입의 list 생성
	std::list<typename T::value_type> s;

}

int main()
{
//	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
//	std::vector<double> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<double> v = { 1,2,3,4,5,6,7,8,9,10 };

	print_first_element(v);
}

/*
// template  기반 컨테이너를 사용하다 보면
// 컨테이너가 저장하는 타입을 알고 싶을때가 있습니다. - 위 print_first_element
// 그래서 STL 의 모든 컨테이너에는 value_type 이 있습니다.
template<typename T> 
class list
{
public:
	using value_type = T;  // typedef T value_type 과 동일.
	
	//.....
};

list<int> s = { 1,2,3 };

list<int>::value_type n = s.front(); // n의 타입을 생각해 보세요
*/

// 참고
// 일반 클래스         : 멤버 데이타, 멤버 함수
// STL 컨테이너 클래스 : 멤버 데이타, 멤버 함수, 멤버 타입 개념 추가
//											 ( value_type 같은 요소)

// cppreference.com 에서 std::vector 검색
