#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,t;
    int a,b,c,d;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        scanf("%d",&k);
        printf("Case %d:\n",cs);
        while(k--)
        {
            scanf("%d %d",&m,&n);
            if(m>=a && m<=c && n>=b && n<=d)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
