#include"header.h"
struct node * add_last()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter data value:");
	scanf("%d",&temp->data);
	temp->link=NULL;

	if(root==NULL)
	{
	root=temp;
	}
	else
	{
	struct node *p=root;
	while(p->link!=NULL)
	{
	p=p->link;
	}
	p->link=temp;
	}
}
