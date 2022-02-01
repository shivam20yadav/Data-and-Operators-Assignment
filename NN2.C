#include<conio.h>
#include<stdio.h>

void main()
{
	int year;
	long int month,day,hour,second;
	clrscr();
	printf("how old are you?? in year:- ");
	scanf("%d",&year);
	month = (long) year * 12;
	day = month * 30;
	hour = day * 24;
	second = hour * 60;
	printf("year::%d\nmonth::%ld\nhour::%ld\nsecond::%ld",year,month,day,second);
	getch();
}