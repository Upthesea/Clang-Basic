// ex02.c
#include<stdio.h>
void Swap(int n1, int n2);	// 함수의 선언
int main()
{
	char ch = 'A';	int num = 10;	double db = 3.14;
	
	char * pch = &ch;
	int * pnum = &num;
	double * pdb = &db;

	printf("ch : %c, \t*pch : %c\n", ch, *pch);
	printf("num : %d, \t*pnum : %d\n", num, *pnum);
	printf("db : %.1f, \t*pdb : %.1f\n", db, *pdb);

	printf("%d + %d = %d\n",13, *pnum, 13 + *pnum);

	printf("\n");
	printf("문자형 포인터의 크기 : %d Byte\n", sizeof(pch));
	printf("정수형 포인터의 크기 : %d Byte\n", sizeof(pnum));
	printf("실수형 포인터의 크기 : %d Byte\n", sizeof(pdb));
	
	//	 * 와 & 는 서로 역할이 반대다

	printf("num : %d, &num : %d\n", num, &num);
	printf("*pnum : %d, pnum : %d\n", *pnum, pnum);
	//								값,		주소

	printf("*&num : %d\n", *&num);

	// 포인터 변수의 자료형은 대상의 자료형이다

	printf("pch : %d\t pch + 1 : %d\n", pch, pch + 1);
	printf("pnum : %d\t pnum + 1 : %d\n", pnum, pnum + 1);

	printf("*pnum : %d\n", *pnum);
	printf("정수를 새로 입력하세요 : ");
	scanf("%d", pnum);
	printf("*pnum : %d\n", *pnum);
	//========================================
	printf("\n\n");
	int num1 = 10, num2 = 20;
	printf("num1 : %d, num2 : %d\n", num1, num2);
	//Swap(num1, num2);
	Swap(&num1, &num2);
	printf("num1 : %d, num2 : %d\n", num1, num2);
}
//void Swap(int n1, int n2)
void Swap(int * p1, int * p2)
{
	printf("*p1 : %d, *p2 : %d\n", *p1, *p2);
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	printf("*p1 : %d, *p2 : %d\n", *p1, *p2);
}