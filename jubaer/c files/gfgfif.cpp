#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
long long visited[120000],visit[120000];
vector<long long>vc[120000];
 void dfs(int r){
     long long i,v;
    if(visited[r]==1)
        return;
        visit[r]=1;
    for(i=0;i<vc[r].size();i++){
        v=vc[r][i];
        if(visit[v]!=1)
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
        while(!vc[i].empty()){
            vc[i].pop_back();
        }
     }
     printf("\n");
  }
   return 0;
}
