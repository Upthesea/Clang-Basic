#include<stdio.h>
int main()
{
	char name[20] = "아이유";
	int age = 26;
	float height = 163.7;
	double weight = 49.2;

	// 위 내용을 printf()를 이용하여 아래와 같이 출력하세요

	/*
		이름		: 아이유
		나이		: 26세
		키		: 163.7cm
		몸무게	: 49.2kg
	*/

	printf("이름\t : %s\n", name);
	printf("나이\t : %d\n", age);
	printf("키\t : %.1f cm\n", height);
	printf("몸무게\t : %.2lf kg\n", weight);

	// 위에서 출력한 변수들을 이용하여 모든 내용을 한줄에 출력하기

	// 아이유는 26살이고, 키는 163.7cm이며, 체중은 49.2kg입니다
	printf("%s는 %d살이고, 키는 %.1fcm이며, 체중은 %.1lfkg입니다\n\n"
		, name, age, height, weight);

	/*
		자료형		서식문자		크기
		char		%c			1 byte		정수(문자)
		int			%d			4 Byte		정수(기본)
		float		%f			4 Byte		실수
		double		%lf			8 Byte		실수(기본)
		long		%ld			8 Byte		정수(확장)
		char [n]	%s			n Byte		문자의 배열 - 문자열
	*/
}