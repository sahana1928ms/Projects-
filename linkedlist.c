#include<stdio.h>
struct node
{
    int data ;
    struct node *link ;

};
void main()
{
    struct node *head;
    head=(struct node * )malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    struct node *current;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=30;
    current->link=NULL;
    head->link=current;
    current=(struct node *)malloc(sizeof(struct node));
    current->data=40;
    current->link=NULL;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=40;
    current->link=NULL;
    head->link->link=current;
    printf("%d %d %d %d %d %d",head->data,head->link,
           current->data,current->link,head->link->link,head->link->data);
}
