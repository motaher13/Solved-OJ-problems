#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[200010];
string s;
int main()
{
    ll i,j,k,l=0,m,n,r=-1,mn=2147483647;
    scanf("%I64d",&n);
    cin>>s;
    for(i=0;i<n;i++)
        scanf("%I64d",&ara[i]);

    for(i=0;i<n;i++)
    {
        if(s[i]=='R')
            r=ara[i];
        else if(s[i]=='L')
        {
            if(r!=-1)
            {
                j=ara[i]-r;
                k=j/2;
                mn=min(mn,k);
                r=-1;
            }
        }
    }
    if(mn==2147483647)
        printf("-1\n");
    else
        printf("%I64d\n",mn);
    return 0;
}
