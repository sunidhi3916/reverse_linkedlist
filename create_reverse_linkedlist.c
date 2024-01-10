#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node  *next;
};

struct node *head=NULL;
struct node *temp=NULL;

void create_reverse()
{ int n;
  printf("press 1 to insert an element\n");
  scanf("%d",&n);
  while(n==1)
  {
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    newnode->next=NULL;
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
     else
     {
      newnode->next=temp;
      temp=newnode;
     }
    printf("press 1 to insert an element \n");
    scanf("%d",&n);
  };

};

void main()
{
    create_reverse();
    //traversing
     while(temp!=NULL)
     {
       printf("%d ",temp->data);
       temp=temp->next;
     };                            
 
}