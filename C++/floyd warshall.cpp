#include<bits/stdc++.h>
using namespace std;
int ara[20][20],m,n,next[20][20];
void floyd();
int main()
{
    int i,j,k,w;
    while(scanf("%d%d",&n,&m)==2)
    {
        for(i=0; i<=n; i++)
            for(j=0; j<=n; j++)
            {
                ara[i][j]=0;
                next[i][j]=0;
            }

        for(k=0; k<m; k++)
        {
            scanf("%d %d %d",&i,&j,&w);
            ara[i][j]=w;
            next[i][j]=j;
        }
        floyd();

        scanf("%d %d",&i,&j);
        printf("\nweight=%d\n",ara[i][j]);
        printf("way=%d ",i);
        while(i!=j &&i!=0)
        {
            i=next[i][j];
            printf("%d ",i);
        }
    }

    return 0;
}


void floyd()
{
    int i,j,k,l;

    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(ara[i][k]*ara[k][j]!=0 && i!=j)  //jaowa jabe ki na
                {
                    if(ara[i][k]+ara[k][j]<ara[i][j] || ara[i][j]==0) //rasta komtase ki na
                    {
                        ara[i][j]=ara[i][k]+ara[k][j];
                        next[i][j]=next[i][k];
                    }
                }
            }
        }
    }

}
