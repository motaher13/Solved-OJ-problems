
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,k,l,m,n,q,t,a,b;
    long long j,p,mx=0,nx=0,sum;

    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&p);
        if(p>mx)
            nx=mx,mx=p;
        else if(p>nx)
            nx=p;
    }

    j=m/(k+1);
    sum=j*k*mx;
//    printf("%d\n",sum);
    sum+=(j*nx);
//    printf("%d\n",nx);
    j=m%(k+1);
    sum+=(j*mx);
    printf("%lld\n",sum);


    return 0;
}
