// 6_���������̳�
// C++98 ���� 3��
#include <vector>  // ���ӵ� �޸�, �������� �ݺ���
#include <deque>   // ���ӵ� �޸𸮿� ����, �������� �ݺ���
#include <list>    // ������ �޸�, ����� �ݺ���

// C++11 �߰��� 2��
#include <forward_list> // ������ �ݺ���
#include <array>		// �������� �ݺ���

#include "show.h"

int main()
{
	// ���� �����̳� �� ������ ���� ���� �մϴ�.
	std::list<int> c = { 1,2,3 };

	c.push_back(5);
	c.push_front(5); // vector ��� ����.

}
