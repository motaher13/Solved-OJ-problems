#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;
int visited[3000];
int hear[3000],level[3000];
vector<int>vc[3000];
int day,masi;
void bfs(int p){
    int i,j,v,w;
    int max=0;
    visited[p]=1;
    level[p]=0;
    queue<int>q;
    q.push(p);
    while(!q.empty()){
        v=q.front();
        q.pop();
        for(i=0;i<vc[v].size();i++){
            w=vc[v][i];
            if(visited[w]==0){
                visited[w]=1;
                level[w]=level[v]+1;
                hear[level[w]]++;
                j=hear[level[w]];
                if(max<j){
                    max=hear[level[w]];
                    day=level[w];
                }
                q.push(w);
            }
        }
    }
    masi=max;
}
int main()
{
    int i,j,k,l,n,m,t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        while(m--){
            scanf("%d",&k);
            vc[i].push_back(k);
        }
    }
  scanf("%d",&t);
  while(t--){
    for(i=0;i<n;i++){
        hear[i]=0;
        visited[i]=0;
    }
    scanf("%d",&k);
    bfs(k);
    if(masi==0)printf("0");
    else
    printf("%d %d",masi,day);
    printf("\n");
  }
  return 0;
}
