#include <iostream>

// 아래 코드는 싱글 링크드 리스트 입니다

template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};

// slist 안에 있는 Node 를 가리키는
// 포인터 역활을 하는 클래스
template<typename T>
class slist_iterator
{
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = 0) : current(p) {}

	// find 에 전달하려면 ++, *, ==, != 연산이 가능해야 합니다.
	inline slist_iterator& operator++()
	{
		current = current->next;
		return *this;
	}
	inline T& operator*() {	return current->data;	}
	inline bool operator==(const slist_iterator& other) { return current == other.current; }
	inline bool operator!=(const slist_iterator& other) { return current != other.current;	}
};

//slist_iterator<int> p(300번지);
//++p; // p.operator++()
//*p;  // p.operator*()

template<typename T> class slist
{
	Node<T>* head = 0;
public:
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}
	// 모든 컨테이너는 자신의 1번째 요소와 마지막 다음요소를 가리킨느
	// 반복자를 반환하는 함수가 있어야 한다. 라고 규칙을 정합니다.
	slist_iterator<T> begin() { return slist_iterator<T>(head); }
	slist_iterator<T> end()   { return slist_iterator<T>(0); }
};

int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50); 

	// 이제 컨테이너의 모든 요소를 순차적으로 접근하려면
	// 반복자를 꺼내면 됩니다.
	slist_iterator<int> p = s.begin();

	// 이제 p를 포인터처럼 생각하고 사용하면 됩니다.
	
	std::cout << *p << std::endl; // 50

	++p;

	std::cout << *p << std::endl; // 40
}
