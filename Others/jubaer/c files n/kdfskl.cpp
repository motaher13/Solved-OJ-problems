#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
priority_queue<string>name;
int visited[1100];
string str4[1100];
char str[1100][30],str2[100],str3[1000][30];
int main()
{
    int n,i=0,j,k,l,m,ck;
    while(1){
        scanf("%s",str[i]);
    if(strcmp(str[i],"#")==0)break;
    visited[i]=0;
    for(j=0;str[i][j];j++){
        str3[i][j]=tolower(str[i][j]);
    }
    sort(str3[i],str3[i]+strlen(str3[i]));
    i++;
    }
   k=i;
   l=0;
   for(i=0;i<k;i++){
        ck=0;
    for(j=i+1;j<k;j++){
            if(visited[j]==0){
        if(strcmp(str3[i],str3[j])==0){
                visited[j]=1;
                ck=1;
        }
            }
    }
    if(visited[i]==0&&ck==0){
        name.push(str[i]);
        visited[i]=1;
        l++;
    }
   }
   l=0;
   while(!name.empty()){
       str4[l]=name.top();
       l++;
    name.pop();
   }
   for(j=l-1;j>=0;j--){
    cout<<str4[j]<<endl;
   }
   return 0;
}
