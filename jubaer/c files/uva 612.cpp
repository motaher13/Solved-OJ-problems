#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
using namespace std;
vector<string>str2[20000];
int main()
{
    string str;
    int i,j,k,l,m,n,count,max=0,du;
    scanf("%d",&du);
    while(du--){
    scanf("%d%d",&n,&m);
            max=0;
    for(i=0;i<m;i++){
      cin>>str;
        count=0;
     for(j=0;str[j];j++){
        for(k=j+1;str[k];k++){
            if(str[j]>str[k])count++;
        }
     }
     if(max<count)max=count;
   str2[count].push_back(str);
    }
   for(l=0;l<=max;l++){
    for(j=0;j<str2[l].size();j++){
        cout<<str2[l][j]<<endl;
    }
    str2[l].clear();

   }
 if(du>0)printf("\n");
    }
    return 0;
}

