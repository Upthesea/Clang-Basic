// ex03.c
// 구조체와 포인터, 동적할당
#include<stdio.h>
#include<stdlib.h>
typedef struct PhoneBook {
	char name[20];
	int num1;
	int num2;
	int num3;
}PB;
PB InputPB() {
	PB a;
	printf("이름 : ");			scanf("%s", &a.name);
	printf("전화번호 입력 (000 0000 0000) : ");	
	scanf("%d %d %d", &a.num1, &a.num2, &a.num3);
	return a;
}
PB ShowPB(PB a) {
	printf("[ %s ] : %03d - %04d - %04d\n", a.name, a.num1, a.num2, a.num3);
}
int main()
{
	PB * book = 0;
	book = (PB *)malloc(sizeof(PB) * 5);	// PB book[5];
	
	*(book + 0) = InputPB();
	ShowPB(*(book + 0));

	PB arr[5] = {
		{"아이유", 010, 1111, 1111},
		{"태연", 010, 2222, 2222},
		{"수지", 010, 3333, 3333},
	};
	strcpy((book + 0)->name, "강동원");


	printf("%s\n", arr[0].name);
	printf("%s\n", (book + 0)->name);

	// 구조체 변수를 기준으로 값을 참조할때에는 . 연산자를 사용
	// 구조체 포인터를 기준으로 값을 참조할때에는 -> 연산자를 사용

	PB v1 = { "김희철", 010, 4444, 4444 };
	PB * p1 = (PB *)malloc(sizeof(PB));
	//p1->name = "민경훈";
	strcpy(p1->name, "민경훈");
	p1->num1 = 010;
	p1->num2 = 5555;
	p1->num3 = 5555;

	printf("v1의 이름 : %s\n", v1.name);
	printf("p1의 이름 : %s\n", p1->name);

}