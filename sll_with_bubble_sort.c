//1. declare struct data inside struct node - with int val ;
//2.create a linked list
//3. assign val for each node as  " 10" "5" "6" "17" "99"
//and sort them using Bubble s



#include <stdio.h>
#include<stdlib.h>


struct node
{ 
     struct node *link;

           struct data {
                       int val;
                       }*nested;
}node;
struct node  *first=NULL;
struct node  *last=NULL;



void create()
{    

    int num;

    scanf("%d",&num);
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
     ptr->nested= malloc(sizeof(struct data));
     ptr ->nested->val=num;

    ptr->link=NULL;
    if(first==NULL)
    {
        first=ptr;
        last=ptr;
    }
    else
    {
        last->link=ptr;
        last=ptr;
    }
}

void display()
{
   if(first==NULL)
   {
       printf("list is empty");
   }
   else
   {
       struct node *temp=first;
       while(temp!= NULL)
       {
           printf("%d ",temp->nested->val);
           temp=temp->link;
       }
    }


}

void bubbleSort()
{
    int swap, i;
    struct node *ptr1;
    struct node *lptr = NULL;


    if (first == NULL)        //checking empty list
        return;

    do
    {
        swap = 0;
        ptr1 = first;

        while (ptr1->link != lptr)
        {
            if (ptr1->nested->val > ptr1->link->nested->val)
            { 
                int temp;
                temp = ptr1->nested->val;
                ptr1->nested->val = ptr1->link->nested->val;
                ptr1->link->nested->val=temp;
                swap=1;
            }
            ptr1 = ptr1->link;
        }
        lptr = ptr1;
    }
    while (swap);
}


int main()
{  

    printf("Enter the elements\n");
    for(int i=0;i<5;i++)
    {
       create();
    }
   printf("Print created list\n");
   display();
   bubbleSort();
   printf("\nsorted list\n");
   display();



}