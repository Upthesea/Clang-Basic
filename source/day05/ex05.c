//	ex05.c
#include<stdio.h>
//��� �Լ��̸�(�ڷ��� ����)
// int, char, double, float, void(��ȯ�� ������� ����)
void x2(int num){
	printf("%d + %d = %d\n", num, num, num + num);
}
int Sum(int n1, int n2) { // �Լ��� ����
	return n1 + n2;
}
// 1
float Multi(float f1, float f2) {
	float result;
	result = f1 * f2;
	return result;
}
// 2
int Max(int n1, int n2, int n3) {
	int max;
	if (n1 >= n2) max = n1;
	if (n2 > n1) max = n2;

	return (max > n3) ? max : n3;
}
int main()
{
	//printf("3 + 4 = %d\n", Sum(3, 4));
	//						// �Լ��� ȣ��(Call)
	//printf("1 + 1 = 2\n");
	//printf("2 + 2 = 4\n");
	//int num = 1;
	//for (num = 3; num < 7; num++)
	//	printf("%d + %d = %d\n", num, num, num + num);
	//// �Է°��� ���� �ٸ� ������� ��ȯ�ϴ� �ڵ��� ����
	///*
	//	y = f(x)
	//*/
	//x2(3);
	//x2(30);

	// 1. �ΰ��� float�� ���޹޾�(�Է°�) 
	// �� ���� ���� ��ȯ(return)�ϴ� Multi()
	printf("3.14�� 2.0�� ������ %.2f�̴�\n", Multi(3.14, 2.0));

	// 2. �� ���� ������ ���޹޾�, �� ���� ���� ū ������ ��ȯ�ϴ� Max()
	printf("2, 3, -4 �� ���� ū ���� %d �̴�\n", Max(2, 3, -4));

	// �ϳ��� ������ ���޹޾� �� ���� �Ųٷ� ����� ��ȯ�ϴ� �Լ�
	// Reverse() �� �ۼ��ϼ���
}