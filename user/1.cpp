#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*strt=NULL;
void print()
{
    struct node *n;
    n=strt;
    while(n!=NULL)
    {
        printf("%d  ",n->data);
        n=n->next;
    }
}

void append(int a)
{
    struct *n,*temp;
    temp=strt;
    while(temp!=NULL)
        temp=temp->next;
    n=(struct node*)malloc(sizeof(struct node));
}



int main()
{   int a;
    struct node *new_node,*current;
    for(int i=0;i<2;i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&a);
        new_node->data=a;
        new_node->next=NULL;

        if(strt==NULL)
        {
            strt=new_node;
            current=new_node;
        }
        else
        {
            current->next=new_node;
            current=new_node;
        }

    }
        print();
    scanf("%d",&m);
    append(m);
}
