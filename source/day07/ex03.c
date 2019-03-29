// ex03.c
// 배열과 포인터
#include<stdio.h>
void Sort(int * parr);
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	// 배열의 이름은 주소를 의미한다
	// 포인터 변수는 주소를 저장한다

	int * parr = arr;

	for (int i = 0; i < 5; i++) {
		printf("arr[i] : %d\t*(parr + i) : %d\n",
			arr[i], *(parr + i));
	}

	char str[10] = "hello";
	printf("str : %s\n", str);

	for (int i = 0; i < 10; i++) {
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
	}
	printf("str : %s\n", str);


	int test[10] = { 13,4,6,2,77,4,5,9 };
	printf("test : ");
	for (int i = 0; i < 10; i++) 
		printf("%d%s", test[i], (i != 9) ? ", " : "\n");
	
	Sort(test);

	printf("test : ");
	for (int i = 0; i < 10; i++)
		printf("%d%s", test[i], (i != 9) ? ", " : "\n");
	// Sort 함수를 이용하여 test배열을 오름차순으로 정렬하도록
	// 함수를 작성하세요
}
void Sort(int * parr) {
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (*(parr + i) > *(parr + j)) {
				int tmp = *(parr + i);
				*(parr + i) = *(parr + j);
				*(parr + j) = tmp;
			}
		}
	}
}