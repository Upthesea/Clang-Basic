//	ex03.c
#include<stdio.h>
#include<stdlib.h>	// ǥ�� ���̺귯�� ��� ����
int main()
{
	int n1, n2;
	char oper;
	while (1) {
		printf("\n\n\t\t=== ���� ===\n\n");
		printf("�� ���� �̿��� ��Ģ���� ���� �ۼ��ϼ���\n");
		printf("�Է� (���� : ^C) : ");
		scanf("%d%c%d", &n1, &oper, &n2);
			switch (oper)
			{
			case '+': printf("%d %c %d = %d\n", n1, oper, n2, n1 + n2); break;
			case '-': printf("%d %c %d = %d\n", n1, oper, n2, n1 - n2); break;
			case '*': printf("%d %c %d = %d\n", n1, oper, n2, n1 * n2); break;
			case '/': printf("%d %c %d = %d\n", n1, oper, n2, n1 / n2); break;
			case '%': printf("������ ������ �������� �ʽ��ϴ�\n"); break;
			default: printf("�Է��� �߸��Ǿ����ϴ�\n");
			}
			
			system("pause");		// stdlib.h �� ����� ���
			system("cls");
	}
}