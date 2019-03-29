//	ex02.c
#include<stdio.h>
int main()
{
	// if 는 논리 조건(true/false), 범위(크다, 작다), 값의 일치여부(==, !=)
	// 등의 여러 조건을 지정할 수 있다
	// 특정 변수의 값에 따라 흐름을 분기할 때는 switch ~ case 로 대체 가능하다

	int num = 2;

	switch (num)	// num 변수의 값을 기준으로 설정
	{
	case 0: printf("num : 0\n"); break;	// if(num==0)
	case 1: printf("num : 1\n"); break;	// else if(num==1)
	case 2: printf("num : 2\n"); break; // else if(num==2)
	default: printf("num : 0도 아니고 1도 아니고 2도 아님\n");// else
	}// break를 만나면 {} 범위를 아래로 벗어난다

	printf("\n=======================================\n\n");

	// 예제) switch ~ case를 이용하여 입력값의 홀수/짝수를 구분하여 출력

	printf("정수 하나 입력 : ");	scanf("%d", &num);

	switch (num % 2)
	{
	case 0: printf("짝수"); break;
	case 1: printf("홀수"); break;
	}
	// 모든 switch ~ case 는 if로 대체 가능하다 (반대는 성립하지 않음)

	// 문제) 주민등록번호 뒷자리 첫번째 숫자를 입력받아서
	// 출생연대와 성별을 구분하여 출력하세요
	/*
				연대				성별
				1800		남 : 9			여 : 0
				1900		남 : 1			여 : 2
				2000		남 : 3			여 : 4
	*/
	printf("\n주민등록번호 뒷자리 첫번째 숫자 입력 : ");
	scanf("%d", &num);
	
	switch (num)
	{
	case 9: // break가 없으므로 다음줄로 이동
	case 0: printf("1800년대 "); break;
	case 1: 
	case 2: printf("1900년대 "); break;
	case 3: 
	case 4: printf("2000년대 "); break;
	default: 
		printf("값을 찾을 수 없습니다\n");
	}
	printf("%s\n", (num % 2) ? "남성" : "여성");
	printf("\n\n");
}