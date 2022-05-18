#include<stdio.h>		
#include<stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL, *pos=NULL,*tail=NULL;
	int ch, entry, count,e,i;
	while(1)
	{
		printf("\n1.INSERT\n2.DISPLAY\n3.COUNT\n4.SEARCH\n5.EXIT");	
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
		{
			printf("\nEnter data: ");
			scanf("%d",&entry);
			if(head==NULL)
			{
				head=(struct node*)malloc(sizeof(struct node));
				head->data=entry;
				pos=head;
				tail=head;
			}
			else
			{
				tail->next=(struct node*)malloc(sizeof(struct node));
				tail=tail->next;
				tail->data=entry;
			} break;
		}
		case 2:
		{
			pos=head;
			printf("\nElements are: ");
			while (pos!=NULL)
			{
				printf("\t %d",pos->data);
				pos=pos->next;
			} break;
		}
		case 3:
		{
			pos=head;
			while (pos!=NULL)
			{
				count=count+1;
				pos=pos->next;
			} 
			printf("\nNumber of elements: %d",count);
			break;
		}
		case 4:
		{
			pos=head;
			i=0;
			printf("\nEnter element: ");
			scanf("%d",&e);
			while (pos!=NULL)
			{	
				
				
				if(pos->data==e)
				{
					i++;
					pos=pos->next;
				}	
				else
				{	
					pos=pos->next;
				}
				}		
			
			if (i==1)
			{
				printf("\nElement present");
			}				
			else
			{
				printf("\nElement absent");
			}
			}
			 break;	 
		case 5:
		{
			printf("\n !!!Good BYE!!!");
			exit(0);
		}						
	}
}
}
					
