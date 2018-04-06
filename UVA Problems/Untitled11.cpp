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
        printf("%d  ",n->data);
        n=n->next;
    }
    printf("\n");
}
void dlt(int p)
{
    struct node *n,*t;
    n=start;
    t=n->next;
    while(t->data!=p)
    {
        //printf("%d  ",n->data);
        n=t;
        t=t->next;
    }
    n->next=t->next;
   // printf("\n");
}
void aa(int p,int q)
{
    struct node *n,*t,*m;
    m=new node();
    m->data=q;
    m->next=NULL;
    t=start;
    //t=n->next;
    while(t->data!=p)
    {

        //n=t;
        t=t->next;
    }
    m->next=t->next;
    t->next=m;

}
void rev()
{
    struct node *n,*t,*m;
    n=start;
    t=n->next;
    m=t->next;
    n->next=NULL;
    //t=n->next;
    while(t!=NULL)
    {

        //n=t;
        t=t->next;
    }
    m->next=t->next;
    t->next=m;

}




int main()
{
    int i,j,k;
    struct node *new_node,*current;
    for(i=0;i<5;i++)
    {
        //new_node=(struct node*)malloc(sizeof(struct node));
        new_node=new node();
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
    scanf("%d %d",&i,&j);
    aa(i,j);
    print();

}

