#include <stdio.h>
#include <queue>
int visited[1100][1100];
int n,m,r,z,ck;
int level[1100][1100];
int x[]={0,0,1,-1};
int y[]={1,-1,0,0};
using namespace std;
void bfs(int p,int s){
    queue<int>q;
    int v,w,i,j;
    visited[p][s]=1;
    level[p][s]=0;
    q.push(p);
    q.push(s);
    while(!q.empty()){
        p=q.front();
        q.pop();
        s=q.front();
        q.pop();
for(i=0;i<4;i++){
    v=x[i]+p;
    w=y[i]+s;
    if(visited[v][w]==0&&v>=0&&v<n&&w>=0&&w<m){
        level[v][w]=level[p][s]+1;
        visited[v][w]=1;
        if(v==r&&w==z){
            ck=level[v][w];
            break;
        }
        q.push(v);
        q.push(w);

    }

}

    if(ck!=0)break;
    }



}
int main()
{
    int i,j,k,l,v,u,s,t;
    while(scanf("%d%d",&n,&m)){
            if(n==0&&m==0)break;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)visited[i][j]=0;
    }
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&r,&s);
        while(s--){
            scanf("%d",&u);
            visited[r][u]=9;
        }
    }
    ck=0;
    scanf("%d%d%d%d",&k,&l,&r,&z);
    bfs(k,l);
    if(ck==0&&(k!=r||l!=z))printf("100000000");
    else printf("%d",ck);
    printf("\n");
    }
    return 0;
}
