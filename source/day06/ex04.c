#include<stdio.h>
int main()
{

	// 추가적인 변수 생성 없이, 입출력을 이용하여
	// 사용자 이름과 국어, 영어, 수학 점수를 입력받고
	// 3개의 점수를 받으면 배열의 마지막에는 합계를 저장하고
	// 출력시에는 합계를 이용하여 평균을 소수점 둘째자리까지 출력하세요

	// 출력은 이름 : xxx, 국어 : xx, 영어 : xx, 수학 : xx, 
	//	합계 : xx,  평균 : xx.xx 의 형태로 출력하세요
	
	char name[20];
	int score[4];

	printf("이름을 입력하세요 : "); scanf("%s", name);
	for (int i = 0; i < 4; i++) {
		if (i == 0) printf("국어 ");
		if (i == 1) printf("영어 ");
		if (i == 2) printf("수학 ");
		if (i != 3) {
			printf("점수를 입력하세요 : ");
			scanf("%d", &score[i]);
		}
		else
			score[3] = score[0] + score[1] + score[2];
	}

	printf("이름 : %s\n", name);
	printf("국어 : %d\n", score[0]);
	printf("영어 : %d\n", score[1]);
	printf("수학 : %d\n", score[2]);
	printf("합계 : %d\n", score[3]);
	printf("평균 : %.2f\n", score[3] / 3.0);

}