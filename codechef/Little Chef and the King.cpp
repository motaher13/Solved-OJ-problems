#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,l,m,n,t,s=0;
    scanf("%I64d",&t);
    while(t--)
    {
        scanf("%I64d %I64d",&n,&k);
        s=0;
        if(k==1)
        {
            printf("I64d\n",n);
            continue;
        }
        //map<ll,ll>mm;
        while(n>0)
        {
            j=log10(n)/log10(k);
            j=pow(k,j);
            l=n/j;
            n=n%j;
            s+=l;


        }
        printf("%I64d\n",s);
    }
    return 0;
}
