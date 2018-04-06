#include<bits/stdc++.h>
using namespace std;
vector<int>vc[1000];
void bfs(int n,int src);
int main()
{
    int i,j,k,m,n,a,b,r,c,t;
    char cc;
    while(scanf("%d",&n)==1)
    {
        getchar();
        for(i=0;i<400;i++)
            vc[i].clear();
        printf("-----\n");
        for(i=1;i<=n;i++)
        {
            scanf("%d%c",&j,&cc);
            string sx,x;
            getline(cin,sx);
            if(sx.size()==0)
                continue;
            k=0;
            for(j=0;j<=sx.size();j++)
            {
                if(sx[j]==',' || sx[j]=='\0'){
                    vc[i].push_back(k);
                    k=0;}
                else
                    k=k*10+sx[j]-48;
            }

        }
        for(i=1;i<=n;i++)
            sort(vc[i].begin(),vc[i].end());

          int p,q;

        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d %d",&p,&q);
            bfs(p,q);

        }


    }
return 0;
}

void bfs(int src,int n)
{
    int i;
    queue<int>q;
    int visited[400]={0},level[400]={0},parent[400];
    visited[src]=1;
    level[src]=0;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        for(i=0;i<vc[u].size();i++)
        {
            int v=vc[u][i];
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

    if(level[n]==0)
        printf("connection impossible\n");
    else
    {

        int aa[400];
        aa[0]=n;
        int h=1;
        while(n!=src)
            {

                aa[h]=parent[n];
                n=parent[n];
                h++;
            }
        for(int j=h-1;j>=0;j--)
        {
            printf("%d",aa[j]);
            if(j>=1)
                printf(" ");
        }

        printf("\n");

    }


}

