//	ex04.c
//	�ڱ� ���� ����ü : 
//  �ڽŰ� ���� type�� �����ϴ� �����͸� ����� ������ ����ü
#include<stdio.h>
#include<stdlib.h>
typedef struct Order {
	char name[10];
	struct Order * next;
}OD;
OD * new(){
	OD * tmp = (OD *)
}
int main()
{
	//OD o1 = { "���", 0 };
	//OD o2 = { "���", 0 };
	//OD o3 = { "����", 0 };

	//o1.next = &o2;
	//printf("���� ���� �޴��� %s�Դϴ�\n", o1.name);
	//printf("���� ���� �޴��� %s�Դϴ�\n", o1.next->name);
	//// o3�� �̸��� ����Ҷ�, o1�� ���ؼ��� ����� �� �ֵ���
	//// �����ͺ����� ���� �����ϼ���

	//o1.next->next = &o3;
	//printf("���� ���� �޴��� %s�̰�\n,", o1.name);
	//printf("���� ���� �޴��� %s�̰�\n,", o1.next->name);
	//printf("�� ���� ���� �޴��� %s�̴�.\n", o1.next->next->name);

	OD * food = 0;
	//�ֹ��� ����
	food = (OD *)malloc(sizeof(OD));
	printf("�޴� �Է� : ");
	scanf("%s", food->name);



}