//	ex03.c	
#include<stdio.h>
int main()
{
	/*
		배열 (Array) : 같은 자료형의 여러 변수를 묶어서 관리하는 형태
	*/
	int arr[5] = { 1,2,3,4,5 };	// 선언 및 초기화
	int arr2[5];	// 배열 선언

	// 배열 선언시에는 [길이]
	// 선언된 배열에 접근할 때에는 [순번, 첨자, 인덱스]
	printf("arr[0] : %d\n", arr[0]);
	printf("arr[1] : %d\n", arr[1]);
	printf("arr[2] : %d\n", arr[2]);
	printf("arr[3] : %d\n", arr[3]);
	printf("arr[4] : %d\n", arr[4]);

	// 배열의 길이와 같은 인덱스는 존재하지 않는다
	printf("arr[5] : %d\n", arr[5]);
	// [배열길이 - 1]을 인덱스로 지정하면 항상 배열의 마지막 값을 구한다

	// 배열의 각 멤버변수 한번에 출력하기
	printf("arr : ");
	for (int i = 0; i < 5; i++) {	// index 의 i
		printf("%d%s", arr[i], (i != 4) ? ", " : " ");
	}

	// 배열의 각 멤버는 변수 취급한다

	int kor, eng, mat;	
	// 변수 이름이나 다른 요소에서 규칙성을 발견할 수 없으므로
	// 따로따로 관리해서 접근하거나 출력해야한다

	int n1, n2, n3;
	// 변수 이름에 규칙성이 보이지만, 실제로는 전혀 연관성이 없다

	int score[3] = { 100, 99, 87 };
	// 각 점수는 score[i]로 접근이 가능하므로 for문을 이용할 수 있다

	/*
		C언어는 문자열을 위한 자료형이 없으므로
		문자열을 저장하기 위해서 문자형 배열 => char [] 을 사용

		*** 배열의 이름은 그 자체로 주소를 의미한다 ***
	*/

	char name[20] = "ITBANK";
	printf("%c\n", name[1]);

	printf("name : ");
	for (int i = 0; i < 7; i++) {
		printf("%c%s", name[i], (i != 6) ? ", " : " ");
	}
	// '\0' : 문자형태로 표기되지는 않고, 문자열의 마지막을 알리는 문자
	// Null 문자
}
