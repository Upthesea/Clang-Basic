// ex03.c
// ����ü�� ������, �����Ҵ�
#include<stdio.h>
#include<stdlib.h>
typedef struct PhoneBook {
	char name[20];
	int num1;
	int num2;
	int num3;
}PB;
PB InputPB() {
	PB a;
	printf("�̸� : ");			scanf("%s", &a.name);
	printf("��ȭ��ȣ �Է� (000 0000 0000) : ");	
	scanf("%d %d %d", &a.num1, &a.num2, &a.num3);
	return a;
}
PB ShowPB(PB a) {
	printf("[ %s ] : %03d - %04d - %04d\n", a.name, a.num1, a.num2, a.num3);
}
int main()
{
	PB * book = 0;
	book = (PB *)malloc(sizeof(PB) * 5);	// PB book[5];
	
	*(book + 0) = InputPB();
	ShowPB(*(book + 0));

	PB arr[5] = {
		{"������", 010, 1111, 1111},
		{"�¿�", 010, 2222, 2222},
		{"����", 010, 3333, 3333},
	};
	strcpy((book + 0)->name, "������");


	printf("%s\n", arr[0].name);
	printf("%s\n", (book + 0)->name);

	// ����ü ������ �������� ���� �����Ҷ����� . �����ڸ� ���
	// ����ü �����͸� �������� ���� �����Ҷ����� -> �����ڸ� ���

	PB v1 = { "����ö", 010, 4444, 4444 };
	PB * p1 = (PB *)malloc(sizeof(PB));
	//p1->name = "�ΰ���";
	strcpy(p1->name, "�ΰ���");
	p1->num1 = 010;
	p1->num2 = 5555;
	p1->num3 = 5555;

	printf("v1�� �̸� : %s\n", v1.name);
	printf("p1�� �̸� : %s\n", p1->name);

}