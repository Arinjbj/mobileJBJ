#include <stdio.h>
#define size 5

struct student
{
	int num;
	char name[20];
	double grade;
};

int main()
{
	struct student class[size];
	int i;
	for(i = 0;i < size;i++)
	{
		printf("%d번 학생의 학번 : ", i + 1);
		scanf("%d", &class[i].num);
		printf("%d번 학생의 이름 : ", i + 1);
		scanf("%s", class[i].name);
		printf("%d번 학생의 학점 : ", i + 1);
		scanf("%lf", &class[i].grade);
		printf("\n");
	}
	
	for(i = 0;i < size;i++)
	{
		printf("\n%d번 학생 정보\n학번 : %d\n이름 : %s\n학점 : %.2f\n", i + 1, class[i].num, class[i].name, class[i].grade);
	}
	return 0;
}