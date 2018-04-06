#include <stdio.h>
#include <map>
#include <string>
#include<iostream>
#include <string.h>
using namespace std;
int main()
{
    int n,m;
    map<string,string>name;
    string str,str2;
    char oi[10000];
    while(scanf("%d%d",&n,&m)==2){
    while(n--){
        cin>>str>>str2;
        name[str]=str2;
    }
    while(m--){
        cin>>oi;
        if( name.find(oi)== name.end() ) {
          if(oi[strlen(oi)-1]=='y'&&(oi[strlen(oi)-2]!='a'&&oi[strlen(oi)-2]!='e'&&oi[strlen(oi)-2]!='i'&&oi[strlen(oi)-2]!='o'&&oi[strlen(oi)-2]!='u')){
            oi[strlen(oi)-1]='i';
            printf("%ses",oi);
          }
          else if(oi[strlen(oi)-1]=='o'||oi[strlen(oi)-1]=='s'||oi[strlen(oi)-1]=='x'){

            printf("%ses",oi);
          }
          else if(oi[strlen(oi)-1]=='h'&&(oi[strlen(oi)-2]=='c'||oi[strlen(oi)-2]=='s')){
            printf("%ses",oi);
          }
          else printf("%ss",oi);
        }
        else {
         cout<<name[oi];
        }
        printf("\n");
        }
        name.clear();
}
return 0;
}
