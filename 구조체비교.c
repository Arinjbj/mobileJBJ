#include <stdio.h>

struct point
{
	double x, y;
};


void comparepoint(struct point p1, struct point p2)
{
	if((p1.x == p2.x) && (p1.y == p2.y))
	{
		printf("두 좌표는 같습니다.\n");
	}
	else
	{
		printf("두 좌표는 다릅니다.\n");
	}
}

int main()
{
	struct point p1, p2;
	printf("좌표1 입력하세요(x y) : ");
	scanf("%lf %lf", &p1.x, &p1.y);
	printf("좌표2 입력하세요(x y) : ");
	scanf("%lf %lf", &p2.x, &p2.y);
	comparepoint(p1, p2);
	return 0;
}
