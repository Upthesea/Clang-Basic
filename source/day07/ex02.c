// ex02.c
#include<stdio.h>
void Swap(int n1, int n2);	// �Լ��� ����
int main()
{
	char ch = 'A';	int num = 10;	double db = 3.14;
	
	char * pch = &ch;
	int * pnum = &num;
	double * pdb = &db;

	printf("ch : %c, \t*pch : %c\n", ch, *pch);
	printf("num : %d, \t*pnum : %d\n", num, *pnum);
	printf("db : %.1f, \t*pdb : %.1f\n", db, *pdb);

	printf("%d + %d = %d\n",13, *pnum, 13 + *pnum);

	printf("\n");
	printf("������ �������� ũ�� : %d Byte\n", sizeof(pch));
	printf("������ �������� ũ�� : %d Byte\n", sizeof(pnum));
	printf("�Ǽ��� �������� ũ�� : %d Byte\n", sizeof(pdb));
	
	//	 * �� & �� ���� ������ �ݴ��

	printf("num : %d, &num : %d\n", num, &num);
	printf("*pnum : %d, pnum : %d\n", *pnum, pnum);
	//								��,		�ּ�

	printf("*&num : %d\n", *&num);

	// ������ ������ �ڷ����� ����� �ڷ����̴�

	printf("pch : %d\t pch + 1 : %d\n", pch, pch + 1);
	printf("pnum : %d\t pnum + 1 : %d\n", pnum, pnum + 1);

	printf("*pnum : %d\n", *pnum);
	printf("������ ���� �Է��ϼ��� : ");
	scanf("%d", pnum);
	printf("*pnum : %d\n", *pnum);
	//========================================
	printf("\n\n");
	int num1 = 10, num2 = 20;
	printf("num1 : %d, num2 : %d\n", num1, num2);
	//Swap(num1, num2);
	Swap(&num1, &num2);
	printf("num1 : %d, num2 : %d\n", num1, num2);
}
//void Swap(int n1, int n2)
void Swap(int * p1, int * p2)
{
	printf("*p1 : %d, *p2 : %d\n", *p1, *p2);
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	printf("*p1 : %d, *p2 : %d\n", *p1, *p2);
}