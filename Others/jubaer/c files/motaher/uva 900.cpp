#include <iostream>
#include <string>
#include <map>
char str[5000],str2[5000000];
using namespace std;
int main()
{
int i,j,k,r,l,d;
string ch;

   while(cin>>k>>str2){
        map<string,int>name;
    r=0;
  for(i=0;str2[i];i++){
    for(l=0,d=i;l<k;l++,d++)str[l]=str2[d];
    str[l]='\0';


 if(name.find(str)!=name.end())name[str]++;
 else name[str]=1;
if(r<name[str]){
        r=name[str];
    ch=str;
}
    }
  cout<<ch<<endl;
   }
   return 0;
}
