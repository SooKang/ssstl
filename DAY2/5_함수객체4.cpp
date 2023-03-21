	int(*f)(int, int) = &Add2;

	if (사용자 입력 == 1) f = &Add1;

	f(1, 2); 
