#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define n 100
int top;

char inf[n],post[n];

void push (char x)
{
	top++;
	post[top]=x;
}

char pop()
{
	if(top== -1)
	{
		return 1;
	}
	else
	{
		return post[top--];
	}
}

int priority(char x)
{
	if (x == '(')
	{
		return 0;
	}
	if(x== '+' ||  x== '-')
	{
		return 1;
	}
	if (x== '*' || x== '/')
	{
		return 2;
	}
	return 0;
}


int main()
{
	char *e,x;
	printf("Enter infix form:");
	scanf("%s",inf);
	printf("\n");
	e=inf;
	while (*e!= '\0')
	{
		if (isalnum(*e))
		{
			printf("%c",*e);
		}
		else
		{
			while (priority(post[top]) >= priority (*e))
			{
				printf("%c",pop());
			}
			push(*e);
		}
		e++;
	}
	while(top != -1)
	{
		printf("%c",pop());
	}
	printf("\n");
	return 0;
}


