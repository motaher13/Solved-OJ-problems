#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*start=NULL;

void print()
{
    struct node *n,*temp;
    n=start;
    while(n!=NULL)
    {
        printf("%d  ",n->data);
        n=n->next;
    }
    printf("\n");
}

void revers()
{
    struct node *n,*m,*temp;
    m=start;
    n=m->next;
    temp=n->next;
    m->next=NULL;
    while(n->next!=NULL)
    {
        n->next=m;
        m=n;
        n=temp;
        temp=temp->next;
    }
    n->next=m;
    start=n;
}

void append(int i)
{
    struct node *n,*temp;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=i;
    n->next=NULL;
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void append_first(int i)
{
    struct node *n,*temp;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=i;
    n->next=start;
    start=n;
}


void append_after(int j,int i)
{
    struct node *n,*temp;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=i;
    n->next=NULL;
    temp=start;
    while(temp->data!=j)
    {
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
}
void dlt(int j)
{
    struct node *m,*n,*temp;
    n=start;
    if(start->data==j)
        start=start->next;
    else
    {
        while(temp->data!=j)
        {
            m=temp;
            temp=n;
            n=n->next;
        }
        m->next=n;
    }

}


void doub()
{
    struct node *n,*t,*m;
    n=start;
    t=n->next;
    while(n!=NULL)
    {
        m=(struct node*)malloc(sizeof(struct node));
        m->data=n->data;
        m->next=n->next;
        n->next=m;
        n=m->next;

    }
}


int main()
{
    printf("input 5 int\n");
    int i,j,k,l;
    struct node *new_node,*current;
    for(i=0;i<5;i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new_node->data);
        new_node->next=NULL;
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
    printf("the revers is\n");
    revers();
    print();
    printf("give a int to append last\n");
    scanf("%d",&i);
    append(i);
    print();
    printf("the append after first is\n");
    append_first(i);
    print();
    printf("give a int to append after\n");
    scanf("%d",&j);
    append_after(j,i);
    print();
    printf("give a int to delete\n");
    scanf("%d",&j);
    dlt(j);
    print();
    printf("making double\n");
    doub();
    print();

}
