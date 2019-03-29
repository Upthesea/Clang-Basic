//	ex03.c
#include<stdio.h>
#include<stdlib.h>	// 표준 라이브러리 헤더 파일
int main()
{
	int n1, n2;
	char oper;
	while (1) {
		printf("\n\n\t\t=== 계산기 ===\n\n");
		printf("두 수를 이용한 사칙연산 식을 작성하세요\n");
		printf("입력 (종료 : ^C) : ");
		scanf("%d%c%d", &n1, &oper, &n2);
			switch (oper)
			{
			case '+': printf("%d %c %d = %d\n", n1, oper, n2, n1 + n2); break;
			case '-': printf("%d %c %d = %d\n", n1, oper, n2, n1 - n2); break;
			case '*': printf("%d %c %d = %d\n", n1, oper, n2, n1 * n2); break;
			case '/': printf("%d %c %d = %d\n", n1, oper, n2, n1 / n2); break;
			case '%': printf("나머지 연산은 지원하지 않습니다\n"); break;
			default: printf("입력이 잘못되었습니다\n");
			}
			
			system("pause");		// stdlib.h 에 내장된 기능
			system("cls");
	}
}