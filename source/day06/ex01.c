// ex01.c	
// Reverse �Լ� �����
#include<stdio.h>
int Reverse(int num); // �Լ��� ���� : �Լ��� ���¸� �ۼ�
int main()
{
	printf("1234�� �Ųٷ� �ϸ� %d\n", Reverse(1234));
									// �Լ��� ȣ��
	
}
int Reverse(int num) {	// �Լ��� ���� : ���� ���� �ۼ�
	int ret = 0;
	while (1) {
		ret += num % 10;
		ret *= 10;
		num /= 10;
		if (num < 10)
			break;
	}
	ret += num;
	return ret;	// �Լ��� ��ȯ���� �Լ� ȣ�� �ڸ��� ���ư���
}
