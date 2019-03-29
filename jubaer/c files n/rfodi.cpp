#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <string.h>
#include <string>
using namespace std;
char str[120][120];
int visited[120][120];
int count,n,m;
int x[]={0,0,1,-1};
int y[]={1,-1,0,0};
void dfs(int p,int q){
    int v,w,i;
    visited[p][q]=1;
   for(i=0;i<4;i++){
    v=p+x[i];
    w=q+y[i];
    if((str[v][w]=='x'||str[v][w]=='@')&&visited[v][w]==0&&v>=0&&v<n&&w>=0&&w<m){
        dfs(v,w);
    }
   }
}
int main()
{
    int i,j,k,l,t,r=1;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    m=n;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)visited[i][j]=0;
    for(i=0;i<n;i++)scanf("%s",str[i]);
    count=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(str[i][j]=='x'&&visited[i][j]==0){
                count++;
                dfs(i,j);
            }
        }

    }

    printf("Case %d: %d",r++,count);
    printf("\n");
    }
}
