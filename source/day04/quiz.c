// quiz.c	
#include<stdio.h>
#include<stdlib.h>
int main()
{
	// 1. Hello, world ���ڿ��� 5�� ����ϼ���
	printf("1. Hello, world ���ڿ��� 5�� ����ϼ���\n\n");
	int i = 0;
	while (i < 5) {
		printf("Hello, world !!\n");
		i++;
	}
	printf("\n==================================\n");
	// 2. A���� Z���� ���ĺ��� ���ٿ� ����ϼ���
	// ( �� ���ڴ� ,�� �����ϰ� Z�ڿ��� ,�� ����� �մϴ�)
	printf("2. A���� Z���� ���ĺ��� ���ٿ� ����ϼ���\n\n");
	char ch = 'A';
	while (ch <= 'Z') {
		printf("%c", ch);
		if (ch != 'Z') printf(",");
		ch++;
	}
	printf("\n==================================\n");
	printf("3. 3�ڸ� �̻��� ������ �Է¹޾� �ڸ����� ����� ����ϼ���\n\n");
	// 3. 3�ڸ� �̻��� ������ �Է¹޾� �ڸ����� ����� ����ϼ���
	// �Է�) 1234
	// ���) 4321
	int num, ret = 0;
	while (1){
		printf("3�ڸ� �̻��� ���� �Է� : ");	scanf("%d", &num);
		if (num > 99) break;
	}
	printf("%d => ", num);
	while (num > 10) {
		ret += num % 10;	// num�� ���ڸ��� ret�� ���ϱ�
		num /= 10;			// ����� ���ڸ��� ������
		ret *= 10;			// ���� ���ڸ� �ޱ� ���� x10
	}
	printf("%d\n", ret + num);
	printf("\n==================================\n");

}