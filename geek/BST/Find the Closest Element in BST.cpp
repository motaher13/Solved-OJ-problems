#include<bits/stdc++.h>
using namespace std;
int ans=0,out;
struct node
{
    int data;
    struct node *left,*right;
}*start=NULL;

void add_node(int p,node *root)
{
    node *temp=new node;
    if(p>root->data)
    {
        if(root->right!=NULL)
            add_node(p,root->right);
        else
        {
            temp->data=p;
            temp->left=temp->right=NULL;
            root->right=temp;
        }
    }

    else if(p<root->data)
    {
        if(root->left!=NULL)
            add_node(p,root->left);
        else
        {
            temp->data=p;
            temp->left=temp->right=NULL;
            root->left=temp;
        }
    }
}


void fnd(int p,node *root)
{
    if(root==NULL) return;
    if(abs(p-(root->data))<ans)
        ans=abs(p-root->data),out=root->data;
    if(p<root->data)
        fnd(p,root->left);
    else
        fnd(p,root->right);

}


int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%d",&m);
        node *temp=new node;
        temp->data=m,temp->left=NULL,temp->right=NULL;

        start=temp;
        for(i=1; i<n; i++)
        {
            scanf("%d",&m);
            add_node(m,start);
        }
        scanf("%d",&m);
        ans=INT_MAX;
        fnd(m,start);
        cout<<out<<endl;

    }



}
