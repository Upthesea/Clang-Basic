// queue_ex.c
// Queue_order.c
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	char * menu;
	struct node * link;
}Q;
Q * getNode() {
	Q * tmp = (Q*)malloc(sizeof(Q));
	tmp->link = 0;
	return tmp;
}
void Enqueue(Q ** fr, Q ** re) {
	char * menu = (char *)malloc(20);	// char menu[20]; �� Heap�� ����
	printf("�ֹ��� �޴��� �Է� : ");		// �Լ��� ����Ǿ menu�� �Ҹ����� �ʴ´�
	scanf("%s", menu);
	printf("\n");
	if (*fr == 0) {
		*fr = getNode();
		*re = *fr;
	}
	else {
		(*re)->link = getNode();
		*re = (*re)->link;
	}
	(*re)->menu = menu;
}
char * Dequeue(Q ** fr) {
	if (*fr == 0) {
		return 0;
	}
	char * data = (*fr)->menu;
	Q * tmp = (*fr)->link;
	free(*fr);
	*fr = tmp;
	return data;
}
void PrintQ(Q ** fr) {
	if (*fr != 0) {	// ��⿭�� �����Ͱ� �����ϸ�
		printf("%s - ", (*fr)->menu);	// �����͸� ����Ѵ�
		if ((*fr)->link != 0)			// ���� �����Ͱ� �����ϸ�
			PrintQ(&(*fr)->link);		// ���� �����͸� ����Ű�� �������� �ּҸ� ����
		else							// ���� �����Ͱ� ������ 
			printf("REAR\n\n\n\n");		// �������� ���
	}
	else			// ��⿭�� �����Ͱ� �ϳ��� ������
		printf("[ �ֹ� ���� ] - REAR\n\n\n\n"); // ������ ���
}
int main(void) {
	Q * fr = 0, *re = 0;
	int sel = 0;
	char * str = 0;
	while (sel != 3) {
		system("cls");
		printf("\n\n\n\tFRONT - ");
		PrintQ(&fr);
		printf("1. �ֹ� �Է�\n");
		if (fr != 0)	printf("2. [%s] �ϼ� �˸�\n", fr->menu);
		else		printf("\n");
		printf("3. ���� ����\n\n�Է� > ");	scanf("%d", &sel);

		switch (sel) {
		case 1:Enqueue(&fr, &re); break;
		case 2:
			str = Dequeue(&fr);
			printf("\n\t%s", (str != 0) ? str : "�ֹ��� �����ϴ�\n\n");
			printf("%s", (str != 0) ? " ���Խ��ϴ�~\n\n" : ""); break;
		default:
			printf("%s\n", (sel == 3) ? "\n\t�Ĵ� ���� ���� !!\n" : "�߸��Է� !!\n");
		}
		system("pause");
	}
}