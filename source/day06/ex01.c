// ex01.c	
// Reverse 함수 만들기
#include<stdio.h>
int Reverse(int num); // 함수의 선언 : 함수의 형태만 작성
int main()
{
	printf("1234를 거꾸로 하면 %d\n", Reverse(1234));
									// 함수의 호출
	
}
int Reverse(int num) {	// 함수의 정의 : 세부 내용 작성
	int ret = 0;
	while (1) {
		ret += num % 10;
		ret *= 10;
		num /= 10;
		if (num < 10)
			break;
	}
	ret += num;
	return ret;	// 함수의 반환값은 함수 호출 자리로 돌아간다
}
