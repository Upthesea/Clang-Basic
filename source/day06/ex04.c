#include<stdio.h>
int main()
{

	// �߰����� ���� ���� ����, ������� �̿��Ͽ�
	// ����� �̸��� ����, ����, ���� ������ �Է¹ް�
	// 3���� ������ ������ �迭�� ���������� �հ踦 �����ϰ�
	// ��½ÿ��� �հ踦 �̿��Ͽ� ����� �Ҽ��� ��°�ڸ����� ����ϼ���

	// ����� �̸� : xxx, ���� : xx, ���� : xx, ���� : xx, 
	//	�հ� : xx,  ��� : xx.xx �� ���·� ����ϼ���
	
	char name[20];
	int score[4];

	printf("�̸��� �Է��ϼ��� : "); scanf("%s", name);
	for (int i = 0; i < 4; i++) {
		if (i == 0) printf("���� ");
		if (i == 1) printf("���� ");
		if (i == 2) printf("���� ");
		if (i != 3) {
			printf("������ �Է��ϼ��� : ");
			scanf("%d", &score[i]);
		}
		else
			score[3] = score[0] + score[1] + score[2];
	}

	printf("�̸� : %s\n", name);
	printf("���� : %d\n", score[0]);
	printf("���� : %d\n", score[1]);
	printf("���� : %d\n", score[2]);
	printf("�հ� : %d\n", score[3]);
	printf("��� : %.2f\n", score[3] / 3.0);

}