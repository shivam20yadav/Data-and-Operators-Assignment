#include<conio.h>
#include<stdio.h>

void main()
{
	int a,b,c,d,e;
	float f;
	clrscr();

	printf("Rectangle\n");
	printf("Enter the length and width:- ");
	scanf("%d %d",&a,&b);
	c = a * b;
	printf("Rectangle area l:%d w:%d area:%d",a,b,c);

	printf("\nTriangle");
	printf("\nEnter the values of base height:- ");
	scanf("%d %d",&a,&b);
	c = (a*b)/2;
	printf("Triangle area base:%d height:%d area:%d",a,b,c);

	printf("\nCircle");
	printf("\nEnter the Area:- ");
	scanf("%d",a);
	f = a*3.14;
	printf("Circle area Circle:%d area:%.2f",a,f);

	printf("\nparallelogram");
	printf("\nenter the value of parallelogram:- ");
	scanf("%d %d",&a,&b);
	c = a * b;
	printf("\narea of parallelogram base:%d height%d area:%c",a,b,c);
	getch();
}