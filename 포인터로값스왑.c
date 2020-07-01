#include <stdio.h>

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("Swap!\n");
	swap(&x, &y);
	printf("%d %d",x, y);
	return 0;
}