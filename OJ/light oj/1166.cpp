#include<bits/stdc++.h>
using namespace std;
int ara[200];
int main()
{
    int i,j,k,l,n,t;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        map<int,int>mm;
        j=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);

        }
        l=0;
        for(i=1;i<=n;i++)
        {
            if(ara[i]!=i)
            {
                for(j=i+1;j<=n;j++)
                {
                    if(ara[j]==i)
                    {
                        swap(ara[j],ara[i]);
                        l++;
                    }
                }
            }
        }
//        for(i=1;i<=n;i++)
//            printf("%d ",ara[i]);
        //printf("\n");
        printf("Case %d: %d\n",k,l);
    }
    return 0;
}
