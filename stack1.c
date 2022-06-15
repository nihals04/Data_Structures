#include <stdio.h>
#include <stdlib.h>


struct node 
{
	int data ;
	struct node *next ;
};
struct node *head=NULL,*pos=NULL,*temp=NULL,*del=NULL,*new;


void push (int x)
{	
		if (head==NULL)
		{
			head=(struct node *)malloc(sizeof(struct node));
			head->data=x;
		}
		else
		{
			new=(struct node *)malloc(sizeof(struct node));
			new->data=x;
			new->next=head;
			head=new;
		}
}

void pop()
{
	if (head==NULL)
	{
		printf("Underflow !");
		printf("\n");
	}
	else
	{
		del=head;
		head=head->next;
		free(del);
		pos=head;
		if(head==NULL)
		{
			printf("No elements");
			printf("\n");
		}
		else
		{
			printf("The elements after deletion are:\n");
			while(pos !=NULL)
			{
				printf("%d\n",pos->data);
				pos=pos->next;
			}
			printf("\n");
		}
	}
	
}

void display()
{
	if(head==NULL)
	{
		printf("No elements");
		printf("\n");
	}
	else
	{

		pos=head;
		printf("\nElements are :\n");
		while (pos!=NULL)
		{
			printf("%d\n",pos -> data);
			pos=pos->next;
		}
		printf("\n");
	}
}

void main()
{
	int ch,entry;
	printf("\n1.PUSH\n2.POP\n3.DISPLAY");
	while(1)
	{
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				{
					printf("Enter data:");
				      	scanf("%d",&entry);
				      	push(entry);
				} 
				break;  			
			case 2: 
				{
					pop();
				}
				break;
			case 3:
				{
					display();
				}
				break;
			}
	}
}
	

		
		
		
	

