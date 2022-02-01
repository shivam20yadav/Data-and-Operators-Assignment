#include<conio.h>
#include<stdio.h>

void main()
{
	float area,width,length,conv;
	clrscr();
	printf("enter the length and width:- ");
	scanf("%f %f",&length,&width);

	area = width * length;
	conv = area / 9;

	printf("room width:-%.2f and length:-%.2f and",width,length);
	printf(" 	area of room is:- %.2f square yards",conv);
	getch();
}