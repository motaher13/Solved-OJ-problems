#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[200];
int main()
{

    ll i,j,k,l,m=1,n;
    scanf("%I64d",&n);
    ll g=0;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&ara[i]);
        if(ara[i]==1)
            g=1;
    }

    if(ara[n-1]!=1)
    {
        for(i=n-1;i>=0;i--)
        {
            if(ara[i]==1)
            {
                n=i+1;
                break;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        ll c=0;
        if(ara[i]==1)
        {
            c++;
            for(j=i+1;j<n&&ara[j]!=1;j++)
                c++;

            m=m*c;
        }
    }
    if(g==0)
        printf("0\n");
    else
    printf("%I64d\n",m);
    return 0;
}
