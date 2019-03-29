#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int visited[100],visit[100],level[100];
vector<int>vc[100];
 void dfs(int r){
     int i,v;

    if(visited[r]==1)
        return;
        printf("%d ",r);
        visit[r]=1;
    for(i=0;i<vc[r].size();i++){
        v=vc[r][i];
        if(visit[v]!=1){
           // level[v]=level[r]+1;
          //  printf("%d %d ",v,level[v]);
        dfs(v);
        }
    }
    visited[r]=1;

//printf("%d ",r);
    return;
 }
int main()
{

    int n,m,starting,i,j,k,l;


    printf("enter number of vertices\n");
    scanf("%d",&n);
    printf("number of edges\n");
    scanf("%d",&m);


    for(i=0;i<m;i++){
scanf("%d%d",&k,&l);
       // scanf("%d%d",&k,&l);
        vc[k].push_back(l);
       // vc[l].push_back(k);
    }
    for(i=0;i<n;i++){
      visited[i]=0;
      visit[i]=0;
    }
    printf("input starting\n");

    scanf("%d",&j);
    level[j]=0;
    dfs(j);
}
