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
vector<int>g[500];
int r=0;
int bfs(int src);
int main()
{
    int i,j,k,m,n,a,b,r,c;
    while(scanf("%d",&a)==1)
    {
        for(i=0; i<a; i++)
            g[i].clear();
        if(a==0)
            break;
        scanf("%d",&b);
        for(i=0; i<b; i++)
        {
            scanf("%d %d",&r,&c);
            g[r].push_back(c);
            g[c].push_back(r);
        }
        r=0;
         r=bfs(0);
         if(r==1)
            printf("NOT BICOLORABLE.\n");
         else
            printf("BICOLORABLE.\n");
    }
}
    int bfs(int src)
    {
        int i;
        queue<int>q;
        int level[500],parent[500],visited[500]= {0};
        visited[src]=1;
        parent[src]=1;
        level[src]=0;
        q.push(src);
        while(!q.empty())
        {
            int u=q.front();
            for(i=0; i<g[u].size(); i++)
            {
                int v=g[u][i];
                if(visited[v]!=0)
                {
                    visited[v]=1;
                    level[v]=level[u]+1;
                    if(parent[u]==1){
                        parent[v]=2;
                        printf("%d %d\n",v,parent[v]);}
                    if(parent[u]==2){
                        parent[v]=1;
                        printf("%d %d\n",v,parent[v]);}
                    q.push(v);
                }
                if(parent[u]==parent[v])
                {
                    return 1;
                }
            }
            q.pop();
        }
        return 0;
    }

