#include <bits/stdc++.h>
using namespace std ;
#define ll long long
int ara[100010] ;
ll tree[300030] ;

ll query(int node , int b , int e , int i , int j);
void build(int node , int b , int e);
void update(int node , int b , int e , int i , int valu);

int main()
{
    int t,n,q,a,ith,jth,valu,cas,i;
    ll b ;

    scanf("%d",&t);

    for(cas=1;cas<=t;cas++)
    {
        printf("Case %d:\n",cas);
        scanf("%d %d",&n,&q);

        for(i=1;i<=n;i++)
            scanf("%d",&ara[i]);

        build(1,1,n);

        for(i=0;i<q;i++)
        {
            scanf("%d",&a);

            if(a == 1)
            {
                scanf("%d",&ith);
                b = query(1,1,n,ith+1,ith+1) ;

                printf("%lld\n",b);
                update(1,1,n,ith+1,-b);
            }

            else if(a == 2)
            {
                scanf("%d %d",&ith,&valu);
                update(1,1,n,ith+1,valu);
                //cout<<query(1,1,n,ith+1,ith+1)<<endl;
            }

            else if(a == 3)
            {
                scanf("%d %d",&ith,&jth);
                b = query(1,1,n,ith+1,jth+1);
                printf("%lld\n",b);
            }
        }
    }
    return 0;
}

void build(int node , int b , int e)
{
    if(b == e)
    {
        tree[node] = ara[b];
        return;
    }

    int lft , rigt , mid ;

    lft = 2*node ;
    rigt = 2*node + 1 ;
    mid = (b+e)/2 ;

    build(lft,b,mid);
    build(rigt,mid+1,e);

    tree[node] = tree[lft] + tree[rigt] ;
}

void update(int node , int b , int e , int i , int valu)
{
    if(i<b || i>e)
        return ;

    if(i<=b && i>=e )
    {
        tree[node] += valu ;
        return;
    }

    int lft , rigt , mid ;

    lft = 2*node ;
    rigt = 2*node + 1 ;
    mid = (b+e)/2 ;

    update(lft,b,mid,i,valu);
    update(rigt,mid+1,e,i,valu);

    tree[node] = tree[lft] + tree[rigt];
}

ll query(int node , int b , int e , int i , int j)
{
    if(j<b || i>e)
        return 0 ;

    if(i<=b && j>=e)
        return tree[node];

    int lft , rigt , mid ;
    ll p1 , p2 ;

    lft = 2*node ;
    rigt = 2*node + 1 ;
    mid = (b+e)/2 ;

    p1 = query(lft,b,mid,i,j);
    p2 = query(rigt,mid+1,e,i,j);

    return p1+p2 ;
}


