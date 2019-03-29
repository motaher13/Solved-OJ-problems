#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
int i,j,k,r;
char str[1000];
string ch;
    map<string,int>name;
    i=0;
    r=0;
    while(i<5){
            i++;
    /*for(i=0;i<3;i++){
   cin>>str>>j;
    name[str]=j;

    }*/
 cin>>str;
 j=1;
 if(name.find(str)!=name.end())name[str]++;
 else name[str]=j;
if(r<name[str]){
        r=name[str];
    ch=str;
}
    }
  cout<<ch;
}
