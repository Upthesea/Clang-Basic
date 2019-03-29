//	ex01.c
#include<stdio.h>
int main()
{
	/*
		국어 영어 수학 세 점수를 입력받아
		합계와 평균을 구하고
		평균이 90점 이상이면 A, 80 ~ 90미만이면 B
		70 ~ 80미만이면 C, 60 ~ 70미만이면 D
		를 출력하는 코드를 작성하세요 (if ~ else if ~ else)
	*/
	// 변수 선언
	char result;
	int kor, eng, mat, sum;
	double avg;

	// 값 입력 및 계산
	printf("국어 영어 수학 점수 입력 (kk ee mm) : "); 
	scanf("%d %d %d", &kor, &eng, &mat);
	sum = kor + eng + mat;
	avg = sum / 3.0;
	if (90 <= avg && avg <= 100)		result = 'A';	// 1
	else if (80 <= avg && avg < 90)		result = 'B';	// 2
	else if (70 <= avg && avg < 80)		result = 'C';	// 3
	else /*if (60 <= avg && avg < 70)*/	result = 'D';	// 나머지 모두

	// 출력
	printf("\n합계 : %d, 평균 : %.2lf, 학점 : %c\n\n", sum, avg, result);

	printf("============================================\n\n");

	// 집에 가는 방법

	int cash = 10000, card = 1000000, car = 1;
	//                                차를 가지고 있다

	if (car >= 1)
		printf("내 차타고 집에 간다\n");
	else if (car < 1) {
		if (cash || card)
			printf("대중교통을 이용한다\n");
		else
			printf("걸어간다\n");
	}
	if (car >= 1)
		printf("내 차타고 집에 간다\n");
	else if (car < 1 && cash || card)
			printf("대중교통을 이용한다\n");
	else if (car < 1 && cash == 0 && card == 0)
		printf("걸어간다\n");
	
	printf("============================================\n\n");
	
	car = 0;
	// 조건식에 정수를 사용할 수 있고, 1은 참, 0은 거짓을 의미하지만
	// 0이 아닌 모든 수는 참으로 간주한다
	if (car)
		printf("차가 있다");
	if (!car)
		printf("차가 없다");


	
}