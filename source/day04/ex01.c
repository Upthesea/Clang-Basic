//	ex01.c
#include<stdio.h>
int main()
{
	/*
		���� ���� ���� �� ������ �Է¹޾�
		�հ�� ����� ���ϰ�
		����� 90�� �̻��̸� A, 80 ~ 90�̸��̸� B
		70 ~ 80�̸��̸� C, 60 ~ 70�̸��̸� D
		�� ����ϴ� �ڵ带 �ۼ��ϼ��� (if ~ else if ~ else)
	*/
	// ���� ����
	char result;
	int kor, eng, mat, sum;
	double avg;

	// �� �Է� �� ���
	printf("���� ���� ���� ���� �Է� (kk ee mm) : "); 
	scanf("%d %d %d", &kor, &eng, &mat);
	sum = kor + eng + mat;
	avg = sum / 3.0;
	if (90 <= avg && avg <= 100)		result = 'A';	// 1
	else if (80 <= avg && avg < 90)		result = 'B';	// 2
	else if (70 <= avg && avg < 80)		result = 'C';	// 3
	else /*if (60 <= avg && avg < 70)*/	result = 'D';	// ������ ���

	// ���
	printf("\n�հ� : %d, ��� : %.2lf, ���� : %c\n\n", sum, avg, result);

	printf("============================================\n\n");

	// ���� ���� ���

	int cash = 10000, card = 1000000, car = 1;
	//                                ���� ������ �ִ�

	if (car >= 1)
		printf("�� ��Ÿ�� ���� ����\n");
	else if (car < 1) {
		if (cash || card)
			printf("���߱����� �̿��Ѵ�\n");
		else
			printf("�ɾ��\n");
	}
	if (car >= 1)
		printf("�� ��Ÿ�� ���� ����\n");
	else if (car < 1 && cash || card)
			printf("���߱����� �̿��Ѵ�\n");
	else if (car < 1 && cash == 0 && card == 0)
		printf("�ɾ��\n");
	
	printf("============================================\n\n");
	
	car = 0;
	// ���ǽĿ� ������ ����� �� �ְ�, 1�� ��, 0�� ������ �ǹ�������
	// 0�� �ƴ� ��� ���� ������ �����Ѵ�
	if (car)
		printf("���� �ִ�");
	if (!car)
		printf("���� ����");


	
}