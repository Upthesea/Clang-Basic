#include<stdio.h>
int main()
{
	/* 
		사용자의 이름과 나이, 키와 체중을 입력받아서 
		표준 체중과 비만도를 출력하는 프로그램 작성하기
		
		이름 - 문자열
		나이 - 정수
		키, 체중 - 실수

		표준 체중 = (키 - 100) * 0.9 [kg]		(소수점 둘째자리까지)
		비만도 = (현재 체중 / 표준 체중) * 100 [%](소수점 둘째자리까지)
	*/
	char name[20];
	int age;
	double height, weight, std_weight, weight_rate;

	printf("\n\t\t표준 체중 계산 프로그램\n\n");
	printf("이름 : "); scanf("%s", name);
	printf("나이 : "); scanf("%d", &age);
	printf(" 키  : "); scanf("%lf", &height);
	printf("체중 : "); scanf("%lf", &weight);

	std_weight = (height - 100) * 0.9;
	weight_rate = (weight / std_weight) * 100;

	printf("\n%s(%d세)님의 표준체중은 %.2lfkg이며, ", name, age, std_weight);
	printf("현재 비만도는 %.2lf%%입니다\n\n", weight_rate);


}