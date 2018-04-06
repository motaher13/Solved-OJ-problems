#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
vector<int>vc[50000];
    int ara[50000];
    int visited[50000];
    int level[50000];
int main()
{
    int i,j,k,l,m,n,v,w,count,r=1;
    while(scanf("%d",&m)){
            if(m==0)break;
    j=0;
    for(i=0;i<m;i++){
        scanf("%d%d",&k,&l);
       vc[l].push_back(k);
        vc[k].push_back(l);
        if(visited[k]!=6){
            ara[j]=k;
            j++;
            visited[k]=6;
        }
         if(visited[l]!=6){
            ara[j]=l;
            j++;
            visited[l]=6;
        }
    }
    while(scanf("%d%d",&k,&l)){
            if(k==0&&l==0)break;

      queue<int>q;
    for(i=0;i<=j-1;i++){
        visited[ara[i]]=0;
    }
    q.push(k);
    visited[k]=1;
    level[k]=0;
    while(!q.empty()){
        v=q.front();
        q.pop();
        for(i=0;i<vc[v].size();i++){
            w=vc[v][i];
            if(visited[w]==0){
              level[w]=level[v]+1;
              if(level[w]<=l){
                    visited[w]=1;
                    q.push(w);
              }
            }
        }

    }
count =0;
    for(i=0;i<=j-1;i++){
        if(visited[ara[i]]!=1){
         count++;
        }
    }
    printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",r++,count,k,l);
    }
    for(i=0;i<j;i++)vc[ara[i]].clear();
    }
    return 0;
}
