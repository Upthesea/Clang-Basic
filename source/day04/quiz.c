// quiz.c	
#include<stdio.h>
#include<stdlib.h>
int main()
{
	// 1. Hello, world 문자열을 5번 출력하세요
	printf("1. Hello, world 문자열을 5번 출력하세요\n\n");
	int i = 0;
	while (i < 5) {
		printf("Hello, world !!\n");
		i++;
	}
	printf("\n==================================\n");
	// 2. A부터 Z까지 알파벳을 한줄에 출력하세요
	// ( 각 글자는 ,로 구분하고 Z뒤에는 ,가 없어야 합니다)
	printf("2. A부터 Z까지 알파벳을 한줄에 출력하세요\n\n");
	char ch = 'A';
	while (ch <= 'Z') {
		printf("%c", ch);
		if (ch != 'Z') printf(",");
		ch++;
	}
	printf("\n==================================\n");
	printf("3. 3자리 이상의 정수를 입력받아 자릿수를 뒤집어서 출력하세요\n\n");
	// 3. 3자리 이상의 정수를 입력받아 자릿수를 뒤집어서 출력하세요
	// 입력) 1234
	// 출력) 4321
	int num, ret = 0;
	while (1){
		printf("3자리 이상의 정수 입력 : ");	scanf("%d", &num);
		if (num > 99) break;
	}
	printf("%d => ", num);
	while (num > 10) {
		ret += num % 10;	// num의 끝자리를 ret에 더하기
		num /= 10;			// 사용한 끝자리는 버리기
		ret *= 10;			// 다음 숫자를 받기 위해 x10
	}
	printf("%d\n", ret + num);
	printf("\n==================================\n");

}