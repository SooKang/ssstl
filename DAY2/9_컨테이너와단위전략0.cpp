// 9_컨테이너와단위전략0

int main()
{
	// 아래 코드에서 메모리 할당 방식을 new 대신 malloc 으로 변경하려면
	// 몇군데를 변경해야 할까요 ?
	int* p1 = new int;
	int* p2 = new int;

	delete p1;
	delete p2;
}
