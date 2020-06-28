#include <stdio.h>

//1월 1일부터 month월 day일까지의 일 수를 세어줍니다.
int dayfromnewyear(int month, int day)
{
	int count = 0, i;
	
	for(i = 1;i < month;i++)
	{
		if(i == 2)
		{
			count += 28;
		}
		else if((i % 2 == 1 && i < 8) || (i >= 8 && i % 2 == 0))
		{
			count += 31;
		}
		else
		{
			count += 30;
		}
		
	}
	count += day;
	return count;
}


//잘못된 month 입력을 검사합니다.
int monthcheck(int month)
{
	int mtf = 1;
	if(month < 1 || month > 12)
	{
		printf("잘못된 입력입니다.");
		mtf = 0;
	}
	return mtf;
}


//잘못된 day 입력을 검사합니다.
int daycheck(int month, int day)
{
	int dtf = 1;
	if(day < 1 || (month == 2 && day > 28) || (((month % 2 == 1 && month < 8) || (month % 2 == 0 && month >= 8)) && (day > 31)) || (((month % 2 == 0 && month >= 8) || (month % 2 == 0 && month < 8)) && (day > 30)))
	{
		printf("잘못된 입력입니다.");
		dtf = 0;
	}
	return dtf;
}

	
int main()
{
	int month, day, count;
	printf("윤년이 아닌 해의 1월 1일부터 특정한 날까지의 일 수를 셉니다.\n월을 입력하세요 : ");
	scanf("%d", &month);
	if(monthcheck(month) == 0)
	{
		return 0;
	}
	printf("일을 입력하세요 : ");
	scanf("%d", &day);
	if(daycheck(month, day) == 0)
	{
		return 0;
	}
	printf("1월 1일부터 %d월 %d일까지의 일 수는 %d일입니다.", month, day, dayfromnewyear(month, day));
	return 0;
}
