#include<bits/stdc++.h>
using namespace std;
int ara[110000],visited[101000]={0};
int main()
{
    int i,j,k,l,m,n,p,q;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
        scanf("%d",&ara[i]);
    int s=0;
    for(i=1;i<n;i++)
        s=s+ara[i]*ara[i+1];
    s+=ara[1]*ara[n];
    //printf("%d\n",s);
    for(int u=0;u<k;u++)
    {
        scanf("%d",&m);
        for(i=1;i<=n;i++)
        {
            if(i!=m+1 && i!=m && i!=m-1 && visited[i]==0)
            {
                if((i==1 && m==n)|| (i==n && m==1) )
                    continue;

                s+=ara[i]*ara[m];
            }
            visited[m]=1;
             //printf("%d %d\n",i,m);
            //printf("%d\n",s);
        }
    }
    printf("%d\n",s);
    return 0;
}
