//	ex03.c	연산자 활용 문제
#include<stdio.h>
int main()
{
	// 수를 입력받아 홀수, 짝수를 구분하여 출력하세요
	int n;
	printf("정수 하나 입력 : "); scanf("%d", &n);
	printf("%d는 %s !!\n", n, (n % 2) ? "홀수" : "짝수");

	// 두 수를 입력받아 큰 수를 출력하세요
	int n1, n2;
	printf("두 수를 입력 : "); scanf("%d %d", &n1, &n2);
	printf("두 수중 큰 수는 %d입니다\n", (n1>n2)?n1:n2);

	// 세 수를 입력받아 큰 수를 출력하세요
	int n3, n4, n5, max;
	printf("세 정수를 입력 : ");
	scanf("%d", &n3);	scanf("%d", &n4);	scanf("%d", &n5);
	max = (n3 > n4) ? n3 : n4;
	max = (max > n5) ? max : n5;
	printf("%d, %d, %d중 가장 큰 수는 %d\n", n3, n4, n5, max);


}