#include <stdio.h>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int>graph[100];
int level[100],visit[100],visited[1000];
void bfs(int u){
int v,i;
queue<int>q;
visit[u]=1;
//printf("%d ",u);
   q.push(u);
   while(!q.empty()){
   u=q.front();
   printf("%d\n",u);
   q.pop();
   for(i=0;i<graph[u].size();i++){
       // printf("%d %d %d\n ",graph[u][i],u,visit[u]);
   v=graph[u][i];
   if(visit[v]==0){
  // printf("%d %d\n",v,visit[v]);
   visit[v]=1;
   level[v]=level[u]+1;
   printf("%d %d\n",v,level[v]);
   q.push(v);
   }
   }
   }
  // v=q.front();
   //bfs(v);

}
int main(){
    int i,j,k,l,m,n;
    printf("input number of nodes\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        visit[i]=0;
    }
    printf("number of edges\n");
    scanf("%d",&m);
    for(i=0;i<m;i++){
    scanf("%d%d",&k,&l);
    graph[k].push_back(l);
    // graph[l].push_back(k);

    }
    cout<<"enter starting"<<endl;
    cin>>j;
    level[j]=0;
   // visit[j]=1;
   // q.push(j);
   bfs(j);




}
