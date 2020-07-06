#include <stdio.h>
#include <stdlib.h>

struct book
{
	int number;
	char name[30];
};

void showbook(struct book *ps, int howmany)
{
	int i;
	for(i = 0;i < howmany;i++)
	{
		printf("%d번 책 : %s", (ps + i)->number, (ps + i)->name);
	}
}

int main()
{
	int howmany, i;
	printf("입력할 책이 몇 권입니까? : ");
	scanf("%d", &howmany);
	getchar();
	
	struct book *ps;
	ps = (struct book *)malloc(howmany * sizeof(struct book));
	if(ps == NULL)
	{
		printf("동적메모리 할당에 실패했습니다.\n");
		exit(1);
	}
	
	for(i = 0;i < howmany;i++)
	{
		(ps + i) -> number = i + 1;
		printf("%d번 책의 이름 입력 : ", i + 1);
		fgets((ps + i) -> name, 30, stdin);
	}
	showbook(ps, howmany);
	free(ps);
	return 0;
}
