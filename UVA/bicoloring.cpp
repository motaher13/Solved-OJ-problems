#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;
int bfs(int src);

vector<int>v[100000];
int main()
{
    int i,j,k,l,m,n,e,r,c,w;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        scanf("%d",&e);
        for(i=0;i<e;i++)
        {
            scanf("%d %d",&r,&c);
            v[r].push_back(c);
            v[c].push_back(r);
        }

        w=bfs(0);
        if(w==1)
            printf("NOT BICOLORABLE.\n");
        if(w==0)
            printf("BICOLORABLE.\n");
    }
    return 0;
}

int bfs(int src)
{
    int i;
    queue<int>q;
    int vs[500]={0},level[500],p[500];
    q.push(src);
    level[src]=0;
    while(!q.empty())
    {
        int u=q.front();
        for(i=0;i<v[u].size();i++)
        {
            int ve=v[u][i];
            if(!vs[ve])
            {
                vs[ve]=1;
                level[ve]=level[u]+1;
                p[ve]=u;
                q.push(ve);
            }
            else
            {
                if(p[u]==p[ve])

                return 1;

            }
        }
        q.pop();
    }
    return 0;
}



















