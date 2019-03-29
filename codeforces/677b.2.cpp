#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,l,m,n,h,s=0,c=0,q,p;
    scanf("%I64d %I64d %I64d",&n,&h,&k);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&m);
        if(s+m>h)
        {
            p=s/k;
            s=s%k;
            c+=p;
            if(s+m>h)
            {
                c++;
                s=m;
            }
            else
                s+=m;
        }
        else
            s+=m;

    }
    //printf("%I64d\n",s);
    if(s!=0)
    {
        q=s/k;
        c+=q;
        s=s%k;
        if(s!=0)
            c++;
    }
    printf("%I64d\n",c);
    return 0;
}
