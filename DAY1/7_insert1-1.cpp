// 7_insert1-1

template<typename T>
T square(T a)
{
	return a * a;
}
template<typename T> class List
{
public:
	List(int sz, T value) {}
};

// C++14 까지는 클래스 템플릿의 타입 추론이 안되기 때문에
// 클래스 템플릿 사용시 복잡해 보이는 경우가 있습니다.
// 이때는 클래스 템플릿의 객체를 만드는 함수 템플릿을 도입하면 
// 쉬워 집니다.
// => "object generator" 라는 이름을 가진 기술
template<typename T>
List<T> make_list(int sz, T value)
{
	return List<T>(sz, value);
}



int main()
{
	// 함수 템플릿을 사용하는 2가지 방법.
	// 쉬운 방법을 선택해 보세요
	square<int>(3); // 1. 타입 전달
	square(3);	    // 2. 타입 생략 => 쉬워 보인다!!


//	List<int> s1(10, 3);
//	List s2(10, 3); // C++17 부터 가능..
					// C++14 까지는 반드시 타입 전달해야 합니다.

	auto s3 = make_list<int>(10, 3); // 정확한 표기법
	auto s4 = make_list(10, 3);		 // 함수 템플릿 이므로 타입 생략가능
}
