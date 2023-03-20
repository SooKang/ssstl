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

	using iterator = slist_iterator<T>;

	iterator begin() { return iterator(head); }
	iterator end() { return iterator(0); }
};

// Algorithm6.cpp 에서 find 복사해오세요

template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first;
}

int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);

	slist<int>::iterator p = find(s.begin(), s.end(), 30);

	if (p == s.end())
		std::cout << "검색 실패" << std::endl;
	else
	{
		std::cout << "검색 성공 : " << *p << std::endl;
	}
}
// 핵심 : 반복자 덕분에 find 는 "배열 뿐 아니라" 
//        모든 자료구조에서 "선형검색"이 가능합니다.
