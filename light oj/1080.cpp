#include<bits/stdc++.h>
using namespace std;

void build(int node,int b,int e);
int store[100010],ara[300030];
void query(int node,int b,int e,int i);
void update(int node,int b,int e,int i,int j);
int yy,lazy[300030];
char s[200000];
int mx=0;

int main()
{
    int i,j,k,l,m,n,cas,t,q,x,y,u,w,v;
    scanf("%d",&t);
    for(cas=1; cas<=t; cas++)
    {
        scanf("%s",s);
        getchar();
        n=strlen(s);
        for(i=0; i<n; i++)
            store[i+1]=s[i]-48;

        build(1,1,n);

        printf("Case %d:\n",cas);
        scanf("%d",&q);
        getchar();
        for(i=0; i<q; i++)
        {
            char c;
            scanf("%c",&c);
            if(c=='I')
            {
                scanf("%d %d",&x,&y);
                getchar();
                update(1,1,n,x,y);

            }
            else if(c=='Q')
            {
                scanf("%d",&x);
                getchar();

                query(1,1,n,x);
                printf("%d\n",yy);
            }

        }
    }



    return 0;
}

void build(int node,int b,int e)
{
    if(b==e)
    {
        ara[node]=store[b];
        lazy[node]=0;
        return;
    }

    int lft=2*node;
    int rgt=2*node+1;
    int mid=(b+e)/2;

    build(lft,b,mid);
    build(rgt,mid+1,e);

    lazy[node]=0;
}

void query(int node,int b,int e,int i)
{
    if(i<b ||i>e)
        return ;
    if(lazy[node]!=0 && b!=e)
    {
        lazy[node*2]+=lazy[node];
        lazy[node*2+1]+=lazy[node];
        lazy[node]=0;
    }
    if(i==b && i==e)
    {

        if(lazy[node]%2==0)
        {
            yy=ara[node];

        }
        else
        {
            if(ara[node]==0)
                yy=1;
            else if(ara[node]==1)
                yy=0;
        }
        return;
    }

    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)/2;

    query(lft,b,mid,i);
    query(rgt,mid+1,e,i);


}


void update(int node,int b,int e,int i,int j)
{

    if(e<i || b>j)
        return;
    if(lazy[node]!=0 && b!=e)
    {
        lazy[node*2]+=lazy[node];
        lazy[node*2+1]+=lazy[node];
        lazy[node]=0;
    }
    if(b>=i && e<=j)
    {
        lazy[node]++;
        return;
    }
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)/2;

    update(lft,b,mid,i,j);
    update(rgt,mid+1,e,i,j);



}










