#include<stdio.h>
int main()
{
	// 서식 제어 문자
	// 서로 다른 형태의 데이터를 출력할때
	// 형식을 지정하여 출력하는 문자

	printf("97 : %d\n", 97);
	printf("97 : %c\n", 97);

	// 자료형 : Data의 형태를 지정
	// int : 정수
	// float, double : 실수
	// char : 단일 문자(한 글자)
	// char [] : 문자열(단어 혹은 문장)

	// 변수 : 데이터를 담을 수 있는 일정 크기의 메모리 *공간*

	int num;	// 변수의 선언 : 공간을 생성하고 num이라는 이름을 할당
	num = 11;	// 변수에 값을 할당;
				// = : 대입연산자, 오른쪽 값을 왼쪽 공간에 담는다
	int num2 = 22;
				// 선언과 할당이 동시에 이루어진다 -> 변수의 초기화
	int num3 = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;

	printf("num3 : %d\n", num3);
				// %d자리가 비어있고, 여기는 정수가 올 수 있다
				// %d자리에 올수 있는 값을 변수 혹은 상수로 , 뒤에 작성

	char ch = 65;
	char ch2 = 'A';	// 단일문자를 상수로 표현하려면 ' 를 이용하여 묶는다
	char name[20] = "ITBANK";
					// 문자열을 상수로 표현하려면 " 를 이용하여 묶는다

	float fl = 1.2;		// 작은 크기의 실수를 표현
	double db = 3.14;	// float보다 큰 크기의 실수를 표현(실수의 기본형)

	printf("name : %s\n", name);
	printf("ch : %c\n", ch);
	printf("num : %d\n", num);
	printf("fl : %f\n", fl);
	printf("db : %lf\n", db);













}