//	ex02.c
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>	// Sleep(int msec)
void Timer(double n) {
	
	for (int i = n * 60; i >= 0; i--) {
		system("cls");
		printf("\n\n\t\t");
		printf("%02d : %02d\n", i / 60, i % 60);
		Sleep(1000);
	}
}
int main()
{
	// ��ȯ���� �������� �ʴ� �Լ� Timer�� ����
	// �Ǽ� ������ ���� ���޹޾Ƽ�, mm : ss �� ���·� Ÿ�̸Ӹ� üũ�ϴ�
	// �Լ��� �ۼ��ϼ���

	Timer(1.5);

	/*for (int i = 97; i < 102; i++) {
		printf("%c ", i);
		Sleep(1000);
	}*/
}