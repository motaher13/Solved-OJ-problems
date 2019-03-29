
#include<bits/stdc++.h>
using namespace std;


int main()
{

    int i,j,k,l,m,now,mx,p,t;
    long long s,x,n;

    scanf("%d",&t);
    while(t--)
    {
        s=0;
        scanf("%lld",&n);
        for(i=0;i<n-1;i++)
        {
            scanf("%d",&p);
            s+=p;
        }

        x=n*(n+1)/2;
        s=x-s;

        printf("%lld\n",s);
    }

    return 0;

}
