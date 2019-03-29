#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int visited[30],visit[30];
vector<int>vc[30];
 void dfs(int r){
     int i,v;
    if(visited[r]==1)
        return;
        visit[r]=1;
    for(i=0;i<vc[r].size();i++){
        v=vc[r][i];
        if(visit[v]==0)
        dfs(v);
    }
    visited[r]=1;
    return;
 }
int main()
{
char str[1000],ch;
    int n,m,starting,i,j,k,l,num,max,count,r;
    scanf("%d",&r);
    gets(str);
    getchar();
while(r--){
    scanf("%c",&ch);
getchar();
    max=(int)ch-65;
    count=0;
    num=0;
    while(gets(str)&&str[0]){

    if(strlen(str)==0)break;
      k=(int)str[0]-65;
      l=(int)str[1]-65;
        vc[k].push_back(l);
        vc[l].push_back(k);
        num++;
    }
    for(i=0;i<=26;i++){
      visited[i]=0;
      visit[i]=0;
    }
    if(num==0){
        printf("%d\n",max+1);
    }
    else{
     count=0;
    for(i=0;i<=max;i++){
        if(visit[i]==0){
                count++;
            dfs(i);
        }
    }
     printf("%d\n",count);
  for(i=0;i<=26;i++){
    while(!vc[i].empty()){
        vc[i].pop_back();
    }
  }
     max=0;
    }
  if(r>0)printf("\n");
}
return 0;
}
