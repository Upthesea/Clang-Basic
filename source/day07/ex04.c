// ex04.c
// ���� �Ҵ�
#include<stdio.h>
int main()
{
	printf("�� ���� ������ �Է��ұ�� : ");
	int n;
	scanf("%d", &n);

	int * p = (void *)malloc(4 * n);

	for (int i = 0; i < n; i++) {
		printf("%d��° ���� �Է� : ", i + 1);
		scanf("%d", p + i);
	}

	printf("�Է¹��� ���� : ");
	for (int i = 0; i < n; i++)
		//printf("%d%s", *(p + i), (i != n - 1) ? ", " : "\n");
		printf("%d%s", p[i], (i != n - 1) ? ", " : "\n");

	// arr[i]  =>  �ּ�[�ε���]  => *(�ּ� + �ε���)

	int test[5] = { 10,20,30,40,50 };
	printf("test[3] : %d\n", test[3]);
	printf("3[test] : %d\n", 3[test]);

	char name[20] = "������";
	char * name2 = "������";

	printf("%s, %s\n", name, name2);

	//name = "���̸�";
	name2 = "���̸�";
	printf("%s, %s\n", name, name2);
}