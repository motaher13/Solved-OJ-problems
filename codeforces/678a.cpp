#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,l,m,n;
    scanf("%I64d %I64d",&n,&k);
    j=n%k;
    n=n+(k-j);
    printf("%I64d\n",n);
    return 0;
}
