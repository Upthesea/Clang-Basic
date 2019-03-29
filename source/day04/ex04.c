// ex04.c
#include<stdio.h>
#include<stdlib.h>
int main()
{
	// a += b  : a = a + b;
	// a++	   : a = a + 1;
	// a--	   : a = a - 1;

	int num = 10;
	printf("num : %d\n", num);
	
	if (num < 20)		num++;
	printf("num : %d\n", num);

	while (num < 20)	num++;
	printf("num : %d\n", num);

	if (num < 30) {
		printf("if) num : %d\n", ++num);
		// ++a : 선증가 (전치) 먼저 값을 증가한 후 실행
		// a++ : 후증가 (후치) 실행문이 끝난 이후 증가
	}

	while (num < 30) {
		printf("while) num : %d\n", ++num);
	}
	
	printf("main) num : %d\n", ++num);

	/*
		while : 조건이 참인 동안 실행문을 반복적으로 수행
		횟수에 의한 반복, 횟수가 아닌 조건에서도 가능
	*/

	system("cls");		// 콘솔 창에 출력된 글자를 지운다

	int score;

	while (1) {		// 1은 참을 의미하므로 무한 반복
		printf("점수를 입력 (0 ~ 100) : ");
		scanf("%d", &score);
		if (0 <= score && score <= 100)
			break;	// while 문을 빠져나간다
		printf("범위를 벗어났습니다, 다시 입력하세요 !!\n");
	}
	printf("입력받은 점수는 %d점입니다\n\n", score);

	char str[20] = "Hello, world !!\n";
	int count = 0;
	while (count < 5) {
		printf("%s", str);
		count++;
	}
}