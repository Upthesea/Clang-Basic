#include<stdio.h>
int main()
{
	// ǥ�� ����� �⺻ �Լ� : printf()
	// ǥ�� �Է��� �⺻ �Լ� : scanf()

	/*char name[20];
	int age;

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", name);

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);

	printf("%s���� %d���Դϴ�\n", name, age);*/
	
	// scanf("����", &�����Һ���);
	// scanf("����", �迭����);

	int num1, num2;
	// scanf�� �Է��� ���� ������ �ʱ�ȭ�� �ʼ������� �ʴ�.
	// �� ���� �Է¹޾� +, -, *, / �� ����� 4�ٿ� ����ϴ� �ڵ� �ۼ�
	// ��, �������� �Ҽ��� 1�ڸ� ���� ���

	/*printf("����1 �Է� : ");		scanf("%d", &num1);
	printf("����2 �Է� : ");		scanf("%d", &num2);*/
	/*printf("�ΰ��� ������ �Է��ϼ���(m n) : ");
	scanf("%d %d", &num1, &num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %.1f\n", num1, num2, (float)num1 / num2);*/

	/*
		scanf("%d\n");		(X)		�̽������� ������ ����
		scanf("%.2f");		(X)		�Ҽ��� �ڸ� ���� ����
		scanf("%d %d");		(O)		���� ���� �������� �����Ͽ� �Է�
	*/

	/*printf("����� �ð� �Է�\n\n");
	int hour, minute;
	printf("��� : ");	scanf("%d", &hour);
	printf("��� : ");	scanf("%d", &minute);

	printf("���� %d�� %d�п� �˶��� �︳�ϴ�\n", hour, minute);
	printf("[%d : %d]\n", hour, minute);
	printf("[%2d : %2d]\n", hour, minute);
	printf("[%02d : %02d]\n", hour, minute);*/

	// ���ڿ� ���� �� ����
	printf("%s : CF\n", "����");
	printf("%s : ��ȭ\n", "�嵿��");
	printf("%s : ����\n", "�þ��ؼ�");
	printf("==========================\n");
	printf("%10s : CF\n", "����");
	printf("%10s : ��ȭ\n", "�嵿��");
	printf("%10s : ����\n", "�þ��ؼ�");
	printf("==========================\n");
	printf("%-10s : CF\n", "����");
	printf("%-10s : ��ȭ\n", "�嵿��");
	printf("%-10s : ����\n", "�þ��ؼ�");








}
