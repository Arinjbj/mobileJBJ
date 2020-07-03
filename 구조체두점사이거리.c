#include <stdio.h>
#include <math.h>

struct point
{
	double x, y;
};

int main()
{
	struct point a, b;
	printf("1번 좌표(x y)를 입력하세요(ex : 12.4 15.7)\n");
	scanf("%lf %lf", &a.x, &a.y);
	printf("2번 좌표(x y)를 입력하세요\n");
	scanf("%lf %lf", &b.x, &b.y);
	printf("두 점 사이의 거리는 %g입니다.\n", sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2)));
	return 0;
}
