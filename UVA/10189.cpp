#include<bits/stdc++.h>
using namespace std;
int m,n;
char ara[110][110];
int main()
{

    int i,j,k=0,l;
    while(scanf("%d %d",&m,&n)==2)
    {
        k++;
        if(m==0 && n==0)break;
        getchar();
        for(i=0; i<m; i++)
            scanf("%s",ara[i]);

        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                if(ara[i][j]!='*')
                    ara[i][j]='0';
            }
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                if(ara[i][j]=='*')
                {
                    if(ara[i][j+1]!='*' && i<m && i>=0 && j<n-1 && j>=0)
                        ara[i][j+1]=ara[i][j+1]+1;
                    if(ara[i][j-1]!='*' && i<m && i>=0 && j<n && j>0)
                        ara[i][j-1]=ara[i][j-1]+1;
                    if(ara[i+1][j]!='*' && i<m-1 && i>=0 && j<n && j>=0)
                        ara[i+1][j]=ara[i+1][j]+1;
                    if(ara[i-1][j]!='*' && i<m && i>0 && j<n && j>=0)
                        ara[i-1][j]=ara[i-1][j]+1;
                    if(ara[i+1][j+1]!='*' && i<m-1 && i>=0 && j<n-1 && j>=0)
                        ara[i+1][j+1]=ara[i+1][j+1]+1;
                    if(ara[i-1][j-1]!='*' && i<m && i>0 && j<n && j>0)
                        ara[i-1][j-1]=ara[i-1][j-1]+1;
                    if(ara[i+1][j-1]!='*' && i<m-1 && i>=0 && j<n && j>0)
                        ara[i+1][j-1]=ara[i+1][j-1]+1;
                    if(ara[i-1][j+1]!='*' && i<m && i>0 && j<n-1 && j>=0)
                        ara[i-1][j+1]=ara[i-1][j+1]+1;


                }
            }
            if(k!=1)
                printf("\n");
            printf("Field #%d:\n",k);
            for(i=0;i<m;i++)
                printf("%s\n",ara[i]);


    }
    return 0;
}



















