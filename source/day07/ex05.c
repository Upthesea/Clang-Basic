//	ex05.c
#include<stdio.h>
int * normal() {
	int num = 10;
	int * pnum = &num;
	return pnum;
}
int * dynamic() {
	int * pnum = (int *)malloc(sizeof(int));
	*pnum = 20;
	return pnum;
}
int main()
{
	int * p = (int *)malloc(sizeof(int) * 5);
	// malloc() �Լ��� void * ���¸� ��ȯ�Ѵ�
	// �ڷ����� �����Ǿ� ������ ������ � �ּҸ� ��ȯ�ϴ� �Լ�

	double * p2 = (double *)malloc(sizeof(double));

	// 1. ������ �������� ������ ������ �������� �ʾ��� ���
	// 2. ��𿡼��� ���� ������ ������ �����ϱ� ���ؼ�

	int * normal1 = normal();
	int * dynamic1 = dynamic();
	
	printf("normal() : %d\n", *normal1);
	printf("dynamic() : %d\n", *dynamic1);

	// �����Ҵ����� ������ ������ ����ڰ� �Ҵ� �������� ������
	// �Ҹ���� �ʴ´�

	free(dynamic1);	// �����Ҵ��� �����ϴ� �Լ�

	printf("normal() : %d\n", *normal1);
	printf("dynamic() : %d\n", *dynamic1);

}
