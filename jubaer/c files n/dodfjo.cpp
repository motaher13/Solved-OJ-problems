#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
long long visit[2000000];
long long visited[2000000];
vector<long long>vc[2000000];
 void dfs(long long r){
     long long i,v;
    if(visited[r]==1)
        return;
        visit[r]=1;
    for(i=0;i<vc[r].size();i++){
        v=vc[r][i];
        if(visit[v]==0&&visited[v]==0)
        dfs(v);
    }
    visited[r]=1;
    return;
 }
int main()
{

    long long n,m,starting,i,j,k,l,count,t,w=1;
    scanf("%lld",&t);
  while(t--){
    scanf("%lld",&n);
    for(i=1;i<n;i++){
        vc[i][0];
    }
    count=0;
    scanf("%lld",&m);
    for(i=0;i<m;i++){
        scanf("%lld%lld",&k,&l);
        vc[k].push_back(l);
        vc[l].push_back(k);
    }
    for(i=1;i<=n;i++){
      visited[i]=0;
      visit[i]=0;
    }
    for(i=1;i<=n;i++){
    if(visit[i]==0){
            count++;
            j=i;
    dfs(j);
    }
    }
     printf("%lld",count);
     for(i=1;i<=n;i++){
       vc[i].clear();
     }
     printf("\n");
  }
   return 0;
}
