
#include<bits/stdc++.h>
using namespace std;

int dp[20]={0};
char str[10000];
int fc(int n)
{
    if(dp[n]==0)
        dp[n]=n*fc(n-1);
    return dp[n];
}
int main()
{
    int i,j,k,l,m,n,t,p,a,b,c,x;
    scanf("%d",&t);
    dp[0]=1;
    dp[1]=1;
    i=fc(9);

    while(t--)
    {
        scanf("%d",&x);
        j=9,l=0;
        while(x!=0)
        {
            k=x/dp[j];
            if(k>0)
            {
                for(i=0;i<k;i++)
                        str[l]=(char)(j+48),l++;
                x=x%dp[j];
                if(x==1)
                {
                    str[l]=(char)(1+48),l++;
                    break;
                }

            }
            j--;
        }

        for(i=l-1;i>=0;i--)
            printf("%c",str[i]);
        printf("\n");

    }
}
