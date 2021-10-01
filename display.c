#include"header.h"
struct node *root;
void display()
{
 	struct node *temp;
 
 	temp=root;
 	if(temp==NULL)
 	{
 	printf("no node in the list\n");
 	return;
 	}
 
 	while(temp!=NULL)
 	{
 	printf("data=%d\t",temp->data);
 	temp=temp->link;
 	}
}
