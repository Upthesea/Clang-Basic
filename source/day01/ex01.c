#include<stdio.h>
int main()
{
	char name[20] = "������";
	int age = 26;
	float height = 163.7;
	double weight = 49.2;

	// �� ������ printf()�� �̿��Ͽ� �Ʒ��� ���� ����ϼ���

	/*
		�̸�		: ������
		����		: 26��
		Ű		: 163.7cm
		������	: 49.2kg
	*/

	printf("�̸�\t : %s\n", name);
	printf("����\t : %d\n", age);
	printf("Ű\t : %.1f cm\n", height);
	printf("������\t : %.2lf kg\n", weight);

	// ������ ����� �������� �̿��Ͽ� ��� ������ ���ٿ� ����ϱ�

	// �������� 26���̰�, Ű�� 163.7cm�̸�, ü���� 49.2kg�Դϴ�
	printf("%s�� %d���̰�, Ű�� %.1fcm�̸�, ü���� %.1lfkg�Դϴ�\n\n"
		, name, age, height, weight);

	/*
		�ڷ���		���Ĺ���		ũ��
		char		%c			1 byte		����(����)
		int			%d			4 Byte		����(�⺻)
		float		%f			4 Byte		�Ǽ�
		double		%lf			8 Byte		�Ǽ�(�⺻)
		long		%ld			8 Byte		����(Ȯ��)
		char [n]	%s			n Byte		������ �迭 - ���ڿ�
	*/
}