#include<bits/stdc++.h>
using namespace std;

void build(int node,int b,int e);
int store[100010],ara[300030],ara1[300030];
int query(int node,int b,int e,int i,int j);
int query1(int node,int b,int e,int i,int j);
void build1(int node,int b,int e);
vector<int>vc;

int main()
{
    int i,j,k,l,m,n,cas,t,q,x,y;
    scanf("%d",&t);
    for(cas=1;cas<=t;cas++)
    {
        scanf("%d %d",&n,&q);
        for(i=1;i<=n;i++)
            scanf("%d",&store[i]);
        vc.clear();
        build(1,1,n);
        build1(1,1,n);
//        for(i=1;i<10;i++)
//            printf("%d ",ara1[i]);
//        printf("\n");
        printf("Case %d: ",cas);
        for(i=1;i<=n-q+1;i++)
        {
            j=query(1,1,n,i,i+q-1);
            k=query1(1,1,n,i,i+q-1);
            //printf("%d %d\n",j,k);
            vc.push_back(k-j);
        }
        sort(vc.begin(),vc.end());
        printf("%d\n",vc[vc.size()-1]);
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

    ara[node]=min(ara[lft],ara[rgt]);
}


int query(int node,int b,int e,int i,int j)
{
    if(j<b ||i>e)
        return 214748364;
    if(b>=i&& e<=j)
        return ara[node];
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)/2;

    int p1=query(lft,b,mid,i,j);
    int p2=query(rgt,mid+1,e,i,j);

    return min(p1,p2);
}

void build1(int node,int b,int e)
{
    if(b==e)
    {

        ara1[node]=store[b];
        //printf("%d %d\n",node,ara[node]);
        return;
    }

    int lft=2*node;
    int rgt=2*node+1;
    int mid=(b+e)/2;

    build1(lft,b,mid);
    build1(rgt,mid+1,e);

    ara1[node]=max(ara1[lft],ara1[rgt]);
}


int query1(int node,int b,int e,int i,int j)
{
    if(j<b ||i>e)
        return 0;
    if(b>=i&& e<=j)
        return ara1[node];
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)/2;

    int p1=query1(lft,b,mid,i,j);
    int p2=query1(rgt,mid+1,e,i,j);

    return max(p1,p2);
}











