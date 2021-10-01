#include"header.h"
struct node *root;
struct node * add_beg()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter data value");
	scanf("%d",&temp->data);
	temp->link=NULL;

	if(root==NULL)
	{
	root=temp;
	}
	else
	{
	struct node *p=root;
	temp->link=root;
	root=temp;
	}
}
