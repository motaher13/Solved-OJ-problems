#include<bits/stdc++.h>
using namespace std;
int ara[200][200],m,n;
void floyd();
char s[100];
int main()
{

    int i,j,k,w,c=0;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==0&&m==0)
            break;
        c++;
        map<int,string>mm;
        for(i=0; i<=n; i++)
            for(j=0; j<=n; j++)
                ara[i][j]=0;

        for(i=1; i<=n; i++)
        {
            scanf("%s",s);
            mm[i]=s;
        }

        for(k=0; k<m; k++)
        {
            scanf("%d %d %d",&i,&j,&w);
            ara[i][j]=w;
            ara[j][i]=w;
        }

            floyd();

            int mn=2147483647,p;
            for(i=1; i<=n; i++)
            {
                int q=0;
                for(j=1; j<=n; j++)
                {
                    q=q+ara[i][j];
                }
                if(q<mn)
                {
                    mn=q;
                    p=i;
                }
            }
//            for(i=1;i<=n;i++){
//                for(j=1;j<=n;j++)
//                printf("%7d ",ara[i][j]);
//            printf("\n");}

            printf("Case #%d : ",c);
            cout<<mm[p]<<endl;

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


