// ex04.c
// 동적 할당
#include<stdio.h>
int main()
{
	printf("몇 명의 점수를 입력할까요 : ");
	int n;
	scanf("%d", &n);

	int * p = (void *)malloc(4 * n);

	for (int i = 0; i < n; i++) {
		printf("%d번째 점수 입력 : ", i + 1);
		scanf("%d", p + i);
	}

	printf("입력받은 점수 : ");
	for (int i = 0; i < n; i++)
		//printf("%d%s", *(p + i), (i != n - 1) ? ", " : "\n");
		printf("%d%s", p[i], (i != n - 1) ? ", " : "\n");

	// arr[i]  =>  주소[인덱스]  => *(주소 + 인덱스)

	int test[5] = { 10,20,30,40,50 };
	printf("test[3] : %d\n", test[3]);
	printf("3[test] : %d\n", 3[test]);

	char name[20] = "아이유";
	char * name2 = "아이유";

	printf("%s, %s\n", name, name2);

	//name = "아이린";
	name2 = "아이린";
	printf("%s, %s\n", name, name2);
}