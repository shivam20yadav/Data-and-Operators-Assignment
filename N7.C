#include<stdio.h>
#include<conio.h>
void main()
{
	char *art;
	char *A,*B;
	char sign = '\0';
	int i,j,k;
	int a,b,sum;
	int temp = 0;
	clrscr();
	printf("opration:- ");
	gets(art);
	for(i=0;art[i] != '\0';i++)
	{
		if(art[i] == '+'|| '-' || '*' || '/')
		{
			for(j=0;j<i;j++)
			{

				A[j] = art[j];
			}
			a = atoi(A);
			for(k=i+1;art[k] != '\0';k++,temp++)
			{
				B[temp] = art[k];
			}
			b = atoi(B);
		}
	}
	for(i=0;art[i] != '\0';i++)
	{
		if(art[i] == '+')
		{
			sign = art[i];
			break;
		}
		if(art[i] == '-')
		{
			sign = art[i];
			break;
		}
		if(art[i] == '*')
		{
			sign = art[i];
			break;
		}
		if(art[i] == '/')
		{
			sign = art[i];
			break;
		}
	}
	if(sign == '+')
	{
		sum = a+b;
		printf("%d + %d = %d",a,b,sum);
	}
	if(sign == '-')
	{
		sum = a-b;
		printf("%d - %d = %d",a,b,sum);
	}
	if(sign == '*')
	{
		sum = a*b;
		printf("%d * %d = %d",a,b,sum);
	}
	if(sign == '/')
	{
		sum = a/b;
		printf("%d / %d = %d",a,b,sum);
	}
	getch();
}