//	ex03.c	������ Ȱ�� ����
#include<stdio.h>
int main()
{
	// ���� �Է¹޾� Ȧ��, ¦���� �����Ͽ� ����ϼ���
	int n;
	printf("���� �ϳ� �Է� : "); scanf("%d", &n);
	printf("%d�� %s !!\n", n, (n % 2) ? "Ȧ��" : "¦��");

	// �� ���� �Է¹޾� ū ���� ����ϼ���
	int n1, n2;
	printf("�� ���� �Է� : "); scanf("%d %d", &n1, &n2);
	printf("�� ���� ū ���� %d�Դϴ�\n", (n1>n2)?n1:n2);

	// �� ���� �Է¹޾� ū ���� ����ϼ���
	int n3, n4, n5, max;
	printf("�� ������ �Է� : ");
	scanf("%d", &n3);	scanf("%d", &n4);	scanf("%d", &n5);
	max = (n3 > n4) ? n3 : n4;
	max = (max > n5) ? max : n5;
	printf("%d, %d, %d�� ���� ū ���� %d\n", n3, n4, n5, max);


}