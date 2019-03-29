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
	// 반환값이 존재하지 않는 함수 Timer를 만들어서
	// 실수 단위로 분을 전달받아서, mm : ss 의 형태로 타이머를 체크하는
	// 함수를 작성하세요

	Timer(1.5);

	/*for (int i = 97; i < 102; i++) {
		printf("%c ", i);
		Sleep(1000);
	}*/
}