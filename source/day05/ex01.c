// ex01.c	: ���� ���� �߰� ����

#include<stdio.h>		// ǥ�� ����� ��� ����
#include<stdlib.h>		// ǥ�� ���̺귯�� ��� ����
int main()				// ���� �Լ�
{						// ������ ����
	int num = 0;	// ���� ���� �� �ʱ�ȭ
	printf("Hello world !!\n");	// ǥ�� ��� �Լ�
	scanf("%d", &num);			// ǥ�� �Է� �Լ�

	printf("num : %s\n", (num % 2 == 0) ? "¦��" : "Ȧ��");
						// ���� ������
	
	if (num % 2 == 0)	// ���ǹ� if
		printf("¦��");

	while (1)			// ���� �ݺ��� while(���� �ݺ�)
	{
		printf("Hello C !!\n");
		num++;			// ���׿�����
		if (num % 2 == 0)// ���ǿ� ���� �ݺ��� Ż���ϴ� ����
			break;		// ������ ���� Ż���ϴ� ���
	}

	switch (num % 2) // ����ġ�� ������ ������ ���� ���� �帧 �б�
	{
		case 0:printf("¦��\n"); break;
		case 1:
			printf("Ȧ��\n");
			break;
		default:printf("¦���� Ȧ���� �ƴϴ�(?)\n");
	}



















}						// ������ ��