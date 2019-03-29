// ex01.c	: 이전 내용 중간 정리

#include<stdio.h>		// 표준 입출력 헤더 파일
#include<stdlib.h>		// 표준 라이브러리 헤더 파일
int main()				// 메인 함수
{						// 범위의 시작
	int num = 0;	// 변수 선언 및 초기화
	printf("Hello world !!\n");	// 표준 출력 함수
	scanf("%d", &num);			// 표준 입력 함수

	printf("num : %s\n", (num % 2 == 0) ? "짝수" : "홀수");
						// 삼항 연산자
	
	if (num % 2 == 0)	// 조건문 if
		printf("짝수");

	while (1)			// 조건 반복문 while(무한 반복)
	{
		printf("Hello C !!\n");
		num++;			// 단항연산자
		if (num % 2 == 0)// 조건에 따라서 반복을 탈출하는 구문
			break;		// 지정된 블럭을 탈출하는 제어문
	}

	switch (num % 2) // 스위치로 지정된 변수의 값에 따라 흐름 분기
	{
		case 0:printf("짝수\n"); break;
		case 1:
			printf("홀수\n");
			break;
		default:printf("짝수도 홀수도 아니다(?)\n");
	}



















}						// 범위의 끝