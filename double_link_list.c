#include<stdio.h>
#include<stdlib.h>


struct node{
           int data;
           struct node *next;
           struct node *prev;
};

 struct node *insert_beg(struct node *head, int val)
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    if(head!=NULL)
    {
          ptr->next=head;
          ptr->prev=NULL;
          head=ptr;
     }
     else
      {
          ptr->next=NULL;
          ptr->prev=NULL;
          head=ptr;
       }
    return head;
}
struct node *insert_end(struct node *head,int val)
{
    struct node *ptr;
    struct node *temp;
    if(head==NULL)	
    {
	head=insert_beg(head,val);
                  return head;	
   }	
   else
   {
	temp=head;
                 while(temp->next!=NULL)
                              temp=temp->next;
	if(temp->next==NULL)
	{
	         ptr=(struct node*)malloc(sizeof(struct node));
	         ptr->data=val;
	         ptr->next=NULL;
	         temp->next=ptr;
                           ptr->prev =temp;
	}
    }
    return head;    
     }
void display(struct node *head)
{	
    struct node *ptr=head;	
    if(ptr==NULL)		
           printf("\t Empty");	
    while(ptr != NULL)	
    {		
            printf("%d->",ptr->data);
            ptr=ptr->next;	
    }	
    printf("\n");
}
struct node *delete_beg(struct node *head)
{
        struct node *temp=head; 	
        struct node *ptr=temp->next;	
        head=temp->next;
        ptr->prev=NULL;	
        temp->next=NULL;	
        free(temp);	
        return head;
}
struct node *delete_end(struct node *head)
{	
         int count=0;	
         struct node *temp=head; 	
         struct node *ptr=head;	
         while(temp->next!=NULL)	
         {		
                count++;	
                temp=temp->next;	
         }	
         if(head==NULL )	
                    printf("no node to delete");		    
          else if(count<=1)	
                    head=delete_beg(head);
                    else{		
                   temp=head;	
                   while(temp->next != NULL)
                          temp=temp->next;	                               	     ptr=temp->prev;	
                   ptr->next=NULL;
                   temp->prev = NULL;	    
                   free(temp);	
          }	
     return head;
}
int main()
{
//printf("%d",sizeof(struct node));//16
	
	int ch,data;
	struct node *head=NULL;
	
	while(1)
	{
		printf("1.insert_begin\n");
		printf("2.insert_end\n");
		printf("3.display\n");
		printf("4.delete_beg\n");
		printf("5.delete_end\n");
		printf("6.exit\n");
		printf("enter ur choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:printf("enter data\n");
		scanf("%d",&data);
		      head=insert_beg(head,data);
			   break;
               case 2:printf("enter data\n");
		scanf("%d",&data);
               head=insert_end(head,data);
                          break;
		case 3:display(head);
			   break;
		case 4:head=delete_beg(head);
			   break;
                case 5:head=delete_end(head);
                          break;
		case 6: exit(0);
		default:printf("invalide case");
		}
	}
	
	return 0;
}