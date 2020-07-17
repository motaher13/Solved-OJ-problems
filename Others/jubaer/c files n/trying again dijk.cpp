#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
const int inf = 1000000000;
int num;
vector<int> vc[100];
int cost[100][100];

struct node
{
    int vertex, dist;
    bool operator < ( const node & p ) const
    {
        return dist > p.dist;
    }
};
int djks(int source,int destained){

     int i,j,k,l,m,d[100];
     node u,v;
     priority_queue<node>q;
     for(i=1;i<=num;i++){
        d[i]=inf;
     }
     u.vertex=source;
     u.dist=0;
    q.push( u );
     d[source]=0;

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


 return d[destained];

}
int main()
{
int i,j,k,l,m,n;
scanf("%d%d",&num,&m);
for(i=1;i<=m;i++){
    scanf("%d%d%d",&k,&l,&j);
    vc[k].push_back(l);
      vc[l].push_back(k);
      cost[k][l]=j;
      cost[l][k]=j;

}
   scanf("%d%d",&k,&l);
   printf("%d", djks(k,l));
}
