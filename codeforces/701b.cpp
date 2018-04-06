#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>r;
map<ll,ll>c;
int main()
{
    ll i,j,k,l,m,n;
    scanf("%I64d %I64d",&m,&n);
    l=m*m;
    int d=0;
    for(i=0;i<n;i++)
    {
        scanf("%I64d %I64d",&j,&k);
        l-=m+m-1-2*i+d;
        if(r[j]==1 || c[k]==1){
            l+=i;
            d++;}
        r[j]=1;
        c[k]=1;
        printf("%I64d ",l);
    }
    return 0;
}
