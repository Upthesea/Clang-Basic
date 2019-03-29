// queue_ex.c
// Queue_order.c
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	char * menu;
	struct node * link;
}Q;
Q * getNode() {
	Q * tmp = (Q*)malloc(sizeof(Q));
	tmp->link = 0;
	return tmp;
}
void Enqueue(Q ** fr, Q ** re) {
	char * menu = (char *)malloc(20);	// char menu[20]; 를 Heap에 생성
	printf("주문할 메뉴를 입력 : ");		// 함수가 종료되어도 menu는 소멸하지 않는다
	scanf("%s", menu);
	printf("\n");
	if (*fr == 0) {
		*fr = getNode();
		*re = *fr;
	}
	else {
		(*re)->link = getNode();
		*re = (*re)->link;
	}
	(*re)->menu = menu;
}
char * Dequeue(Q ** fr) {
	if (*fr == 0) {
		return 0;
	}
	char * data = (*fr)->menu;
	Q * tmp = (*fr)->link;
	free(*fr);
	*fr = tmp;
	return data;
}
void PrintQ(Q ** fr) {
	if (*fr != 0) {	// 대기열에 데이터가 존재하면
		printf("%s - ", (*fr)->menu);	// 데이터를 출력한다
		if ((*fr)->link != 0)			// 다음 데이터가 존재하면
			PrintQ(&(*fr)->link);		// 다음 데이터를 가리키는 포인터의 주소를 전달
		else							// 다음 데이터가 없으면 
			printf("REAR\n\n\n\n");		// 마지막을 출력
	}
	else			// 대기열에 데이터가 하나도 없으면
		printf("[ 주문 없음 ] - REAR\n\n\n\n"); // 없음을 출력
}
int main(void) {
	Q * fr = 0, *re = 0;
	int sel = 0;
	char * str = 0;
	while (sel != 3) {
		system("cls");
		printf("\n\n\n\tFRONT - ");
		PrintQ(&fr);
		printf("1. 주문 입력\n");
		if (fr != 0)	printf("2. [%s] 완성 알림\n", fr->menu);
		else		printf("\n");
		printf("3. 영업 종료\n\n입력 > ");	scanf("%d", &sel);

		switch (sel) {
		case 1:Enqueue(&fr, &re); break;
		case 2:
			str = Dequeue(&fr);
			printf("\n\t%s", (str != 0) ? str : "주문이 없습니다\n\n");
			printf("%s", (str != 0) ? " 나왔습니다~\n\n" : ""); break;
		default:
			printf("%s\n", (sel == 3) ? "\n\t식당 영업 종료 !!\n" : "잘못입력 !!\n");
		}
		system("pause");
	}
}