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
vector<int>g[100];
void bfs(int n,int src);
int main()
{
    int i,j,k,m,n,a,b,r,c;
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++)
    {
        scanf("%d %d",&r,&c);
        g[r].push_back(c);
        g[c].push_back(r);
    }
    bfs(7,1);
}

void bfs(int n,int src)
{
    int i;
    queue<int>q;
    int visited[100]={0},level[100],parent[100];
    visited[src]=1;
    level[src]=0;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        for(i=0;i<g[u].size();i++)
        {
            int v=g[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                level[v]=level[u]+1;
                parent[v]=u;
                q.push(v);
            }
        }
        q.pop();
    }
    for(i=1;i<=n;i++)
        printf("%d to %d distance %d\n",src,i,level[i]);


}
/*i=7;
    while(i!=src)
    {
        printf("%d ",parent[i]);
        i=parent[i];
    }*/
