#include<stdio.h>
int main()
{
	/* 
		������� �̸��� ����, Ű�� ü���� �Է¹޾Ƽ� 
		ǥ�� ü�߰� �񸸵��� ����ϴ� ���α׷� �ۼ��ϱ�
		
		�̸� - ���ڿ�
		���� - ����
		Ű, ü�� - �Ǽ�

		ǥ�� ü�� = (Ű - 100) * 0.9 [kg]		(�Ҽ��� ��°�ڸ�����)
		�񸸵� = (���� ü�� / ǥ�� ü��) * 100 [%](�Ҽ��� ��°�ڸ�����)
	*/
	char name[20];
	int age;
	double height, weight, std_weight, weight_rate;

	printf("\n\t\tǥ�� ü�� ��� ���α׷�\n\n");
	printf("�̸� : "); scanf("%s", name);
	printf("���� : "); scanf("%d", &age);
	printf(" Ű  : "); scanf("%lf", &height);
	printf("ü�� : "); scanf("%lf", &weight);

	std_weight = (height - 100) * 0.9;
	weight_rate = (weight / std_weight) * 100;

	printf("\n%s(%d��)���� ǥ��ü���� %.2lfkg�̸�, ", name, age, std_weight);
	printf("���� �񸸵��� %.2lf%%�Դϴ�\n\n", weight_rate);


}