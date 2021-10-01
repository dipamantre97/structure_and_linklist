#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;//8
struct node *link;//8
};

extern struct node *root;

struct node * add_last();
void display();
void count();
struct node * add_beg();
