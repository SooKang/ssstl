#include <iostream>

// list �� �̹� �ֽ��ϴ�
#include <list>
#include <vector>
#include <deque>

// �׷���, ������ �ʿ��մϴ�.
// 1. ���� ������.
// 2. list�� ����ó�� ���̰� ����.

int main()
{
	stack<int> s;
	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl;

}