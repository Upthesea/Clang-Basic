// system.c
#include<stdio.h>
#include<stdlib.h>		// system() �Լ��� �����ϴ� �������
int main()
{
	int menu;
	printf("\n\n\t\t === �ý��� �Լ� �׽�Ʈ ===\n\n");
	printf("1. NAVER\n");
	printf("2. Daum\n");
	printf("3. Google\n");
	printf("4. �޸���\n");
	printf("5. ����\n");
	printf("�Է� : "); scanf("%d", &menu);
	switch (menu) {
	case 1:
		system("start iexplore www.naver.com"); break;
	case 2:
		system("start iexplore www.daum.net"); break;
	case 3:
		system("start iexplore www.google.com"); break;
	case 4:
		system("notepad"); break;
	case 5:// c:�ȿ� �ִ� ��� ������ ������ ���
		system("dir c: /s /a"); break;
	}
}