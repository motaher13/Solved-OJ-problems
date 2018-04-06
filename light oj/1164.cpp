#include<bits/stdc++.h>
using namespace std;

void build(int node,int b,int e);
int store[100010],ara[300030],lazy[300030];
int query(int node,int b,int e,int i,int j);
void update(int node,int b,int e,int i,int j,int v);


int main()
{
    //freopen("q.txt","w",stdout);
    int i,j,k,l,m,n,cas,t,q,x,y,v;
    scanf("%d",&t);
    for(cas=1;cas<=t;cas++)
    {
        printf("Case %d:\n",cas);
        scanf("%d %d",&n,&q);
        for(i=1;i<=n;i++)
            store[i]=0;
        build(1,1,n);


        for(i=0;i<q;i++)
        {
            scanf("%d",&m);
            if(m==0)
            {
                scanf("%d %d %d",&x,&y,&v);
                update(1,1,n,x+1,y+1,v);

            }
            if(m==1)
            {
                scanf("%d %d",&x,&y);
                j=query(1,1,n,x+1,y+1);
                printf("%d\n",j);


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

    ara[node]=ara[lft]+ara[rgt];
    lazy[node]=0;
}

int query(int node,int b,int e,int i,int j)
{
    if(b>e || j<b ||i>e)
        return 0;
    if(lazy[node]!=0)
    {
        ara[node]=ara[node]+(e-b+1)*lazy[node];
        if(b!=e)
        {
            lazy[node*2]+=lazy[node];
            lazy[node*2+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(b>=i&& e<=j){
        return ara[node];}

    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)/2;

    int p1=query(lft,b,mid,i,j);
    int p2=query(rgt,mid+1,e,i,j);

    return p1+p2;
}

void update(int node,int b,int e,int i,int j,int v)
{
    if(b>e || j<b || i>e)
        return;
    if(lazy[node]!=0)
    {
        ara[node]=ara[node]+(e-b+1)*lazy[node];
        if(b!=e)
        {
            lazy[node*2]+=lazy[node];
            lazy[node*2+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(b>=i&& e<=j)
    {
        ara[node]=ara[node]+(e-b+1)*v;

        if(b!=e)
        {
            lazy[node*2]+=v;
            lazy[node*2+1]+=v;
        }

        return;
    }
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)/2;

    update(lft,b,mid,i,j,v);
    update(rgt,mid+1,e,i,j,v);

    ara[node]=ara[lft]+ara[rgt];

}










