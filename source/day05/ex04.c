// ex04.c
#include<stdio.h>
int main()
{
	/*
		 1  2  3  4  5
		 6  7  8  9 10
		11 12 13 14 15
		16 17 18 19 20
		21 22 23 24 25
	*/

	int num = 1;
	for (int i = 0; i < 5; i++) {	// ���� ��
		for (int j = 0; j < 5; j++) {	// ���� ��
			printf("%2d ", num++);
		}printf("\n");
	}printf("\n");
	// �� ����� num�̳� ������ �ٸ� ���� ����
	// i�� j�� �̿��Ͽ� �Ȱ��� ����غ�����

	for (int i = 0; i < 5; i++) {	// ���� ��
		for (int j = 0; j < 5; j++) {	// ���� ��
			printf("%2d ", (5 * i) + (j + 1));
		}printf("\n");
	}printf("\n");

	/*
			1 1 1 1 1
			1 0 0 0 1
			1 0 0 0 1
			1 0 0 0 1
			1 1 1 1 1
	*/
	for (int i = 0; i < 5; i++) {	// ���� ��
		for (int j = 0; j < 5; j++) {	// ���� ��
			if (i == 0 || j == 0 || i == 4 || j == 4)
				printf("�� ");
			else printf("   ");
			
		}printf("\n");
	}printf("\n");
}