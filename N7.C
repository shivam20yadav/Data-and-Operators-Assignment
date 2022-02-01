#include<stdio.h>
#include<conio.h>
int top=-1;
int topc = -1;
int a[100];
char sign[100];
void push(int val)
{
	top=top+1;
	a[top]=val;
}
int pop()
{
	int val = a[top];
	top=top-1;
	return val;
}
void pushc(char val)
{
	topc=topc+1;
	sign[topc]=val;
}
char popc()
{
	char temp = sign[topc];
	topc=topc-1;
	return temp;
}
int check()
{
	return(topc == -1) ;
}
int prece(char op)
{
	if(op == '+' || op == '-')
		return 1;
	if(op == '*' || op == '/')
		return 2;
	return 0;
}
int opr(int a,int b,char op)
{
	switch(op)
	{
		case '+':
			return a+b;
		case '-':
			return a-b;
		case '*':
			return a*b;
		case '/':
			return a/b;
	}
}
void main()
{
	char *art;
	char temp;
	int i,j,k=0;
	int val1,val2;
	int ans;
	clrscr();
	printf("opration:- ");
	gets(art);
	for(i=0;i<=strlen(art);i++)
	{
		if(art[i] == ' ')
			continue;

		if(isdigit(art[i]))
		{
			k = 0;
			while(isdigit(art[i]))
			{
				k = (k * 10) + (art[i] - '0');
				i++;
			}
			push(k);
		}
		if(art[i] == '+'||art[i] == '-'||art[i] == '*'||art[i] == '/')
		{
			while(!check() && prece(sign[top]) >= prece(art[i]))
			{
				val2 = pop();
				val1 = pop();
				temp = popc();
				push(opr(val1,val2,temp));
			}
			pushc(art[i]);
		}


	}
	while(!check())
	{
		val2 = pop();
		val1 = pop();
		temp = popc();
		push(opr(val1,val2,temp));
	}
	printf("%d",a[top]);
	getch();
}
