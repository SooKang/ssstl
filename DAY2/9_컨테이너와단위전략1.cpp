#include <vector>

// resize �� ������ ������ ���ô�.
template<typename T> 
class vector
{
public:
	void resize(int sz)
	{
		// �޸� �Ҵ��� �ʿ��� ��� ��� �ұ�� ?
		// new ? malloc ? memory pool
	}
};

int main()
{
	std::vector<int> v(5);
	v.resize(10);
}


