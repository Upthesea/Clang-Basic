// ex04.c
#include<stdio.h>
int main()
{
	/*
		 1  2  3  4  5
		 6  7  8  9 10
		11 12 13 14 15
		16 17 18 19 20
		21 22 23 24 25
	*/

	int num = 1;
	for (int i = 0; i < 5; i++) {	// 세로 축
		for (int j = 0; j < 5; j++) {	// 가로 축
			printf("%2d ", num++);
		}printf("\n");
	}printf("\n");
	// 위 모양을 num이나 별도의 다른 변수 없이
	// i와 j를 이용하여 똑같이 출력해보세요

	for (int i = 0; i < 5; i++) {	// 세로 축
		for (int j = 0; j < 5; j++) {	// 가로 축
			printf("%2d ", (5 * i) + (j + 1));
		}printf("\n");
	}printf("\n");

	/*
			1 1 1 1 1
			1 0 0 0 1
			1 0 0 0 1
			1 0 0 0 1
			1 1 1 1 1
	*/
	for (int i = 0; i < 5; i++) {	// 세로 축
		for (int j = 0; j < 5; j++) {	// 가로 축
			if (i == 0 || j == 0 || i == 4 || j == 4)
				printf("ㅁ ");
			else printf("   ");
			
		}printf("\n");
	}printf("\n");
}