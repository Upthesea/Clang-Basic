//	ex05.c
#include<stdio.h>
//결과 함수이름(자료형 변수)
// int, char, double, float, void(반환할 결과값이 없다)
void x2(int num){
	printf("%d + %d = %d\n", num, num, num + num);
}
int Sum(int n1, int n2) { // 함수의 정의
	return n1 + n2;
}
// 1
float Multi(float f1, float f2) {
	float result;
	result = f1 * f2;
	return result;
}
// 2
int Max(int n1, int n2, int n3) {
	int max;
	if (n1 >= n2) max = n1;
	if (n2 > n1) max = n2;

	return (max > n3) ? max : n3;
}
int main()
{
	//printf("3 + 4 = %d\n", Sum(3, 4));
	//						// 함수의 호출(Call)
	//printf("1 + 1 = 2\n");
	//printf("2 + 2 = 4\n");
	//int num = 1;
	//for (num = 3; num < 7; num++)
	//	printf("%d + %d = %d\n", num, num, num + num);
	//// 입력값에 따라서 다른 결과값을 반환하는 코드의 집합
	///*
	//	y = f(x)
	//*/
	//x2(3);
	//x2(30);

	// 1. 두개의 float을 전달받아(입력값) 
	// 두 수의 곱을 반환(return)하는 Multi()
	printf("3.14와 2.0의 곱셈은 %.2f이다\n", Multi(3.14, 2.0));

	// 2. 세 개의 정수를 전달받아, 세 수중 가장 큰 정수를 반환하는 Max()
	printf("2, 3, -4 중 가장 큰 수는 %d 이다\n", Max(2, 3, -4));

	// 하나의 정수를 전달받아 그 수를 거꾸로 뒤집어서 반환하는 함수
	// Reverse() 를 작성하세요
}