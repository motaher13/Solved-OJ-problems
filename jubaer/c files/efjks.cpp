#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int num;
const long long inf = 1000000000LL;
int visited[110][110];
vector<int>vc[110],cost[110];
struct node
{
    int vertex;
  long long dist;
    bool operator < (const node& p) const
    {
        return dist > p.dist;
    }
};
long long d[1000];
int par[1000];
int dj(int source,long long des){
priority_queue<node>q;
node v,u;
int i,j,k,l,m,n;
for(i=1;i<=num;i++){
    d[i]=inf;
    par[i]=-1;
}
u.vertex=source;
u.dist=0;
q.push(u);
d[source]=0;
while(!q.empty()){
    u=q.top();
    if(u.vertex==des){
        break;
    }
    q.pop();
    m=d[u.vertex];
    if(u.dist==d[u.vertex]){
        for(i=0;i<vc[u.vertex].size();i++){
            v.vertex=vc[u.vertex][i];
            v.dist=m+cost[u.vertex][i];
            if(visited[u.vertex][v.vertex]==0&&visited[v.vertex][u.vertex]==0)
            if(v.dist<d[v.vertex]){
                d[v.vertex]=v.dist;
                par[v.vertex]=u.vertex;
                q.push(v);
            }
                   }

    }
}
return d[des];
}
int main(){
   int i,j,k,l;
   long long m,u;
   while(scanf("%d",&num)){
        if(num==0)break;
   scanf("%lld",&m);
   for(i=1;i<=num;i++){
    vc[i].clear();
    cost[i].clear();
   }
   for(i=1;i<=num;i++){
    for(j=1;j<=num;j++)visited[i][j]=0;
   }
   for(i=1;i<=m;i++){
    scanf("%d%d%d",&k,&l,&j);
    vc[k].push_back(l);
     vc[l].push_back(k);
     cost[k].push_back(j);
       cost[l].push_back(j);
   }
   m=dj(1,num);
   if(m==inf)printf("Back to jail");
   else{
  l=num;
  while(1){
        k=par[l];
        visited[k][l]=1;
        visited[l][k]=1;
        if(par[k]==-1)break;
        l=k;
  }
 u=dj(1,num);
 if(u==inf)printf("Back to jail");
 else printf("%lld",u+m);
   }
printf("\n");
   }
   return 0;
}
