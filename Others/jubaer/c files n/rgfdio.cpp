#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int num;
const int inf = 10000000;
int visited[110][110];
vector<int>vc[110],cost[110];
struct node
{
    int vertex;
  int dist;
    bool operator < (const node& p) const
    {
        return dist > p.dist;
    }
};
int d[1000];
int par[1000];
int dj(int source,int des){
priority_queue<node>q;
node v,u;
int i,j,k,l,m,n;
for(i=0;i<=9;i++){
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
   int i,j,k,l,ara[1000],p,q;
 int m,u;
   while(scanf("%d",&num)){

   scanf("%d",&m);
   for(i=0;i<=9;i++){
    vc[i].clear();
    cost[i].clear();
   }

   for(i=0;i<num;i++){
    for(j=0;j<m;j++){
        scanf("%d",&ara[j]);
        if(i==0&&j==0)p=ara[j];
        if(i==num-1&&j==m-1)q=ara[j];
    }
    for(k=1;k<m;k++){
    vc[ara[k-1]].push_back(ara[k]);
  //  printf("%d %d\n",ara[k],ara[k-1]);
      vc[ara[k]].push_back(ara[k-1]);
     cost[ara[k-1]].push_back(ara[k]);
      cost[ara[k]].push_back(ara[k]);
    }
   }
  // printf("%d %d",p,q);
   m=dj(p,q);
  printf("%d",m);

   }
   return 0;
}
