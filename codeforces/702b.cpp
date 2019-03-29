#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[100010],pp[100];

map<ll,ll>mm;
map<ll,ll>po;
int main()
{
    ll i,j,k,l,m,n,c=0,s=1;
    scanf("%I64d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&ara[i]);
        mm[ara[i]]++;
    }
    for(i=1;i<63;i++)
    {
        s=s*2;
        pp[i]=s;
        po[s]=1;
    }
//    for(i=1;i<63;i++)
//        printf("%lld",pp[i]);
    for(i=0;i<n;i++)
    {
        for(j=1;j<63;j++)
        {
            k=pp[j]-ara[i];

            if((k!=ara[i] && mm[k]>0)||mm[k]>1)
            {
                printf("%lld %lld %lld %lld %lld\n",ara[i],k,pp[j],i,j);
                c++;

                //mm[k]--;
            }
        }
        mm[ara[i]]--;
    }
    printf("%d\n",c);
    return 0;

}
