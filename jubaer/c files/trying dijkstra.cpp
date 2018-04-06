#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
const int inf = 1000000000;
vector<int>vc[500],cost[500];
int par[50],cou=0;

int num,des;

struct node{

      int vertex,dist;
      bool operator < (const node& p) const {
    return dist > p.dist;
  }
};
void djks(int p,int l){
    priority_queue<node>q;
   node u,v;
   int i,j,k,m,n,d[1000];
   for(i=1;i<=num;i++){
        d[i]=inf;
        par[i]=-1;
   }
   u.vertex=p;
   u.dist=0;
   q.push(u);
   d[p]=0;
   while(!q.empty()){
    u=q.top();

    if(u.vertex==l)break;
    q.pop();
    m=d[u.vertex];
    for(i=0;i<vc[u.vertex].size();i++){
        v.vertex=vc[u.vertex][i];
        v.dist=m+cost[u.vertex][i];
        if(v.dist<d[v.vertex]){
            d[v.vertex]=v.dist;
            par[v.vertex]=u.vertex;
            q.push(v);
        }
    }
   // path[cou++]=u.vertex;
   }
   des=d[l];
}
int main()
{
    int n,m,i,j,k,l,r,p,e;
    scanf("%d%d",&num,&m);
    for(i=1;i<=m;i++){
        scanf("%d%d%d",&k,&l,&j);

        vc[k].push_back(l);
           vc[l].push_back(k);
         cost[k].push_back(j);
            cost[l].push_back(j);
    }
    scanf("%d%d",&k,&l);
    djks(k,l);
    printf("%d\n",des);
   // for(i=0;i<cou;i++)printf("%d ",path[i]);
while(1){
        printf("%d ",l);
    k=par[l];
    if(k==-1)break;
    l=k;
}

}
