#include <stdio.h>

int main()
{
	FILE *fp = NULL;
	fp = fopen("testfile.txt", "w");
	if(fp == NULL)
	{
		printf("no file, create newfile...\n");
	}
	
	int line, i;
	char str[20];
	printf("몇 줄을 입력하시겠습니까? : ");
	scanf("%d", &line);
	for(i = 0;i < line;i++)
	{
		printf("%d줄 : ", i + 1);
		scanf("%[^\n]s", str);
		fputs(str, fp);
		fputc('\n', fp);
	}
	printf("입력을 완료했습니다.\n");
	fclose(fp);
	return 0;
}
