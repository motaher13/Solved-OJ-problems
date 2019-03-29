#include<bits/stdc++.h>
using namespace std;
vector<int>vc[100];
int adj[100][100],inc[100][100];
int main()
{
    int i,j,k,l,m,n,u,v;
    scanf("%d %d",&n,&m);
    for(i=0; i<=n; i++)
        for(j=0; j<=n; j++)
            adj[i][j]=0;
    for(i=0; i<=n; i++)
        for(j=0; j<=m; j++)
            inc[i][j]=0;
    for(i=1; i<=m; i++)
    {
        scanf("%d %d",&u,&v);
        vc[u].push_back(v);
        //vc[v].push_back(u);
        adj[u][v]=1;
        //adj[v][u]=1;
        inc[u][i]=1;
        inc[v][i]=1;

    }

//    for(i=1; i<=n; i++)
//    {
//        for(j=1; j<=n; j++)
//            printf("%d ",adj[i][j]);
//        printf("\n");
//    }
//    printf("\n\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            printf("%d ",inc[i][j]);
        printf("\n");
    }


}
