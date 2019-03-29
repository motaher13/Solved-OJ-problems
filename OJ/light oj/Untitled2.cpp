#include<bits/stdc++.h>
using namespace std;
void build(int node,int b,int e);
int store[500000],n,mx;
int ara[500000];
int query(int node,int b,int e,int i,int j);
void call(int b,int e);
int main()
{
    int i,j,k,l,m,cas,t,q,x,y;
    scanf("%d",&t);
    for(cas=1;cas<=t;cas++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&store[i]);
        store[n+1]=2147483647;
        build(1,1,n);
//        for(i=1;i<10;i++)
//            printf("%d ",ara[i]);
//        printf("\n");
        mx=0;
        call(1,n);
        printf("Case %d: %d\n",cas,mx);

    }
return 0;
}

void call(int b,int e)
{
    if(e<b)
        return;
    int j=query(1,1,n,b,e);
    //printf("%d\n",j);
    int area=store[j]*(e-b+1);
    if(mx<area)
        mx=area;
        call(b,j-1);
        call(j+1,e);
}

void build(int node,int b,int e)
{
    if(b==e)
    {
        ara[node]=b;
        return;
    }

    int lft=2*node;
    int rgt=2*node+1;
    int mid=(b+e)/2;

    build(lft,b,mid);
    build(rgt,mid+1,e);

    if(store[ara[lft]]<store[ara[rgt]])
        ara[node]=ara[lft];
    else
        ara[node]=ara[rgt];
}
int query(int node,int b,int e,int i,int j)
{
    if(j<b ||i>e)
        return n+1;
    if(b>=i&& e<=j)
        return ara[node];
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)/2;

    int p1=query(lft,b,mid,i,j);
    int p2=query(rgt,mid+1,e,i,j);

    if(store[p1]<store[p2])
        return p1;
    else
        return p2;
}



