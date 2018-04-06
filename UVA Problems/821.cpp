#include<bits/stdc++.h>
using namespace std;
int ara[150][150],m,n;
void floyd();
int main()
{
    int i,j,k,w;

    for(i=0;i<=100;i++)
        for(j=0;j<=100;j++)
            ara[i][j]=0;

    int r=0;
    while(scanf("%d %d",&i,&j)==2)
    {
        r++;
        for(k=0;k<=100;k++)
            for(w=0;w<=100;w++)
            ara[k][w]=0;

        int mx=0;
        if(i==0 && j==0)
            break;
        ara[i][j]=1;
        mx=max(mx,i);
        mx=max(mx,j);
        while(scanf("%d %d",&i,&j)==2)
        {
            if(i==0 && j==0)
                break;
            ara[i][j]=1;
            mx=max(mx,i);
        mx=max(mx,j);
        }
        n=mx;
        floyd();
        int c=0,s=0;
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if(ara[i][j]!=0){
                    s=s+ara[i][j];
                    c++;}

        double d=(double)s/(double)c;
        printf("Case %d: average length between pages = %.3lf clicks\n",r,d);


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

                    }
                }
            }
        }
    }




}

