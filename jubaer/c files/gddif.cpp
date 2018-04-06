#include <stdio.h>
#include <queue>
#include <string>
#include <iostream>
#include <map>
#include <string.h>
using namespace std;
map<string,int>visit;
map<string,int>level;
vector<string>vc[100];
 string str,str2,str3,str4;
 int ck;
void bfs(string str){
    int i,j,k,l,u,v,t;
   visit[str]=1;
   level[str]=0;
queue<string>q;
q.push(str);
while(!q.empty()){
    str2=q.front();
    q.pop();
    l=str2.size();
  for(i=0;i<vc[l].size();i++){
    str3=vc[l][i];
    if(visit[str3]==0){
        t=0;
        for(k=0;k<str3.size();k++){
            if(str2[k]!=str3[k])t++;
        }
        if(t<=1){
            level[str3]=level[str2]+1;
             visit[str3]=1;
             if(str3==str4){
                ck= level[str3];
                break;
             }
             q.push(str3);

        }
    }

  }
  if(ck!=0)break;
}
}
int main()
{
  char c[100];
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--){
    int min=1128939;
    int max=0;
    while(cin>>str){
        if(str=="*")break;
        visit[str]=0;
        vc[str.size()].push_back(str);
  if(min>str.size())min=str.size();
  if(max<str.size())max=str.size();
    }
  getchar();
     while(gets(c)){
            if(strcmp(c,"\0")==0)break;
     char *pch;
      pch = strtok(c, " ");
            str = pch;
            pch = strtok (NULL, " ");
            str4 = pch;
            ck=0;
            bfs(str);
            visit.clear();
            level.clear();
   cout<<str<<" "<<str4<<" "<<ck;
    printf("\n");
     }
    if(t>0)printf("\n");
   for(i=min;i<=max;i++)vc[i].clear();
    }
    return 0;
}
