#include<bits/stdc++.h>
using namespace std;
vector<int>vc[12000];
int a,b,d;
int visited[12000]={0},level[12000]={0},parent[12000]={0};
void bfs(int node);
int main()
{
    int i,j,k,l,m,n;
    for(i=10000;i>0;i--)
        vc[i].push_back(i-1);
    for(i=0;i*2<=10000;i++)
        vc[i].push_back(i*2);
    scanf("%d %d",&a,&b);
    d=0;
    bfs(a);
    return 0;
}
void bfs(int node)
{
    visited[node]=1;
    level[node]=0;
    queue<int>q;
    q.push(node);
    while(!q.empty())
    {
        int n=q.front();
        //printf("%d ",n);
        q.pop();
        for(int i=0;i<vc[n].size();i++)
        {
            int m=vc[n][i];
            if(visited[m]==0)
            {
                visited[m]=1;
                level[m]=level[n]+1;
                if(m==b)
                {
                    printf("%d\n",level[m]);
                    d=1;
                    break;
                }
                q.push(m);
            }

        }
        if(d==1)
            break;
    }

}
