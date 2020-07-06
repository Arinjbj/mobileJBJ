#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *pc;
	int i;
	pc = (char *)malloc(sizeof(char) * 100);
	if(pc == NULL)
	{
		printf("동적메모리 할당 실패\n");
		exit(1);
	}
	for(i = 0;i < 26;i++)
	{
		*(pc + i) = 'a' + i;
	}
	*(pc + i) = NULL;
	printf("%s\n", pc);
	free(pc);
	return 0;
}
