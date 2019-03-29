//	ex06.c
// 문자열 복사하기
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str = "practice";
	char *dst = (char *)malloc(sizeof(char) * 20);

	/*char *ps = str, *pd = dst;

	while (*ps != '\0') {
		*pd++ = *ps++;
	}
	*pd = '\0';*/

	for (char *ps = str, *pd = dst; *pd++ = *ps++;/*증감생략*/);
	// '\0' (널 문자)의 아스키 코드 값 : 0
	// 0 은 C언어에서 논리 거짓을 의미하므로
	// for문의 조건절이 0이되면 반복을 중단

	printf("str : %s\ndst : %s\n", str, dst);
	free(dst);
}