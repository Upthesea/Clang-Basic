//	ex02.c
#include<stdio.h>
int main()
{
	// if �� �� ����(true/false), ����(ũ��, �۴�), ���� ��ġ����(==, !=)
	// ���� ���� ������ ������ �� �ִ�
	// Ư�� ������ ���� ���� �帧�� �б��� ���� switch ~ case �� ��ü �����ϴ�

	int num = 2;

	switch (num)	// num ������ ���� �������� ����
	{
	case 0: printf("num : 0\n"); break;	// if(num==0)
	case 1: printf("num : 1\n"); break;	// else if(num==1)
	case 2: printf("num : 2\n"); break; // else if(num==2)
	default: printf("num : 0�� �ƴϰ� 1�� �ƴϰ� 2�� �ƴ�\n");// else
	}// break�� ������ {} ������ �Ʒ��� �����

	printf("\n=======================================\n\n");

	// ����) switch ~ case�� �̿��Ͽ� �Է°��� Ȧ��/¦���� �����Ͽ� ���

	printf("���� �ϳ� �Է� : ");	scanf("%d", &num);

	switch (num % 2)
	{
	case 0: printf("¦��"); break;
	case 1: printf("Ȧ��"); break;
	}
	// ��� switch ~ case �� if�� ��ü �����ϴ� (�ݴ�� �������� ����)

	// ����) �ֹε�Ϲ�ȣ ���ڸ� ù��° ���ڸ� �Է¹޾Ƽ�
	// �������� ������ �����Ͽ� ����ϼ���
	/*
				����				����
				1800		�� : 9			�� : 0
				1900		�� : 1			�� : 2
				2000		�� : 3			�� : 4
	*/
	printf("\n�ֹε�Ϲ�ȣ ���ڸ� ù��° ���� �Է� : ");
	scanf("%d", &num);
	
	switch (num)
	{
	case 9: // break�� �����Ƿ� �����ٷ� �̵�
	case 0: printf("1800��� "); break;
	case 1: 
	case 2: printf("1900��� "); break;
	case 3: 
	case 4: printf("2000��� "); break;
	default: 
		printf("���� ã�� �� �����ϴ�\n");
	}
	printf("%s\n", (num % 2) ? "����" : "����");
	printf("\n\n");
}