#include <stdio.h>

int main()
{
	int n, x, sum;
	printf("더할 수의 갯수를 입력하세요\n");
	scanf("%d", &n);
	
	for(sum = 0;n > 0;n--)
	{
		printf("더할 수를 입력하세요. (남은 갯수 : %d) : ", n);
		scanf("%d", &x);
		sum += x;
	}
	
	printf("총 합은 %d입니다.\n", sum);
	return 0;
}