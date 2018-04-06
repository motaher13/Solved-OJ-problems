#include <stdio.h>
#include <map>
#include <vector>
#include <iostream>
#include <string.h>
#include <queue>
void topsort();
using namespace std;
queue<int>result;
map<string,int>name;
vector<int>vc[250];
int taken[250],indegree[250],n;
char str[250][60],str2[60],str3[60];
void topsort(){
   int i,j,k;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(indegree[j]==0&&taken[j]==0){
            taken[j]=1;
            result.push(j);

            for(k=0;k<vc[j].size();k++){
                indegree[vc[j][k]]--;
            }
            break;
        }
    }

   }
}
   int main()
   {
       int m,p,q,r,s,t,k,l,i,u=1;
       while(scanf("%d",&n)==1){
        name.clear();
       for(i=1;i<=n;i++){
            scanf("%s",str[i]);
           name[str[i]]=i;
        vc[i].clear();
        indegree[i]=0;
        taken[i]=0;
       }
       scanf("%d",&m);
       for(i=1;i<=m;i++){
        scanf("%s%s",str2,str3);
        k=name[str2];
        l=name[str3];
        vc[k].push_back(l);
        indegree[l]++;
       }
       topsort();
       printf("Case #%d: Dilbert should drink beverages in this order: ",u++);
       while(!result.empty()){
           if(result.size()>1)
        printf("%s ",str[result.front()]);
       else  printf("%s.",str[result.front()]);
        result.pop();
       }
       printf("\n\n");
       }
       return 0;
   }






