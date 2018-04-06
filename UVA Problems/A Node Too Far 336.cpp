#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
vector<int>g[10000];

int bfs(int src,int lng);

int main()
{
    int i,j,k,l=0,a,b,r,c,w,s,n,z;
    int str[200][4];
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
            s=0;
        int ara[10000]={0};
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&r,&c);
            g[r].push_back(c);
            g[c].push_back(r);
            if(ara[r]==0){
                ara[r]=1;
                s++;}
            if(ara[c]==0){
                ara[c]=1;
                s++;}
       }

       for(j=0; ;j++)
       {
           scanf("%d %d",&str[j][0],&str[j][1]);
           if(str[j][0]==0 && str[j][1]==0)
                break;
       }

       for(i=0;i<j;i++)
       {
           k=bfs(str[i][0],str[i][1]);
           k=abs(k);
           l++;
           z=abs(s-k);
           printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",l,z,str[i][0],str[i][1]);
        }
    }

}

int bfs(int src,int lng)
{
    int i;
    queue<int>q;
    int vs[10000]={0},level[10000],p[10000];
    q.push(src);
    level[src]=0;
    vs[src]=1;
    int h=0;
    int b=1;
    while(!q.empty())
    {
        int u=q.front();
        for(i=0;i<g[u].size();i++)
        {
            int v=g[u][i];
            if(!vs[v])
            {
                vs[v]=1;
                p[v]=u;
                level[v]=level[u]+1;
                h=level[v];
                q.push(v);
                if(h>lng)
                    return b;
                b++;
            }

        }
        q.pop();
    }
    return b;
}
























