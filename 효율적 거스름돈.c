#include <stdio.h>

int oman, man, ochun, chun;
int oback, back, oship, ship, o, il;
int money;

//거스름돈을 줄 때, 화폐 단위당 몇 개인지 세어주는 함수
void change()
{
	int sum;
	oman = money / 50000;
	sum += oman * 50000;
	man = (money - sum) / 10000;
	sum += man * 10000;
	ochun = (money - sum) / 5000;
	sum += ochun * 5000;
	chun = (money - sum) / 1000;
	sum += chun * 1000;
	oback = (money - sum) / 500;
	sum += oback * 500;
	back = (money - sum) / 100;
	sum += back * 100;
	oship = (money - sum) / 50;
	sum += oship * 50;
	ship = (money - sum) / 10;
	sum += ship * 10;
	o = (money - sum) / 5;
	sum += o * 5;
	il = (money - sum) / 1;
}

int main()
{
	printf("거스름돈을 입력하세요 : ");
	scanf("%d", &money);
	change();
	if(oman != 0)
	{
		printf("오만원권 : %d장\n", oman);
	}
	if(man != 0)
	{
		printf("만원권 : %d장\n", man);
	}
	if(ochun != 0)
	{
		printf("오천원권 : %d장\n", ochun);
	}
	if(chun != 0)
	{
		printf("천원권 : %d장\n", chun);
	}
	if(oback != 0)
	{
		printf("오백원 : %d개\n", oback);
	}
	if(back != 0)
	{
		printf("백원 : %d개\n", back);
	}
	if(oship != 0)
	{
		printf("오십원 : %d개\n", oship);
	}
	if(ship != 0)
	{
		printf("십원 : %d개\n", ship);
	}
	if(o != 0)
	{
		printf("오원 : %d개\n", o);
	}
	if(il != 0)
	{
		printf("일원 : %d개\n", il);
	}
	return 0;
}
