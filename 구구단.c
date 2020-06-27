#include <stdio.h>

int main ()
{
	int dan, n;
	printf("몇 단을 보고싶으신가요? : ");
	scanf("%d", &dan);
	printf("\n%d단입니다.\n", dan);
	
	for(n = 1;n <= 9;n++)
	{
		printf("%d * %d = %d\n", dan, n, dan * n);
	}
	return 0;
}
