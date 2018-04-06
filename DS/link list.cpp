#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;

}*start=NULL;

void print()
{
    struct node *n;
    n=start;
    while(n!=NULL)
    {
        printf("%d\t",n->data);
        n=n->next;

    }
}
void append(int a)
{

    struct node *n,*temp;

    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    n=(struct node*)malloc(sizeof(struct node ));
    n->data=a;
    n->next=NULL;
    temp->next=n;
}
void append_first(int a)
{

    struct node *n,*temp;

    n=(struct node*)malloc(sizeof(struct node ));

    n->data=a;
    n->next=start;
    start=n;

}
void del(int a)
{
    struct node *n,*temp;
    temp=start;
    while(temp->data!=a)
    {
        n=temp;
        temp=temp->next;

    }
    n->next=temp->next;

}

int main()
{
    int b,m;
    for(int i=0; i<5; i++)
    {
        struct node *new_node, *current;
        new_node=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new_node->data);
        new_node ->next=NULL;

        if(start==NULL)
        {
            start=new_node;
            current=new_node;
        }
        else
        {
            current->next=new_node;
            current=new_node;
        }
    }
    print();
    printf("\n");
    while(scanf("%d",&b)==1)
    {
        if(b==0)
            return 0;
        else if(b==1)
        {
            scanf("%d",&m);
            append(m);
        }
        else if(b==2)
        {
            scanf("%d",&m);
            append_first(m);
        }
        else if(b==3)
        {
            scanf("%d",&m);
            del(m);
        }

        print();
        printf("\n");
    }

    return 0;
}
