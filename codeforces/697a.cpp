#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,l,m,n,p,q;
    scanf("%I64d %I64d %I64d",&m,&n,&p);
    q=p;
    p=p-m;
    if((p%n==0 || (p-1)%n==0 && q>(m+n))&& p>=0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
