#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,p,q,r,t,c,cs;
    scanf("%d",&t);
    string s;
    for(cs=1;cs<=t;cs++)
    {
        cin>>n>>s;
        if(s=="Alice")
        {
            if(n%2==0)
                printf("Case %d: Alice\n",cs);
            else
                printf("Case %d: Bob\n",cs);
        }
        if(s=="Bob")
        {
            if(n%2==0)
                printf("Case %d: Alice\n",cs);
            else
                printf("Case %d: Bob\n",cs);
        }
    }
    return 0;
}
