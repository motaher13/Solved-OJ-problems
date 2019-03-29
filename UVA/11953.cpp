#include<bits/stdc++.h>
using namespace std;
int ara[150][150],n;
string s[150];
void dfs(int x,int y);
int main()
{
    int i,j,k,l,m,t;
    scanf("%d",&t);
    for(int cs=1; cs<=t; cs++)
    {
        for(i=0;i<=100;i++)
            for(j=0;j<=100;j++)
            ara[i][j]=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
            cin>>s[i];
        int c=0;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                if(s[i][j]=='x')
                {
                    dfs(i,j);
                    c++;
                }

        printf("Case %d: %d\n",cs,c);
    }
    return 0;
}

void dfs(int x,int y)
{
    if(x>=n || y>=n ||x<0 ||y<0) return;
    if(s[x][y]=='.'|| ara[x][y]==1) return;
    s[x][y]='.';
    ara[x][y]=1;
    dfs(x,y+1);
    dfs(x,y-1);
    dfs(x+1,y);
    dfs(x-1,y);
}













