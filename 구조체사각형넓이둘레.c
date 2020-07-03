#include <stdio.h>
#include <math.h>

struct point
{
	double x;
	double y;
};

struct quad
{
	struct point ul;
	struct point dr;
};

int main()
{
	struct quad a;
	double  mawari, hirosa;
	printf("사각형의 좌상단 좌표(x y)를 입력하세요 : ");
	scanf("%lf %lf", &a.ul.x, &a.ul.y);
	printf("사각형의 우하단 좌표(x y)를 입력하세요 : ");
	scanf("%lf %lf", &a.dr.x, &a.dr.y);
	hirosa = abs(a.dr.x - a.ul.x) * abs(a.dr.y - a.ul.y);
	mawari = (abs(a.dr.x - a.ul.x) * 2) + (abs(a.dr.y - a.ul.y) * 2);
	printf("사각형의 넓이는 %g, 둘레는 %g입니다.\n", hirosa, mawari);
	return 0;
}
