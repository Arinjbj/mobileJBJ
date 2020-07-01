#include <stdio.h>

int main()
{
	int i = 10;
	printf("i = %d\n", i);
	int *ptr;
	ptr = &i;
	*ptr = 20;
	printf("i = %d\n", i);
	return 0;
}