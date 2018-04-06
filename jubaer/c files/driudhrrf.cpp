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
       int m,p,q,r,s,t,k,l,i;
       scanf("%d",&n);
       for(i=1;i<=n;i++){
        vc[i].clear();
        indegree[i]=0;
        taken[i]=0;

       }
       name.clear();
       scanf("%d",&m);
       for(i=1;i<=m;i++){
        scanf("%d%d",&k,&l);
        vc[k].push_back(l);
        indegree[l]++;
       }
       topsort();
       while(!result.empty()){
        printf("%d ",result.front());
        result.pop();
       }
       return 0;
   }






