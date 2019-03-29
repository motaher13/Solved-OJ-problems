

#include<bits/stdc++.h>
using namespace std;
int ara[10000100];

int main()
{

    int i,j,k,l,m,n,p,t,b;
    long long sum,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0,s=0;
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]),sum+=ara[i];
        b=0;
        for(i=0;i<n;i++)
        {
            if(s==(sum-ara[i]))
            {
                b=1;
                break;
            }

            s+=ara[i],sum-=ara[i];

        }
        if(b==1)
            printf("%d\n",i+1);
        else
            printf("-1\n");
    }

    return 0;

}
