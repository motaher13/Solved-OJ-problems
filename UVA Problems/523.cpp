#include<bits/stdc++.h>
using namespace std;
int ara[2000][2000],m,n,next[2000][2000],tax[1500];
void floyd();
int main()
{
    int i,j,k,w,t;
    scanf("%d",&t);
    getchar();

    char c;
    while(t--)
    {
        for(i=0; i<=1500; i++)
            for(j=0; j<=1500; j++)
            {
                ara[i][j]=0;
                next[i][j]=0;
            }
        n=0;
        i=0,j=0;
        while(scanf("%d%c",&ara[i][j],&c)==2)
        {
            j++;
            if(j>n)
                n=j;
            if(c=='\n')
            i++,j=0;
            if(i==n)
                break;
        }

        for(i=0;i<n;i++)
            scanf("%d",&tax[i][j]);


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

    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
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

