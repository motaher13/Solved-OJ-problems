#include<bits/stdc++.h>
using namespace std;
int m,n,c;
int mal[1010][2]= {0};
int ara[1010][110];
int fn(int i,int w);
int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
            scanf("%d %d",&mal[i][1],&mal[i][0]);

        scanf("%d",&m);
        j=0;
        for(k=0; k<m; k++)
        {
            scanf("%d",&c);
            for(i=0; i<=n; i++)
                memset(ara[i],-1,sizeof ara[i]);
            j+=fn(1,0);
        }
        printf("%d\n",j);
    }
return 0;
}
int fn(int i,int w)
{
    if(i>n) return 0;
    if(ara[i][w]!=-1) return ara[i][w];

    int p1=0,p2=0;

    if(w+mal[i][0]<=c)
        p1=mal[i][1]+fn(i+1,w+mal[i][0]);

    p2=fn(i+1,w);

    ara[i][w]=max(p1,p2);
    return ara[i][w];

}

