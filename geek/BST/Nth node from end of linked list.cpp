#include<bits/stdc++.h>
using namespace std;
int m;
struct node
{
    int data;
    struct node *next;
}*start=NULL;


int call()
{
    node *one,*two;
    one=start,two=start;
    for(int i=1;i<m;i++)
    {
        two=two->next;
        if(two==NULL)
            return -1;
    }
    while(1)
    {
        if(two->next==NULL)
            return one->data;
        else
            two=two->next,one=one->next;
    }
}

int main()
{
    int i,j,k,l,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        node *current;
        for(i=0;i<n;i++)
        {
            node *temp=new node();
            scanf("%d",&temp->data);
            temp->next=NULL;
            if(i==0)
                start=temp,current=temp;
            else
                current->next=temp,current=temp;
        }
        cout<<call()<<endl;

    }
}
