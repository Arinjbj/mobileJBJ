#include <stdio.h>

int m, h, madd;

void counter()
{
	m += madd;
	h += m / 60;
	m %= 60;
	h %= 24;
}

int main()
{
	printf("hour을 입력하세요 : ");
	scanf("%d", &h);
	printf("\nminute를 입력하세요 :");
	scanf("%d", &m);
	printf("\n몇 분을 더하시겠습니까? : ");
	scanf("%d", &madd);
	counter();
	printf("결과는 %d시 %d분입니다.\n", h, m);
	return 0;
}
