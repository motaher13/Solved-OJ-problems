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
    while(n!=NULL)
    {
        printf("%d  ",n->data);
        n=n->next;
    }
    printf("\n");
}


int main()
{
    int i,j,k;
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

}
