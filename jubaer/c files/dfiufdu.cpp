#include <stdio.h>
#include <queue>
#include <iostream>
#include <map>
using namespace std;
map<string,int>name;
string str2;
int count;
void bfs()
{
    int i,v;
    queue<string>q;
    for(i=97;i<=122;i++){
            string str;
       str=str+(char)i;
        q.push(str);
      str='\0';
    }
count=0;
    while(!q.empty()){
            count++;
    str2=q.front();
    name[str2]=count;
    if(str2=="vwxyz"){
            break;
    }
    q.pop();
   if(str2.size()<5){
    v=(int)str2[str2.size()-1];
   for(i=v+1;i<=122;i++){
        string str;
    str=str2+(char)i;
    if(str.size()<=5)
    q.push(str);
   }
    }
    }

}
int main()
{
    bfs();
 while(cin>>str2){
   printf("%d",name[str2]);
   printf("\n");
 }
   return 0;
}
