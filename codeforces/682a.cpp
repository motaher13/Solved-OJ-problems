#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,l,m,n,s=0;
    scanf("%I64d %I64d",&m,&n);
    for(i=1;i<=m;i++)
    {
        j=i+n;
        j=j/5;
        k=i/5;
        j=j-k;
        //printf("%d ",j);
        s+=j;
    }
    printf("%I64d\n",s);
    return 0;
}
