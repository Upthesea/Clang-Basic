//	ex06.c
// ���ڿ� �����ϱ�
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

	for (char *ps = str, *pd = dst; *pd++ = *ps++;/*��������*/);
	// '\0' (�� ����)�� �ƽ�Ű �ڵ� �� : 0
	// 0 �� C���� �� ������ �ǹ��ϹǷ�
	// for���� �������� 0�̵Ǹ� �ݺ��� �ߴ�

	printf("str : %s\ndst : %s\n", str, dst);
	free(dst);
}