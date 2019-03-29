// ex03.c
#include<stdio.h>
int main()
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("[%d, %d] ", i, j);
		}
		printf("\n");
	}
	printf("\n===================================\n\n");
	// 구구단 2단을 출력
	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", 2, i, 2 * i);
	}

	// 입력받은 단수를 출력하는 구구단
	// (2단에서 9단까지만 입력을 허용하기)
	int dan;
	while (1) {
		printf("단수 입력 : "); scanf("%d", &dan);
		if (2 <= dan && dan <= 9)
			break;
		printf("2단에서 9단까지 입력해~ 다시 !!\n");
	}
	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}

	// 구구단 전체 출력하는 코드

	for (int i = 2; i < 10; i++) {	// 단수
		for (int j = 1; j < 10; j++) {	// 곱하는 수
			printf("%d x %d = %d\n", i, j, i*j);
		}printf("\n");
	}
	/*  i   j
		2 : 1 2 3 4 5 6 7 8 9
		3 : 1 2 3 4 5 6 7 8 9
		4 : 1 2 3 4 5 6 7 8 9
		 .
		 .
	*/
	// 구구단 출력 코드를 가로로 출력하게 변경하고
	// 2~5단, 6~9단은 따로 출력하세요
	//  2		3		4		5
	//	6		7		8		9
	printf("\n===================================\n\n");

	for (int i = 1; i < 10; i++) {	// 단수
		for (int j = 2; j < 6; j++) {	// 곱하는 수
			printf("%d x %d = %2d\t", j, i, i*j);
		}printf("\n");
	}
	printf("\n===================================\n\n");

	for (int i = 1; i < 10; i++) {	// 단수
		for (int j = 6; j < 10; j++) {	// 곱하는 수
			printf("%d x %d = %2d\t", j, i, i*j);
		}printf("\n");
	}
	printf("\n===================================\n\n");

}
