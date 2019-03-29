//	ex04.c
//	자기 참조 구조체 : 
//  자신과 같은 type을 참조하는 포인터를 멤버로 가지는 구조체
#include<stdio.h>
#include<stdlib.h>
typedef struct Order {
	char name[10];
	struct Order * next;
}OD;
OD * new(){
	OD * tmp = (OD *)
}
int main()
{
	//OD o1 = { "라면", 0 };
	//OD o2 = { "김밥", 0 };
	//OD o3 = { "국밥", 0 };

	//o1.next = &o2;
	//printf("지금 나갈 메뉴는 %s입니다\n", o1.name);
	//printf("다음 나갈 메뉴는 %s입니다\n", o1.next->name);
	//// o3의 이름을 출력할때, o1을 통해서만 출력할 수 있도록
	//// 포인터변수의 값을 설정하세요

	//o1.next->next = &o3;
	//printf("지금 나갈 메뉴는 %s이고\n,", o1.name);
	//printf("다음 나갈 메뉴는 %s이고\n,", o1.next->name);
	//printf("그 다음 나갈 메뉴는 %s이다.\n", o1.next->next->name);

	OD * food = 0;
	//주문이 들어옴
	food = (OD *)malloc(sizeof(OD));
	printf("메뉴 입력 : ");
	scanf("%s", food->name);



}