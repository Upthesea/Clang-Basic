//	ex02.c
//	����ü �迭
#include<stdio.h>
#include<stdlib.h>
typedef struct Student {
	char name[20];
	int kor, eng, mat, sum;
	double avg;
}STD;
STD InputSTD() {
	STD a;
	printf("�̸��� �Է��ϼ��� : ");		scanf("%s", &a.name);
	printf("���������� �Է��ϼ��� : ");	scanf("%d", &a.kor);
	printf("���������� �Է��ϼ��� : ");	scanf("%d", &a.eng);
	printf("���������� �Է��ϼ��� : ");	scanf("%d", &a.mat);
	a.sum = a.kor + a.eng + a.mat;
	a.avg = a.sum / 3.0;
	return a;
}
void PrintSTD(STD a) {
	printf("�̸� : %s\n", a.name); // . �����ڴ� ������ ���� ����
	printf("�� ���� : %d, %d, %d\n", a.kor, a.eng, a.mat);
	printf("�հ� : %d, ��� : %.2f\n\n", a.sum, a.avg);
}
int main()
{
	// �迭 : ���� �ڷ����� ��� ����
	// ����ü : ����� ���� �ڷ���

	
	STD test;	// ����ü ���� ����

	// test.name = "name";
	// strcpy("name", test.name);
	// printf("�̸��� �Է��ϼ��� : ");	scanf("%s", &test.name);
	// printf("�̸� : %s\n", test.name);
	//test = InputSTD();	// �Է¹��� �����͸� test�� ����(����)�ض�
	//PrintSTD(test);		// test�� ������ �ִ� data�� ����ض�
	
	/*
		1. �л� ���� �Է�
		2. ��ü ���
		3. �̸� �˻� �л� ���� ���
		4. �ְ����� �˻� �� ���
		5. ����
	*/
	STD arr[5];	// STD�� ���� �� �ִ� �迭
	STD max;
	char find[20];
	for (int i = 0; i < 5; i++) {
		arr[i].sum = 0;		// �հ谡 0�� �׸��� �Է��� ���� �������� ����
	}
	int menu;
	while (1) {
		system("cls");
		printf("1. �л� ���� �Է�\n2. ��ü ���\n3. �̸� �˻� �л� ���� ���");
		printf("\n4. �ְ����� �˻� �� ���\n5. ����\n���� : ");
		scanf("%d", &menu);

		switch (menu) {
		case 1:	// �Է�
			for (int i = 0; i < 5; i++) {
				if (arr[i].sum == 0) {
					arr[i] = InputSTD();
					break;	// for�� �ݺ��� �ߴ��ϴ� break;
				}
			}
			break;
		case 2:	// ��ü ���
			for (int i = 0; i < 5; i++) {
				if (arr[i].sum != 0)
					PrintSTD(arr[i]);
			}
			system("pause");
			break;
		case 3:	// �˻�
			printf("�˻��� �̸��� �Է� : ");	scanf("%s", find);
			for (int i = 0; i < 5; i++) {
				if (strcmp(find, arr[i].name) == 0) {
					PrintSTD(arr[i]);
					break;
				}
			}
			system("pause");
			break;
		case 4:	// �ְ�����
			max.sum = 0;
			for (int i = 0; i < 5; i++) {
				if (max.sum < arr[i].sum) {
					max = arr[i];
				}
			}
			printf("\n=== �ְ� ������ ===\n\n");
			PrintSTD(max);
			system("pause");
			break;
		case 5:	// ����
			printf("���α׷��� �����մϴ�\n\n");
			return 0;
		default:printf("�Է��� �߸��ϼ̳׿�~\n");
		}
	}
	/*for (int i = 0; i < 3; i++) 
		arr[i] = InputSTD();

	for (int i = 0; i < 3; i++)
		PrintSTD(arr[i]);*/
		

}