// ex04.c		제어문 if
/*
	제어문 : 프로그램의 흐름을 제어한다
	분기(if, switch~case), 반복(while, for, do~while)
	기타(break, continue)
*/
#include<stdio.h>
int main()
{
	// if(조건1)			실행문1;
	// else if(조건2)	실행문2;
	// else				실행문3;

	// 만약 조건1이 참이면, 실행문1을 실행해라
	// 아니라면, 조건2가 참이면, 실행문2를 실행해라
	// 아니라면 실행문3을 실행해라

	// 코드는 위에서 아래로 진행합니다

	int num = 0;		// Debugging Mode : F11
						// Ctrl + F7 : 디버그 모드 중지

	if (num == 1)
		printf("1\n");
	else if (num == 0)
		printf("0\n");
	else
		printf("모르겠다~\n");
	printf("===========================\n\n");

	int age = 19;
	if (age >= 20)	printf("성인입니다\n");
	else {	// 여러 실행문을 가질 경우 중괄호로 묶어준다
		printf("미성년자 입니다\n");
		printf("흡연은 각종 암을 유발할 수 있으며, ");
		printf("특히 노약자에게 해롭습니다\n");
	}

	// 두 수의 크기를 비교하여 큰 수를 찾아내고
	// 큰 수가 짝수인지 홀수인지 판별하여 같이 출력하세요
	// if()

	int n1, n2;
	printf("두 수를 입력 : "); scanf("%d %d", &n1, &n2);
	if (n1 > n2) {
		if (n1 % 2 == 0)
			printf("%d가 더 크고, %d는 짝수입니다\n", n1, n1);
		else
			printf("%d가 더 크고, %d는 홀수입니다\n", n1, n1);
	}
	else {
		if(n2 % 2 == 0)
			printf("%d가 더 크고, %d는 짝수입니다\n", n2, n2);
		else
			printf("%d가 더 크고, %d는 홀수입니다\n", n2, n2);
	}

	// 정수를 입력받아, 그 수의 절대값을 구하는 코드를 작성

	int num, abso;

	printf("정수 입력 : "); scanf("%d", &num);
	if (num >= 0)	abso = num;
	else			abso = -num;
	// if를 사용할 경우, 발생가능한 모든 가능성을 염두할 것
	printf("%d의 절대값은 %d\n", num, abso);

 }