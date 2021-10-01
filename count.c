#include"header.h"
struct node *root;
void count()
{
	struct node *p;
	int cnt=0;
	p=root;
	while(p!=NULL)
	{
	p=p->link;
	cnt++;
	}
	printf("no of elements are %d\n",cnt);
}
