#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int a = 20;
	int b = 10;
	int max = 0;
	if (a > b)
		max = a;
	else
		max =  b;
	max = (a > b ? a : b);
	printf("max=%d\n", max);
	return 0;
}