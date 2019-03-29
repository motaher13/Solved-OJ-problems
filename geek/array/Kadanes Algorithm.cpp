#include<bits/stdc++.h>
using namespace std;


int main()
{

    int i,j,k,l,m,n,s,now,mx,p,t;

    scanf("%d",&t);
    while(t--)
    {
        now=0,mx=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&p);
            if(i==0)
            {
                now=p;
                mx=p;
                continue;
            }
            now+=p;
            now=max(now,p); //to handle negative maximum
            mx=max(now,mx);

        }

        printf("%d\n",mx);
    }

    return 0;

}
