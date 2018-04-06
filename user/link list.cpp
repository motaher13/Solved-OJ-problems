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
        printf("%d\t",n->data);
        n=n->next;
    }
    printf("\n");
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

int main()
{
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

    scanf("%d",&i);
    append(i);
    print();
    append_first(i);
    print();
    scanf("%d",&j);
    append_after(j,i);
    print();
    scanf("%d",&j);
    dlt(j);
    print();
    //dlt afrer,dlt before;

}
