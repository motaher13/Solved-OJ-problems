#include<bits/stdc++.h>
using namespace std;
#define ll long long
void build(ll node,ll b,ll e);
ll store[100010],ara[300030],po[300030];
ll query(ll node,ll b,ll e,ll i,ll j);
void up(ll node,ll b,ll e,ll i,ll v);
ll mx,cc;
int main()
{
    ll i,j,k,l,m,n,cas,t,q,x,y,r;


        while(scanf("%lld",&n)==1){
        for(i=1; i<=n; i++)
            scanf("%lld",&store[i]);
        build(1,1,n);
//        for(i=1; i<10; i++)
//            printf("%lld ",ara[i]);
//        printf("\n");
        scanf("%lld",&q);

        for(r=0; r<q; r++)
        {

            string s;
            cin>>s;
            scanf("%lld %lld",&x,&y);
            if(s[0]=='U')
            {
                up(1,1,n,x,y);
//                for(j=1; j<10; j++)
//                    printf("%lld ",po[j]);
//                printf("\n");
            }
            else if(s[0]=='Q')
            {
                j=query(1,1,n,x,y);
                k=mx;
//                for(int w=1; w<10; w++)
//                    printf("%lld ",po[w]);
//                printf("\n");
                up(1,1,n,mx,0);
                //printf("0==");
//                for(int w=1; w<10; w++)
//                    printf("%lld ",po[w]);
//                printf("\n");
                l=query(1,1,n,x,y);
                printf("%lld\n",j+l);
                up(1,1,n,k,j);
            }
        }
        }



    return 0;
}

void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        ara[node]=store[b];
        po[node]=b;
        return;
    }

    ll lft=2*node;
    ll rgt=2*node+1;
    ll mid=(b+e)/2;

    build(lft,b,mid);
    build(rgt,mid+1,e);

    if(ara[lft]>ara[rgt])
        po[node]=po[lft];
    else
        po[node]=po[rgt];

    ara[node]=max(ara[lft],ara[rgt]);
}

ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(j<b ||i>e)
      return 0;
    if(b>=i&& e<=j)
    {
            mx=cc=po[node];
        return ara[node];
    }

    ll lft=node*2;
    ll rgt=node*2+1;
    ll mid=(b+e)/2;

    ll p1=query(lft,b,mid,i,j);
    ll q1=cc;
    ll p2=query(rgt,mid+1,e,i,j);
    ll q2=cc;
    if(p1>p2)
        mx=q1;
    else
        mx=q2;
    return max(p1,p2);
}
void up(ll node,ll b,ll e,ll i,ll v)
{
    if(i<b || i>e)
        return;
    if(i<=b && i>=e)
    {
        ara[node]=v;
        return;
    }
    ll lft=node*2;
    ll rgt=node*2+1;
    ll mid=(b+e)/2;

    up(lft,b,mid,i,v);
    up(rgt,mid+1,e,i,v);

    if(ara[lft]>ara[rgt])
        po[node]=po[lft];
    else
        po[node]=po[rgt];
    ara[node]=max(ara[lft],ara[rgt]);

}

