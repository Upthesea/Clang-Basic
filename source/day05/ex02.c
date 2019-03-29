// ex02.c	for 제어문
#include<stdio.h>
int main()
{
	int n = 0;		// 1. 변수 선언 및 초기값 설정
	while (n < 5)	// 2. 반복을 유지할 조건
	{
		printf("while : n = %d\n", n); // 3. 실행문
		n++;		// 4. 변수의 증감식
	}
	printf("\n================\n\n");

	for (int i = 0; i < 5; i++) {
//	      1          2      4
		printf("for : i = %d\n", i);	
			// 3
	}// 1, 2, 3, 4, 2, 3, 4, 2, 3, 4 ....

	printf("\n================\n\n");

	// 1. for문을 이용하여 Hello world를 5번 출력하기
	for (int i = 0; i < 5; i++)
		printf("Hello world !!\n");
		
	// 2. 1에서 10의 합을 구하여 출력하기
	int sum = 0;
	for (int i = 1; i <= 10; i++)
		sum = sum + i;
		// sum += i;
	printf("1~10의 누적 합계 : %d\n", sum);

	// 3. 1에서 입력받은 수 까지의 합을 구하여 출력하기
	int input;
	sum = 0;
	printf("1부터 n까지의 정수의 합을 구합니다\n입력 : ");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++)
		sum += i;
	printf("1 ~ %d의 누적 합계 : %d\n", input, sum);


	// 4. 1에서 100 사이의 수 중에서 홀수의 합과 짝수의 합 구하기
	int odd_sum = 0, even_sum = 0;

	for (int i = 1; i <= 100; i++) {
		// if (i % 2 == 0)	even_sum += i;
		// else		    odd_sum += i;
		(i % 2 == 0) ? (even_sum += i) : (odd_sum += i);
	}
	printf("홀수의 합 : %d\n", odd_sum);
	printf("짝수의 합 : %d\n", even_sum);

}