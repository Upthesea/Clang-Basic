// ex02.c	for ���
#include<stdio.h>
int main()
{
	int n = 0;		// 1. ���� ���� �� �ʱⰪ ����
	while (n < 5)	// 2. �ݺ��� ������ ����
	{
		printf("while : n = %d\n", n); // 3. ���๮
		n++;		// 4. ������ ������
	}
	printf("\n================\n\n");

	for (int i = 0; i < 5; i++) {
//	      1          2      4
		printf("for : i = %d\n", i);	
			// 3
	}// 1, 2, 3, 4, 2, 3, 4, 2, 3, 4 ....

	printf("\n================\n\n");

	// 1. for���� �̿��Ͽ� Hello world�� 5�� ����ϱ�
	for (int i = 0; i < 5; i++)
		printf("Hello world !!\n");
		
	// 2. 1���� 10�� ���� ���Ͽ� ����ϱ�
	int sum = 0;
	for (int i = 1; i <= 10; i++)
		sum = sum + i;
		// sum += i;
	printf("1~10�� ���� �հ� : %d\n", sum);

	// 3. 1���� �Է¹��� �� ������ ���� ���Ͽ� ����ϱ�
	int input;
	sum = 0;
	printf("1���� n������ ������ ���� ���մϴ�\n�Է� : ");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++)
		sum += i;
	printf("1 ~ %d�� ���� �հ� : %d\n", input, sum);


	// 4. 1���� 100 ������ �� �߿��� Ȧ���� �հ� ¦���� �� ���ϱ�
	int odd_sum = 0, even_sum = 0;

	for (int i = 1; i <= 100; i++) {
		// if (i % 2 == 0)	even_sum += i;
		// else		    odd_sum += i;
		(i % 2 == 0) ? (even_sum += i) : (odd_sum += i);
	}
	printf("Ȧ���� �� : %d\n", odd_sum);
	printf("¦���� �� : %d\n", even_sum);

}