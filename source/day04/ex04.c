// ex04.c
#include<stdio.h>
#include<stdlib.h>
int main()
{
	// a += b  : a = a + b;
	// a++	   : a = a + 1;
	// a--	   : a = a - 1;

	int num = 10;
	printf("num : %d\n", num);
	
	if (num < 20)		num++;
	printf("num : %d\n", num);

	while (num < 20)	num++;
	printf("num : %d\n", num);

	if (num < 30) {
		printf("if) num : %d\n", ++num);
		// ++a : ������ (��ġ) ���� ���� ������ �� ����
		// a++ : ������ (��ġ) ���๮�� ���� ���� ����
	}

	while (num < 30) {
		printf("while) num : %d\n", ++num);
	}
	
	printf("main) num : %d\n", ++num);

	/*
		while : ������ ���� ���� ���๮�� �ݺ������� ����
		Ƚ���� ���� �ݺ�, Ƚ���� �ƴ� ���ǿ����� ����
	*/

	system("cls");		// �ܼ� â�� ��µ� ���ڸ� �����

	int score;

	while (1) {		// 1�� ���� �ǹ��ϹǷ� ���� �ݺ�
		printf("������ �Է� (0 ~ 100) : ");
		scanf("%d", &score);
		if (0 <= score && score <= 100)
			break;	// while ���� ����������
		printf("������ ������ϴ�, �ٽ� �Է��ϼ��� !!\n");
	}
	printf("�Է¹��� ������ %d���Դϴ�\n\n", score);

	char str[20] = "Hello, world !!\n";
	int count = 0;
	while (count < 5) {
		printf("%s", str);
		count++;
	}
}