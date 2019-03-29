// system.c
#include<stdio.h>
#include<stdlib.h>		// system() 함수를 포함하는 헤더파일
int main()
{
	int menu;
	printf("\n\n\t\t === 시스템 함수 테스트 ===\n\n");
	printf("1. NAVER\n");
	printf("2. Daum\n");
	printf("3. Google\n");
	printf("4. 메모장\n");
	printf("5. 계산기\n");
	printf("입력 : "); scanf("%d", &menu);
	switch (menu) {
	case 1:
		system("start iexplore www.naver.com"); break;
	case 2:
		system("start iexplore www.daum.net"); break;
	case 3:
		system("start iexplore www.google.com"); break;
	case 4:
		system("notepad"); break;
	case 5:// c:안에 있는 모든 폴더와 파일을 출력
		system("dir c: /s /a"); break;
	}
}