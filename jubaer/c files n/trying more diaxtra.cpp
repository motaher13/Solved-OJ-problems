#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
const int inf = 1000000000;
vector<int>vc[100];
int num,des;
int cost[100][100];
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
   for(i=1;i<=num;i++)d[i]=inf;
   u.vertex=p;
   u.dist=0;
   q.push(u);
   d[p]=0;
   while(!q.empty()){
    u=q.top();
    q.pop();
    m=d[u.vertex];
    for(i=0;i<vc[u.vertex].size();i++){
        v.vertex=vc[u.vertex][i];
        v.dist=m+cost[u.vertex][v.vertex];
        if(v.dist<d[v.vertex]){
            d[v.vertex]=v.dist;
            q.push(v);
        }
    }
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
           cost[k][l]=j;
           cost[l][k]=j;
    }
    scanf("%d%d",&k,&l);
    djks(k,l);
    printf("%d",des);


}
