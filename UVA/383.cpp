#include<bits/stdc++.h>
using namespace std;
vector<int>vc[100];
int bfs(int n,int src);
int main()
{
    int i,j,k,m,n,a,b,r,c,t,p,x,y;
    printf("SHIPPING ROUTES OUTPUT\n\n");
    char ss[100],sss[100];
    scanf("%d",&t);
    getchar();
    for(k=1;k<=t;k++)
    {
        printf("DATA SET  %d\n\n",k);
        for(i=0;i<100;i++)
            vc[i].clear();
        map<string,int>m;

        scanf("%d %d %d",&a,&b,&y);
        getchar();

        for(i=1;i<=a;i++){
            scanf("%s",ss);
            getchar();
            m[ss]=i;}

        for(i=0; i<b; i++)
        {
            scanf("%s %s",ss,sss);
            getchar();
            vc[m[ss]].push_back(m[sss]);
            vc[m[sss]].push_back(m[ss]);
        }
        for(j=0;j<y;j++)
        {

            scanf("%d %s %s",&p,ss,sss);
            getchar();
            x=bfs(m[ss],m[sss]);
            if(x==0)
                printf("NO SHIPMENT POSSIBLE\n");
            else
                printf("$%d\n",p*x*100);

        }
        printf("\n");

    }
    printf("END OF OUTPUT\n");
    return 0;

}

int bfs(int src,int n)
{
    int i;
    queue<int>q;
    int visited[100]={0},level[100]={0},parent[100];
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
    return level[n];
}


