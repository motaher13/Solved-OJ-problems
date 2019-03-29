#include<bits/stdc++.h>
using namespace std;
int ara[200000]={0};
int main()
{

    int i,j,k,l,m,n,a,b;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        ara[a]++,ara[b]++;
    }
    sort(ara,ara+n+1);
    int e=0;

    if(ara[n]==n-1)
    {

        int d=0;
        for(i=1;i<n;i++)
            if(ara[i]!=1)
                d=1;
        if(d==0)
        {
            printf("star topology\n");
        }
        else e=1;
    }


    else if(ara[1]==1 && ara[2]==1)
    {
        int d=0;
        for(i=3;i<=n;i++)
            if(ara[i]!=2)
                d=1;
        if(d==0)
        {
            printf("bus topology\n");
        }
        else e=1;
    }

    else if(ara[1]==2)
    {
        int d=0;
        for(i=1;i<=n;i++)
            if(ara[i]!=2)
                d=1;
        if(d==0)
        {
            printf("ring topology\n");
        }
        else e=1;
    }
    else
        printf("unknown topology\n");
    if(e==1)
        printf("unknown topology\n");
    return 0;

}
