// ex02.c
// 조건연산자 (삼항연산자) 연습하기
#include<stdio.h>
int main()
{
	/*int num = 1;
	printf((num % 2) ? "짝수" : "홀수");
	printf("\n\n");
	num = 4;
	printf((num % 2) ? "짝수" : "홀수");
	printf("\n\n");*/
	// (조건) ? 참 : 거짓

	// 000000 - X000000
	/*printf("주민등록번호 뒷자리 첫 숫자를 입력 : ");
	scanf("%d", &num);
	printf("당신은 ");
	printf((num % 2) ? "남성" : "여성");
	printf("입니다\n\n");*/

	// 문제 1. 나이를 입력받아 20세 이상이면 성인,
	// 20세 미만이면 미성년자로 표기하는 코드를 작성하세요
	/*int age;	 printf("나이 입력 : ");	scanf("%d", &age);
	printf("당신은 %s입니다\n", (age >= 20) ? "성인" : "미성년자");*/
	
	
	// 문제 2. 생년월일을(6자리) 입력받아 정수형 변수에 대입하고
	// 그 변수를 %연산을 이용하여 자릿수를 구분하여 따로 저장하세요
	// 연도, 월, 일 대로 저장한 후에, age = (현재년도 - 출생년도 + 1);
	
	// 입력 ) 이름 : 아이유
	//		  생년월일 : 930516

	//	출력) 아이유님은 1993년 5월 16일 출생이고, 27살이며, 성인입니다

	// 1234 % 10 = 4		1234 / 10 = 123

	char name[20];
	int input, age;
	printf("이름 입력 : ");		scanf("%s", name);
	printf("생년월일 입력 : ");	scanf("%d", &input);

	int year, month, date;
	date = input % 100;		input = input / 100;
	month = input % 100;	year = input / 100;
	year += (18 > year) ? 2000 : 1900;
	age = 2018 - year + 1;
	
	printf("%s님은 %d년도 %d월 %d일 출생이고, %d살입니다\n",
		name, year, month, date, age);
	





}