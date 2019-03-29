#include<stdio.h>
int main()
{
	// 표준 출력의 기본 함수 : printf()
	// 표준 입력의 기본 함수 : scanf()

	/*char name[20];
	int age;

	printf("이름을 입력하세요 : ");
	scanf("%s", name);

	printf("나이를 입력하세요 : ");
	scanf("%d", &age);

	printf("%s님은 %d살입니다\n", name, age);*/
	
	// scanf("서식", &저장할변수);
	// scanf("서식", 배열변수);

	int num1, num2;
	// scanf로 입력을 받을 변수는 초기화가 필수적이지 않다.
	// 두 수를 입력받아 +, -, *, / 의 결과를 4줄에 출력하는 코드 작성
	// 단, 나눗셈은 소수점 1자리 까지 출력

	/*printf("정수1 입력 : ");		scanf("%d", &num1);
	printf("정수2 입력 : ");		scanf("%d", &num2);*/
	/*printf("두개의 정수를 입력하세요(m n) : ");
	scanf("%d %d", &num1, &num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %.1f\n", num1, num2, (float)num1 / num2);*/

	/*
		scanf("%d\n");		(X)		이스케이프 시퀀스 금지
		scanf("%.2f");		(X)		소수점 자리 제한 금지
		scanf("%d %d");		(O)		여러 값을 띄워쓰기로 구분하여 입력
	*/

	/*printf("모닝콜 시간 입력\n\n");
	int hour, minute;
	printf("몇시 : ");	scanf("%d", &hour);
	printf("몇분 : ");	scanf("%d", &minute);

	printf("매일 %d시 %d분에 알람이 울립니다\n", hour, minute);
	printf("[%d : %d]\n", hour, minute);
	printf("[%2d : %2d]\n", hour, minute);
	printf("[%02d : %02d]\n", hour, minute);*/

	// 문자열 길이 및 정렬
	printf("%s : CF\n", "원빈");
	printf("%s : 영화\n", "장동건");
	printf("%s : 가수\n", "시아준수");
	printf("==========================\n");
	printf("%10s : CF\n", "원빈");
	printf("%10s : 영화\n", "장동건");
	printf("%10s : 가수\n", "시아준수");
	printf("==========================\n");
	printf("%-10s : CF\n", "원빈");
	printf("%-10s : 영화\n", "장동건");
	printf("%-10s : 가수\n", "시아준수");








}
