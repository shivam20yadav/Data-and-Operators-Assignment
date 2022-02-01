#include<conio.h>
#include<stdio.h>

void main()
{
	float miles,yards,feet,inches,km,m,cm;
	int ch;
	clrscr();

	printf("enter the distance in miles:- ");
	scanf("%f",&miles);
	printf("\n1.convert to yards,feet and inches");
	printf("\n2.convert to kilometers,meters and centimeters");
	printf("\nenter the choice:- ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			yards = miles * 1760;
			printf("%.2f miles = %.2f yards",miles,yards);
			feet = miles * 5280;
			printf("\n%.2f miles = %.2f feet",miles,feet);
			inches = miles * 63360;
			printf("\n%.2f miles = %.2f inches",miles,inches);
			break;
		case 2:
			km = miles * 1.6;
			printf("\n%.2f miles = %.2f kilometers",miles,km);
			m = miles * 1609.344;
			printf("\n%.2f miles = %.2f meters",miles,m);
			cm = miles * 160934.3;
			printf("\n%.2f miles = %2f centimeters",miles,cm);
			break;
		default:
			printf("wrong input!!");
	}
	getch();
}