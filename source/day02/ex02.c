#include<stdio.h>
int main() 
{
	printf("%c %c %c %c %c !! \n", 72, 101, 108, 108, 111);

	// ASCII Code : 영문자, 숫자, 특수기호등에 숫자값을 지정한 표 
	// American Standard Character Information Interchange
	
	char ch = 'A';
	printf("ch : %c\n", ch);
	printf("ch : %d\n\n", ch);
	
	ch = ch + 1;	// '=' 대입 연산자는 우변을 먼저 계산한다

	printf("ch : %c\n", ch);
	printf("ch : %d\n\n", ch);

	printf("그 친구가 \"안녕하세요\" 라고 말했다\n");
	printf("오늘 오후 비가 올 확률은 80%%다\n");

}