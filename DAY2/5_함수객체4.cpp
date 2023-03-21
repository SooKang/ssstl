       int Add1(int a, int b) { return a + b; }
inline int Add2(int a, int b) { return a + b; }

// 핵심 1. 인라인 치환 문법은 컴파일 시간 문법 입니다

// 2. 인라인 함수라도 함수 포인터에 담아서 사용하면
//    인라인 치환 될수 없습니다.
//    "함수 포인터 변수"!!  "변수는 실행시간 변경 가능하므로"

int main()
{
	int n1 = Add1(1, 2); // 호출, "call Add1 주소"
	int n2 = Add2(1, 2); // Add2 의 기계어 코드를 이 위치로 치환
						 // 장점 :  빠르다.

	int(*f)(int, int) = &Add2;

	if (사용자 입력 == 1) f = &Add1;

	f(1, 2); // 호출 될까요 ? 치환 될까요 ?
}


// godbolt.org 에 접속해 보세요.









// 구글에서 "github mingw 11" 검색후  1번째 링크
