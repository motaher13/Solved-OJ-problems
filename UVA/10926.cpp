#include<bits/stdc++.h>
using namespace std;
vector<int>vc[110];
int ara[110],n;
int call(int i);
int vis[110];
int main()
{
    int i,j,k,l,m;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        for(i=0;i<=101;i++)
            vc[i].clear();
        for(i=1;i<=n;i++)
        {
            scanf("%d",&m);
            for(j=0;j<m;j++)
            {
                scanf("%d",&k);
                vc[i].push_back(k);
            }
        }
        memset(ara,-1,sizeof ara);
        int mx=0;
        l=0;
        for(i=1;i<=n;i++)
        {
            memset(vis,0,sizeof vis);
            j=call(i);
            //printf("%d %d\n",i,j);
            if(j>mx){
                mx=j;
                l=i;}
        }
        printf("%d\n",l);
    }
    return 0;
}
int call(int i)
{
    if(i>n) return 0;
    if(vis[i]==1) return 0;
    if(vc[i].size()==0) return 1;
    //if(ara[i]!=-1) return ara[i]+1;
    int c=0;
    int k=0;
    int j;
    for(j=0;j<vc[i].size();j++)
    {
        c+=call(vc[i][j]);
        vis[vc[i][j]]=1;
    }
    ara[i]=c;
    return ara[i]+1;
}









