#include <stdio.h>

struct student
{
	int number;
	char name[16];
	float grade;
};

int main()
{
	struct student a;
	printf("학번을 입력하세요 : ");
	scanf("%d", &a.number);
	printf("이름을 입력하세요 : ");
	scanf("%s", a.name);
	printf("학점을 입력하세요 : ");
	scanf("%f", &a.grade);
	printf("\n학번 : %d\n이름 : %s\n학점 : %.2f\n", a.number, a.name, a.grade);
	return 0;
}
