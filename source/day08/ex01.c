// ex01.c
// ����ü (struct)
#include<stdio.h>
/*
struct Student {	// ������ �ƴϴ� !! -> �ڷ���
	char name[20];
	int kor, eng, mat, sum;
	double avg;
};
*/
typedef struct Student {	
	char name[20];
	int kor, eng, mat, sum;
	double avg;
}STD;
void PrintSTD(STD a);	// �Լ��� ����, ���ĸ� �����ϰ� ���Ǵ� �Ʒ�����
int main()
{
	/*
		Data�� �����ϱ� ���� ����

		���� : �ڷ����� �´� �ڷḦ �ϳ� �����ϱ� ���� �޸𸮿� �Ҵ�޴� ����
		�迭 : ���� �ڷ����� �ڷḦ ���� ȿ�������� �����ϴ� ����
		����ü : ���� �ٸ� �ڷ����� ��Ƽ� ������ �� �ֵ��� ����
				 '����� ���� �ڷ���'

		�л� �̶�� ����ü�� �̸��� ���̿� ���� ����� ��� �������� ����
		��ȭ��ȣ�� ��Ͽ� �̸�(���ڿ�)�� ��ȣ(����)�� ����
	*/
	int num = 10;
	int score[3] = { 100,99,87 };

	struct Student kim = { "�����", 100, 99, 87, 286, 95.33 };
//	[   �ڷ���   ] [����] = { ���� �ڷ��� ������� ���� �Է�};	

	printf("�̸� : %s\n", kim.name); // . �����ڴ� ������ ���� ����
	printf("�� ���� : %d, %d, %d\n", kim.kor, kim.eng, kim.mat);
	printf("�հ� : %d, ��� : %.2f\n\n", kim.sum, kim.avg);

	STD yoon = { "������", 99,88,77,0,0.0 };
	yoon.sum = yoon.kor + yoon.eng + yoon.mat;
	yoon.avg = yoon.sum / 3.0;

	printf("�̸� : %s\n", yoon.name); // . �����ڴ� ������ ���� ����
	printf("�� ���� : %d, %d, %d\n", yoon.kor, yoon.eng, yoon.mat);
	printf("�հ� : %d, ��� : %.2f\n\n", yoon.sum, yoon.avg);

	// ������ ���� �̿��Ͽ� ������ ǥ���ϴ� ����ü ������ �����ϰ�
	// PrintSTD() �Լ��� �̿��Ͽ� ����ϼ���

	STD won;
	strcpy(won.name, "������");	// ���ڿ� ���� �Լ�
	won.kor = 100;	won.eng = 98;	won.mat = 89;
	won.sum = won.kor + won.eng + won.mat;
	won.avg = won.sum / 3.0;
	
	PrintSTD(won);


}
void PrintSTD(STD a) {
	printf("�̸� : %s\n", a.name); // . �����ڴ� ������ ���� ����
	printf("�� ���� : %d, %d, %d\n", a.kor, a.eng, a.mat);
	printf("�հ� : %d, ��� : %.2f\n\n", a.sum, a.avg);
}