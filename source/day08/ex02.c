//	ex02.c
//	구조체 배열
#include<stdio.h>
#include<stdlib.h>
typedef struct Student {
	char name[20];
	int kor, eng, mat, sum;
	double avg;
}STD;
STD InputSTD() {
	STD a;
	printf("이름을 입력하세요 : ");		scanf("%s", &a.name);
	printf("국어점수를 입력하세요 : ");	scanf("%d", &a.kor);
	printf("영어점수를 입력하세요 : ");	scanf("%d", &a.eng);
	printf("수학점수를 입력하세요 : ");	scanf("%d", &a.mat);
	a.sum = a.kor + a.eng + a.mat;
	a.avg = a.sum / 3.0;
	return a;
}
void PrintSTD(STD a) {
	printf("이름 : %s\n", a.name); // . 연산자는 내부의 값을 접근
	printf("세 과목 : %d, %d, %d\n", a.kor, a.eng, a.mat);
	printf("합계 : %d, 평균 : %.2f\n\n", a.sum, a.avg);
}
int main()
{
	// 배열 : 같은 자료형을 묶어서 관리
	// 구조체 : 사용자 정의 자료형

	
	STD test;	// 구조체 단일 변수

	// test.name = "name";
	// strcpy("name", test.name);
	// printf("이름을 입력하세요 : ");	scanf("%s", &test.name);
	// printf("이름 : %s\n", test.name);
	//test = InputSTD();	// 입력받은 데이터를 test에 대입(복사)해라
	//PrintSTD(test);		// test가 가지고 있는 data를 출력해라
	
	/*
		1. 학생 개별 입력
		2. 전체 출력
		3. 이름 검색 학생 성적 출력
		4. 최고점자 검색 및 출력
		5. 종료
	*/
	STD arr[5];	// STD를 담을 수 있는 배열
	STD max;
	char find[20];
	for (int i = 0; i < 5; i++) {
		arr[i].sum = 0;		// 합계가 0인 항목은 입력을 받지 않음으로 간주
	}
	int menu;
	while (1) {
		system("cls");
		printf("1. 학생 개별 입력\n2. 전체 출력\n3. 이름 검색 학생 성적 출력");
		printf("\n4. 최고점자 검색 및 출력\n5. 종료\n선택 : ");
		scanf("%d", &menu);

		switch (menu) {
		case 1:	// 입력
			for (int i = 0; i < 5; i++) {
				if (arr[i].sum == 0) {
					arr[i] = InputSTD();
					break;	// for문 반복을 중단하는 break;
				}
			}
			break;
		case 2:	// 전체 출력
			for (int i = 0; i < 5; i++) {
				if (arr[i].sum != 0)
					PrintSTD(arr[i]);
			}
			system("pause");
			break;
		case 3:	// 검색
			printf("검색할 이름을 입력 : ");	scanf("%s", find);
			for (int i = 0; i < 5; i++) {
				if (strcmp(find, arr[i].name) == 0) {
					PrintSTD(arr[i]);
					break;
				}
			}
			system("pause");
			break;
		case 4:	// 최고점자
			max.sum = 0;
			for (int i = 0; i < 5; i++) {
				if (max.sum < arr[i].sum) {
					max = arr[i];
				}
			}
			printf("\n=== 최고 득점자 ===\n\n");
			PrintSTD(max);
			system("pause");
			break;
		case 5:	// 종료
			printf("프로그램을 종료합니다\n\n");
			return 0;
		default:printf("입력을 잘못하셨네요~\n");
		}
	}
	/*for (int i = 0; i < 3; i++) 
		arr[i] = InputSTD();

	for (int i = 0; i < 3; i++)
		PrintSTD(arr[i]);*/
		

}