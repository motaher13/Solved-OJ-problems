#include <stdio.h>
#include <queue>
#include <vector>
vector<int>graph[100];
int level[100],visit[100],visited[1000];
void bfs(int u){
int v,i;
queue<int>q;
visit[u]=1;
printf("%d ",u);
   q.push(u);
   while(!q.empty()){
   u=q.front();
   q.pop();
   for(i=0;i<graph[u].size();i++){
   v=graph[u][i];
   if(!visit[v]){
   printf("%d ",v);
   visit[v]=1;
   level[v]=level[v]+1;
   q.push(v);
   }
   }
   }

}
int main(){
    int i,j,k,l,m,n;
    printf("input number of nodes\n");
    scanf("%d",&n);
    printf("number of edges");
    scanf("%d",&m);
    for(i=0;i<m;i++){
    scanf("%d%d",k,l);
    graph[k].push_back(l);
     graph[l].push_back(k);

    }
    cout<<"enter starting"<<endl;
    cin>>j;
   // visit[j]=1;
   q.push(j);




}
