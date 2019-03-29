// ex01.c
// 구조체 (struct)
#include<stdio.h>
/*
struct Student {	// 변수가 아니다 !! -> 자료형
	char name[20];
	int kor, eng, mat, sum;
	double avg;
};
*/
typedef struct Student {	
	char name[20];
	int kor, eng, mat, sum;
	double avg;
}STD;
void PrintSTD(STD a);	// 함수의 선언, 형식만 지정하고 정의는 아래에서
int main()
{
	/*
		Data를 저장하기 위한 단위

		변수 : 자료형에 맞는 자료를 하나 저장하기 위해 메모리에 할당받는 공간
		배열 : 같은 자료형의 자료를 보다 효율적으로 관리하는 형태
		구조체 : 서로 다른 자료형을 모아서 관리할 수 있도록 만든
				 '사용자 정의 자료형'

		학생 이라는 구조체에 이름과 나이와 점수 평균을 모두 가지도록 설정
		전화번호부 목록에 이름(문자열)과 번호(정수)를 저장
	*/
	int num = 10;
	int score[3] = { 100,99,87 };

	struct Student kim = { "김범수", 100, 99, 87, 286, 95.33 };
//	[   자료형   ] [변수] = { 내부 자료형 순서대로 값을 입력};	

	printf("이름 : %s\n", kim.name); // . 연산자는 내부의 값을 접근
	printf("세 과목 : %d, %d, %d\n", kim.kor, kim.eng, kim.mat);
	printf("합계 : %d, 평균 : %.2f\n\n", kim.sum, kim.avg);

	STD yoon = { "윤종신", 99,88,77,0,0.0 };
	yoon.sum = yoon.kor + yoon.eng + yoon.mat;
	yoon.avg = yoon.sum / 3.0;

	printf("이름 : %s\n", yoon.name); // . 연산자는 내부의 값을 접근
	printf("세 과목 : %d, %d, %d\n", yoon.kor, yoon.eng, yoon.mat);
	printf("합계 : %d, 평균 : %.2f\n\n", yoon.sum, yoon.avg);

	// 임의의 값을 이용하여 본인을 표현하는 구조체 변수를 생성하고
	// PrintSTD() 함수를 이용하여 출력하세요

	STD won;
	strcpy(won.name, "원종래");	// 문자열 복사 함수
	won.kor = 100;	won.eng = 98;	won.mat = 89;
	won.sum = won.kor + won.eng + won.mat;
	won.avg = won.sum / 3.0;
	
	PrintSTD(won);


}
void PrintSTD(STD a) {
	printf("이름 : %s\n", a.name); // . 연산자는 내부의 값을 접근
	printf("세 과목 : %d, %d, %d\n", a.kor, a.eng, a.mat);
	printf("합계 : %d, 평균 : %.2f\n\n", a.sum, a.avg);
}