#include"header.h"
struct node *root;
int main()
{
//printf("%d",sizeof(struct node));//16
	
	int ch;
	
	while(1)
	{
		printf("1.add_last\n");
		printf("2.display\n");
		printf("3.count\n");
		printf("4.add_beg\n");
		printf("5.exit\n");
		printf("enter ur choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:root=add_last();
			   break;
		case 2:display();
			   break;
		case 3:count();
			   break;
		case 4:root=add_beg();
			   break;
		case 5: exit(0);
		default:printf("invalide case");
	}	
	}
	return 0;
}
