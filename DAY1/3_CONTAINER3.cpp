// github.com/codenuri/ ssstl   에 3_container2.cpp 있습니다.

#include <iostream>

template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};

template<typename T>
class slist_iterator
{
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = 0) : current(p) {}

	inline slist_iterator& operator++()
	{
		current = current->next;
		return *this;
	}
	inline T& operator*() { return current->data; }
	inline bool operator==(const slist_iterator& other) { return current == other.current; }
	inline bool operator!=(const slist_iterator& other) { return current != other.current; }
};

template<typename T> class slist
{
	Node<T>* head = 0;
public:
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}
	
	// 규칙 
	// => 모든 컨테이너 설계자는 반드시 자신의 반복자 클래스 이름을
	//    약속된 이름으로 외부 노출해야 한다.

	using iterator = slist_iterator<T>;
			// typedef slist_iterator<T> iterator 의 의미 입니다.


	iterator begin() { return iterator(head); }
	iterator end() { return iterator(0); }
};

int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);

//	slist_iterator<int> p = s.begin();
	slist<int>::iterator p = s.begin();



	std::cout << *p << std::endl; // 50

	++p;

	std::cout << *p << std::endl; // 40
}
