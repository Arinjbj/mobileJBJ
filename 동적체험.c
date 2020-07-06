#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *pi;
	pi = (int *)malloc(sizeof(int));
	if(pi == NULL)
	{
		printf("동적메모리 할당 실패\n");
		exit(1);
	}
	printf("정수를 입력하세요 : ");
	scanf("%d", pi);
	printf("\n동적메모리에 %d를 입력하였습니다.\n", *pi);
	free(pi);
	return 0;
}