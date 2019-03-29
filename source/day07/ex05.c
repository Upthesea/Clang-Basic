//	ex05.c
#include<stdio.h>
int * normal() {
	int num = 10;
	int * pnum = &num;
	return pnum;
}
int * dynamic() {
	int * pnum = (int *)malloc(sizeof(int));
	*pnum = 20;
	return pnum;
}
int main()
{
	int * p = (int *)malloc(sizeof(int) * 5);
	// malloc() 함수는 void * 형태를 반환한다
	// 자료형이 지정되어 있지는 않지만 어떤 주소를 반환하는 함수

	double * p2 = (double *)malloc(sizeof(double));

	// 1. 컴파일 시점에서 변수의 개수가 정해지지 않았을 경우
	// 2. 어디에서나 접근 가능한 변수를 생성하기 위해서

	int * normal1 = normal();
	int * dynamic1 = dynamic();
	
	printf("normal() : %d\n", *normal1);
	printf("dynamic() : %d\n", *dynamic1);

	// 동적할당으로 생성한 변수는 사용자가 할당 해제하지 않으면
	// 소멸되지 않는다

	free(dynamic1);	// 동적할당을 해제하는 함수

	printf("normal() : %d\n", *normal1);
	printf("dynamic() : %d\n", *dynamic1);

}
