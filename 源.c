#include<stdio.h>
#include<string.h>
int main()
{
	int array[100];
	int i = 0;
	for (i=0; i < 5; i++)
	{
		scanf_s("%d", &array[i]);
	}
	int len = 5;
	int *p = array;
	int *q = &array[len - 1];
	int s = *(p++);
	int b = *(p + 1);
	printf("%d%d", s, b);
	return 0;
}