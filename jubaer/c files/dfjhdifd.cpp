#include <stdio.h>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
queue<int>q;
vector<int>graph[1000];
int level[1000],visit[1000],visited[1000],count,w;
void bfs(int u){
int v,i;
visit[u]=1;
   q.push(u);
   while(!q.empty()){
   u=q.front();
   q.pop();
   for(i=0;i<graph[u].size();i++){
   v=graph[u][i];
   if(visit[v]==0){
   visit[v]=1;
   level[v]=level[u]+1;
   count=count+level[v];
   w++;
   q.push(v);
   }
   }
   }

}
int main(){
    int i,j,k,l,m,n,sum,d,can=1,a;
    double er;
while(1){
        a=0;
while(scanf("%d%d",&k,&l)&&k!=0&&l!=0){

    graph[k].push_back(l);
a++;
}
sum=0;
if(a==0)break;
w=0;
    for(i=1;i<=100;i++){
            for(k=1;k<=100;k++)visit[k]=0;
    j=i;
    level[j]=0;
   count=0;
   bfs(j);
   sum=sum+count;
    }
    er=(double)sum/w;
   printf("Case %d: average length between pages = %.3lf clicks\n",can,er);
   can++;
   for(k=1;k<=100;k++){
    while(!graph[k].empty()){
        graph[k].pop_back();
    }

   }
   while(!q.empty()){
    q.pop();
   }
}
return 0;
}
