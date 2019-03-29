#include<stdio.h>
int main()
{
	/*
	int n1 = 10, n2 = 20;
	int tmp;
	printf("n1 : %d, n2 : %d\n", n1, n2);
	tmp = n1;
	n1 = n2;
	n2 = tmp;
	printf("n1 : %d, n2 : %d\n", n1, n2);
	*/

	int arr[5] = { 2,7,4,8,6 };
	// 오름차순으로 정렬 : 작은 값부터 큰 값
	printf("arr : ");
	for (int i = 0; i < 5; i++)
		printf("%d%s", arr[i], (i != 4) ? ", " : "\n");
	int tmp;
	for (int i = 0; i < 5; i++) {// 비교 원본
		for (int j = i; j < 5; j++) {// 비교 대상
			if (arr[i] > arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	printf("arr : ");
	for (int i = 0; i < 5; i++)
		printf("%d%s", arr[i], (i != 4) ? ", " : "\n\n");


	char str[6] = { 'I','T','B','A','N','K' };
	//str 배열의 내용을 내림차순으로 정렬하세요
	printf("str : ");
	for (int i = 0; i < 6; i++)
		printf("%c%s", str[i], (i != 5) ? ", " : "\n");
	char tmp2;
	for (int i = 0; i < 6; i++) {
		for (int j = i; j < 6; j++) {
			if (str[i] < str[j]) {
				tmp2 = str[i];
				str[i] = str[j];
				str[j] = tmp2;
			}
		}
	}
	printf("str : ");
	for (int i = 0; i < 6; i++)
		printf("%c%s", str[i], (i != 5) ? ", " : "\n\n");


	int score[5] = { 82,85,76,79,96 };
	int rank[5];

	for (int i = 0; i < 5; i++) {
		rank[i] = 1;
		for (int j = 0; j < 5; j++) {
			if (score[i] < score[j])
				rank[i]++;
		}
	}
	printf("점수 : ");
	for (int i = 0; i < 5; i++)
		printf("%2d%s", score[i], (i != 4) ? ", " : "\n");
	printf("등수 : ");
	for (int i = 0; i < 5; i++)
		printf("%2d%s", rank[i], (i != 4) ? ", " : "\n");

}