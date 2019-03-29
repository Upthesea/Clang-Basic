// ex01.c 
// pointer
/*
	C언어는 포인터 변수를 이용하여 컴퓨터의 메모리에
	직접 접근하여 값을 대입하거나 변경할 수 있다

	잘 사용하면 유용한 도구가 되지만
	실수할 경우 프로그램이 구동되지 않는 상태가 될 수 있다
*/

#include<stdio.h>
int main()
{
	int a = 10;		// a라는 4byte공간을 할당하고 10을 대입
	int * pa = &a;	// pa라는 공간을 할당하고 &a(a변수의 주소)
					// 를 대입하여 a를 가리키게 한다
	printf("  a : %d\n", a);
	printf(" &a : %d\n", &a);
	printf(" pa : %d\n", pa);
	printf("*pa : %d\n", *pa);

	*pa = 20;
	printf("  a : %d\n", a);

	/*
		* : asterisk : 포인터 변수를 선언하거나 대상을 참조할때 사용한다
		변수 선언시에는 해당 변수가 포인터 변수임을 표시한다
		그 외에는 포인터변수가 가지는 주소값의 위치(대상)을 참조한다

		정수를 담는 변수 : int
		실수를 담는 변수 : double
		주소를 담는 변수 : pointer 
	*/

	double db;
	// 1. db 변수에 2.0을 대입하고 출력하세요
	db = 2.0;
	printf("\n\n1. db : %.2f\n", db);

	// 2. db 변수를 가리키는 포인터 변수 pdb를 만드세요
	double * pdb = &db;
	printf("2. pdb : %d\n", pdb);	// 주소는 무조건 정수

	// 3. pdb 를 이용하여 값을 3.14로 변경하세요
	*pdb = 3.14;

	// 4. db 변수의 값을 다시 출력하세요
	printf("4. db : %.2f\n", db);

}