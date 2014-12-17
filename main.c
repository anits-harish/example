#include <stdio.h>
#include <stdlib.h>
struct node* CreateNode();
void displayList(struct node *a);
struct node
{
    int data;
    struct node *next;
};
int main()
{

    struct node *first=NULL,*second=NULL;
    first=CreateNode();
    displayList(first);
    return 0;
}
struct node* CreateNode()
{
    struct node *temp=NULL,*head=NULL,*link=NULL;
    char ch;
    ch=getchar();
    head=(struct node *)malloc(sizeof(struct node));
    link=(struct node *)malloc(sizeof(struct node));
    while(ch!='-')
    {
        if(head==NULL)
        {
            head->data=ch-48;
            head->next=NULL;
            link=head;
        }
        else
        {
            temp=(struct node *)malloc(sizeof(struct node));
            temp->data=ch-48;
            temp->next=NULL;
            link->next=temp;
            link=temp;
            link->next=NULL;
        }
        ch=getchar();
    }
    return head;
}
void displayList(struct node *a)
{
    while(a)
    {
        printf("%d",a->data);
        a=a->next;
    }
    printf("\n");

}
