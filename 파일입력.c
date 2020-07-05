#include <stdio.h>

int main()
{
	FILE *fp = NULL;
	fp = fopen("testfile.txt", "r");
	if(fp == NULL)
	{
		printf("no file\n");
		return 0;
	}
	printf("file opened\n");
	char s[20];
	while(1)
	{
		if(
		fgets(s, 20, fp) == NULL)
		{
			break;
		}
		printf("%s", s);
	}
	fclose(fp);
	
	return 0;
}
