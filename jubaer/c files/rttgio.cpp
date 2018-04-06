#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#include <map>
using namespace std;
int visited[100000],level[100000],l,ck;
vector<int>vc[50000];
void bfs(int p){
    queue<int>q;
     int i,j,v,w;
     visited[p]=1;
     q.push(p);
   while(!q.empty()){
    v=q.front();
    q.pop();
    for(i=0;i<vc[v].size();i++){
        w=vc[v][i];
        if(visited[w]==0){
            visited[w]=1;
            level[w]=level[v]+1;
            q.push(w);
            if(w==l){
                ck=level[w];
                break;
            }
        }
    }
  if(ck!=0)break;
   }
}
int main()
{
    string str,str2;
    int i,j,k,m,n,p,s,t,u,w,v=1,x,r;
    printf("SHIPPING ROUTES OUTPUT\n\n");
    scanf("%d",&u);
    while(u--){
    scanf("%d%d%d",&m,&n,&r);
    map<string,int>name;
    for(i=1;i<=m;i++){
       cin>>str;
        name[str]=i;
        vc[i].clear();
    }
    for(i=1;i<=n;i++){
       cin>>str>>str2;
        k=name[str];
        s=name[str2];
        vc[k].push_back(s);
        vc[s].push_back(k);
    }
    printf("DATA SET  %d\n\n",v++);
  for(i=1;i<=r;i++){
  cin>>p>>str>>str2;
    k=name[str];
    l=name[str2];
    ck=0;
    for(j=1;j<=m;j++)visited[j]=0;
    level[k]=0;
    bfs(k);
    if(ck==0)printf("NO SHIPMENT POSSIBLE");
    else printf("$%d",(ck*100*p));
    printf("\n");
  }
  printf("\n");
  name.clear();
    }
    printf("END OF OUTPUT\n");
    return 0;
}
