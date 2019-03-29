
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[320];
    int i,j,k,l,m,t;
    long long n;
    ara[1]=1,ara[2]=1,ara[0]=0;
    for(i=3;i<320;i++)
        ara[i]=(ara[i-1]+ara[i-2])%100;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        j=ara[n%300];
        if(j<10)
            printf("0%d\n",j);
        else
            printf("%d\n",j);
    }
}
