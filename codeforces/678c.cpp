#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,l,m,n,p,q,r,s=0,a,b,c,d,e,f;
    scanf("%I64d %I64d %I64d %I64d %I64d",&n,&a,&b,&p,&q);
    c=a,d=b;
    while(1)
    {
        k=d%c;
        if(k==0)
            break;
        d=c;
        c=k;
    }
    ll lcm=(a*b)/c;
    s=(n/a)*p+(n/b)*q-(n/lcm)*min(q,p);
    printf("%I64d\n",s);
    return 0;

}
