#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *pi;
	int i;
	pi = (int *)malloc(sizeof(int) * 5);
	printf("정수를 입력하세요\n");
	for(i = 0;i < 5;i++)
	{
		printf("입력 : ");
		scanf("%d", pi + i);
	}
	for(i = 0;i < 5;i++)
	{
		printf("%d ", *(pi + i));
	}
	free(pi);
	for(i = 0;i < 5;i++)
	{
		printf("%d ", *(pi + i));
	}
	return 0;
}
