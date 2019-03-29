#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,t,n;
    long long sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        j=min(m,n);
        sum=0;
        for(i=1;i<=j;i++)
            sum=sum+(m-i+1)*(n-i+1);

        printf("%lld\n",sum);
    }
}
