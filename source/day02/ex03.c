// ex03.c
#include<stdio.h>
int main()
{
	// �ڷ��� : �������� ���¸� ����. 
	// ���� Ȥ�� ���� �ÿ� �ڷ����� ��ġ�ؾ� �Ѵ�

	char ch = 'A';
	int num;

	//printf("ch : %d, num : %d\n", ch, num);

	// ������ ���� �ʱ�ȭ�ϰų� ���ο� ���� �Ҵ����� ������
	// �����Ⱚ�� ���ִ�. (������ ���������� ����� �� ����)

	/*
		182937589172389465891234791827358971238947 <- �޸� �Ϻ�
		1829[3758]9172389465891234791827358971238947
		     num
			 num = 11;
		1829[0011]9172389465891234791827358971238947
	*/

	num = ch;
	printf("ch : %d, num : %d\n", ch, num);

	num = 70;
	ch = num;
	printf("ch : %d, num : %d\n", ch, num);

	num = 1234;
	ch = num;
	printf("ch : %d, num : %d\n", ch, num);

	float fl = 3.14;
	printf("num : %d, fl : %.2f\n", num, fl);

	num = fl;
	printf("num : %d, fl : %.2f\n", num, fl);

	int n1 = 11, n2 = 3;
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
	printf("%d - %d = %d\n", n1, n2, n1 - n2);
	printf("%d * %d = %d\n", n1, n2, n1 * n2);
	printf("%d / %d = %.2f\n", n1, n2, (float)n1 / n2);

	// ������ ������ �����ϸ� ������ ���ǹǷ�
	// ���� ������ ������� �Ǽ��� ���¸� �ٲپ� �ָ� �Ҽ������� ���
	// ���� �ڷ����� �ٲپ��ֱ� ���ؼ� (�ڷ���)�� �� ���·� �ۼ��Ѵ�
	
	// �ڵ忡�� ��������� �ڷ����� �����ϴ� ���� [���� ����ȯ]�̶�� �Ѵ�
	// casting

	int kor = 100, eng = 99, mat = 87;

	// �հ踦 ���� ���� sum�� ����� ���� ���� avg�� �����Ͽ�
	// kor, eng, mat�� �̿��Ͽ� �� ���� ����� �Ŀ�
	// printf�� �̿��Ͽ� ȭ�鿡 ����ϼ���
	// (��, ����� �Ҽ��� ��°�ڸ����� ����ϼ���)

	int sum = kor + eng + mat;
	//double avg = (float)sum / 3;
	double avg = sum / 3.0;

	printf("�հ� : %d, ��� : %.2f\n", sum, avg);

	float f1 = 1.2;
	double d2 = 2.3;

	float answer = f1 + d2;

	printf("f1 + d2 = %.2f\n", answer);
	// ������, float�� double�� ȥ������ ����



}