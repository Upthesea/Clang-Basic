//	ex03.c	
#include<stdio.h>
int main()
{
	/*
		�迭 (Array) : ���� �ڷ����� ���� ������ ��� �����ϴ� ����
	*/
	int arr[5] = { 1,2,3,4,5 };	// ���� �� �ʱ�ȭ
	int arr2[5];	// �迭 ����

	// �迭 ����ÿ��� [����]
	// ����� �迭�� ������ ������ [����, ÷��, �ε���]
	printf("arr[0] : %d\n", arr[0]);
	printf("arr[1] : %d\n", arr[1]);
	printf("arr[2] : %d\n", arr[2]);
	printf("arr[3] : %d\n", arr[3]);
	printf("arr[4] : %d\n", arr[4]);

	// �迭�� ���̿� ���� �ε����� �������� �ʴ´�
	printf("arr[5] : %d\n", arr[5]);
	// [�迭���� - 1]�� �ε����� �����ϸ� �׻� �迭�� ������ ���� ���Ѵ�

	// �迭�� �� ������� �ѹ��� ����ϱ�
	printf("arr : ");
	for (int i = 0; i < 5; i++) {	// index �� i
		printf("%d%s", arr[i], (i != 4) ? ", " : " ");
	}

	// �迭�� �� ����� ���� ����Ѵ�

	int kor, eng, mat;	
	// ���� �̸��̳� �ٸ� ��ҿ��� ��Ģ���� �߰��� �� �����Ƿ�
	// ���ε��� �����ؼ� �����ϰų� ����ؾ��Ѵ�

	int n1, n2, n3;
	// ���� �̸��� ��Ģ���� ��������, �����δ� ���� �������� ����

	int score[3] = { 100, 99, 87 };
	// �� ������ score[i]�� ������ �����ϹǷ� for���� �̿��� �� �ִ�

	/*
		C���� ���ڿ��� ���� �ڷ����� �����Ƿ�
		���ڿ��� �����ϱ� ���ؼ� ������ �迭 => char [] �� ���

		*** �迭�� �̸��� �� ��ü�� �ּҸ� �ǹ��Ѵ� ***
	*/

	char name[20] = "ITBANK";
	printf("%c\n", name[1]);

	printf("name : ");
	for (int i = 0; i < 7; i++) {
		printf("%c%s", name[i], (i != 6) ? ", " : " ");
	}
	// '\0' : �������·� ǥ������� �ʰ�, ���ڿ��� �������� �˸��� ����
	// Null ����
}