// ex03.c
#include<stdio.h>
int main()
{
	// 자료형 : 데이터의 형태를 지정. 
	// 대입 혹은 연산 시에 자료형이 일치해야 한다

	char ch = 'A';
	int num;

	//printf("ch : %d, num : %d\n", ch, num);

	// 변수는 값을 초기화하거나 새로운 값을 할당하지 않으면
	// 쓰레기값이 들어가있다. (변수를 정상적으로 사용할 수 없다)

	/*
		182937589172389465891234791827358971238947 <- 메모리 일부
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

	// 정수와 정수를 연산하면 정수가 계산되므로
	// 연산 사이의 결과값을 실수로 형태를 바꾸어 주면 소수점까지 출력
	// 값의 자료형을 바꾸어주기 위해서 (자료형)값 의 형태로 작성한다
	
	// 코드에서 명시적으로 자료형을 변경하는 일을 [강제 형변환]이라고 한다
	// casting

	int kor = 100, eng = 99, mat = 87;

	// 합계를 담을 변수 sum과 평균을 담을 변수 avg를 생성하여
	// kor, eng, mat를 이용하여 각 값을 계산한 후에
	// printf를 이용하여 화면에 출력하세요
	// (단, 평균은 소수점 둘째자리까지 출력하세요)

	int sum = kor + eng + mat;
	//double avg = (float)sum / 3;
	double avg = sum / 3.0;

	printf("합계 : %d, 평균 : %.2f\n", sum, avg);

	float f1 = 1.2;
	double d2 = 2.3;

	float answer = f1 + d2;

	printf("f1 + d2 = %.2f\n", answer);
	// 가급적, float과 double을 혼용하지 말자



}