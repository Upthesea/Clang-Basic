// quiz.c
#include<stdio.h>
int main()
{
	int arr[10] = { 10,17,3,9,27,10,8,9,13,21 };
	printf("arr\t\t: ");
	for (int i = 0; i < 10; i++)
		printf("%d%s", arr[i], (i != 9) ? ", " : "\n\n");
	// 1. arr를 invert_arr 배열에 거꾸로 입력하세요
	int invert_arr[10];
	for (int i = 0, j = 9; i < 10, j >= 0; i++, j--) {
		invert_arr[j] = arr[i];
	}
	printf("invert_arr\t: ");
	for (int i = 0; i < 10; i++)
		printf("%d%s", invert_arr[i], (i != 9) ? ", " : "\n\n");
	
	
	// 2. arr의 짝수번째 값의 합과 홀수번째 값의 합을 구하세요
	int even_sum = 0, odd_sum = 0;
	for (int i = 0; i < 10; i++) {
		(i % 2 == 0) ? (even_sum += arr[i]) : (odd_sum += arr[i]);
	}
	printf("짝수번째의 합 : %d\n", even_sum);
	printf("홀수번째의 합 : %d\n\n", odd_sum);

	// 3. arr를 sort_arr라는 배열에 내림차순으로 정렬하세요

	int sort_arr[10];
	for (int i = 0; i < 10; i++)
		sort_arr[i] = arr[i];

	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (sort_arr[i] < sort_arr[j]) {
				int tmp = sort_arr[i];
				sort_arr[i] = sort_arr[j];
				sort_arr[j] = tmp;
			}
		}
	}
	printf("sort_arr\t: ");
	for (int i = 0; i < 10; i++)
		printf("%d%s", sort_arr[i], (i != 9) ? ", " : "\n\n");
}