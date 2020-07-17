#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll po[110],vl[110];
int main()
{
    ll i,j,k,l,m,n,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ll c=0;
        memset(po,0,sizeof po);
        memset(vl,0,sizeof vl);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&m);
            if(m==0){
                po[i]=1;
                vl[1]=i;
                for(j=i;j>=m+1;j--)
                {
                    po[vl[j-1]]++;
                    vl[j]=vl[j-1];
                }

                }
            else
            {
                //printf("1\n");
                c=c+min(po[m],i-1-po[m]);

                for(j=i;j>=m+1;j--)
                {
                    po[vl[j-1]]++;
                    vl[j]=vl[j-1];
                }
                po[i]=m+1;
                vl[m+1]=i;
            }

        }
        printf("%lld\n",c);
    }
    return 0;
}
