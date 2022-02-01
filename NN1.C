#include<conio.h>
#include<stdio.h>

void main()
{
	int hour,rate,week,month,nonam;
	long int year;
	clrscr();
	printf("enter the daily work hour and rate:- ");
	scanf("%d %d",&hour,&rate);
	nonam = hour * rate;
	week = nonam * 7;
	month = week * 4;
	year = (long int)month * 12;
	printf("hour:- %d rate:-%d",hour,rate);
	printf("\nweekly earn:- %d",week);
	printf("\nmonthly earn:- %d",month);
	printf("\nyearly earn:-; %ld",year);
	getch();
}