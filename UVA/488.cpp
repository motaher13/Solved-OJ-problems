#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        for(i=1;i<=n;i++)
        {
            if(i>1)
                printf("\n");
            for(j=1;j<=m;j++)
            {
                for(k=0;k<j;k++)
                    printf("%d",j);
                printf("\n");
            }
            j=j-2;
            for(;j>0;j--)
            {
                for(k=0;k<j;k++)
                    printf("%d",j);
                printf("\n");
            }

        }
        if(t>0)
                printf("\n");
    }
    return 0;
}
