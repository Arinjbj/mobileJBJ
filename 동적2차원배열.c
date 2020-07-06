#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, x, y;
	int **pptr = (int **)malloc(7 * sizeof(int*));
	for(i = 0;i < 7;i++)
	{
		*(pptr + i) = (int *)malloc(5 * sizeof(int));
	}
	
	for(y = 0;y < 7;y++)
	{
		for(x = 0;x < 5;x++)
		{
			*(*(pptr + y) + x) = 5 * y + x;
		}
	}
	
	for(y = 0;y < 7;y++)
	{
		for(x = 0;x < 5;x++)
		{
			printf("%3d", *(*(pptr + y) + x));
		}
		printf("\n");
	}
	
	for(y = 0;y < 7;y++)
	{
		free(*(pptr + y));
	}
	free(pptr);
	return 0;
}