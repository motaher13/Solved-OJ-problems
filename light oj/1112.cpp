#include<bits/stdc++.h>
using namespace std;
void build(int node,int b,int e);
int store[100010],ara[300030];
int query(int node,int b,int e,int i,int j);
void update(int node,int b,int e,int i,int v);
void up(int node,int b,int e,int i,int v);
int yy;
int main()
{
    int i,j,k,l,m,n,cas,t,q,x,y,u,w,v;
    scanf("%d",&t);
    for(cas=1;cas<=t;cas++)
    {
        scanf("%d %d",&n,&q);
        for(i=1;i<=n;i++)
            scanf("%d",&store[i]);
        build(1,1,n);
        printf("Case %d:\n",cas);
        for(i=0;i<q;i++)
        {
            scanf("%d",&u);
            if(u==1)
            {
                scanf("%d",&w);
                update(1,1,n,w+1,0);
                printf("%d\n",yy);

            }
            if(u==2)
            {

                scanf("%d %d",&w,&v);
                up(1,1,n,w+1,v);

            }
            if(u==3)
            {
                scanf("%d %d",&w,&v);
                j=query(1,1,n,w+1,v+1);
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
        return;
    }

    int lft=2*node;
    int rgt=2*node+1;
    int mid=(b+e)/2;

    build(lft,b,mid);
    build(rgt,mid+1,e);

    ara[node]=ara[lft]+ara[rgt];
}

int query(int node,int b,int e,int i,int j)
{
    if(j<b ||i>e)
        return 0;
    if(b>=i&& e<=j)
        return ara[node];
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)/2;

    int p1=query(lft,b,mid,i,j);
    int p2=query(rgt,mid+1,e,i,j);

    return p1+p2;
}

void update(int node,int b,int e,int i,int v)
{
    if(i<b || i>e)
        return;
    if(i<=b && i>=e)
    {
        yy=ara[node];
        ara[node]=v;
        return;
    }
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)/2;

    update(lft,b,mid,i,v);
    update(rgt,mid+1,e,i,v);

    ara[node]=ara[lft]+ara[rgt];

}
void up(int node,int b,int e,int i,int v)
{
    //printf("%d %d %d %d\n",node,b,e,i);
    if(i<b || i>e)
        return;
    if(i<=b && i>=e)
    {
        ara[node]=ara[node]+v;
        //printf("aaa=%d\n",ara[node]);
        return;
    }
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)/2;

    up(lft,b,mid,i,v);
    up(rgt,mid+1,e,i,v);

    ara[node]=ara[lft]+ara[rgt];

}









