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
    //cout<<str3<<endl;
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
  char a[100],b[100],c[100];
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
  ck=0;
  getchar();
    gets(c);

   printf("%s %s",a,b);
   strcpy(str,a);
  bfs(str);
   cout<<str<<" "<<str4<<ck;
    printf("\n");
    for(i=min;i<=max;i++)vc[i].clear();
    visit.clear();
    level.clear();
    }
    return 0;
}
