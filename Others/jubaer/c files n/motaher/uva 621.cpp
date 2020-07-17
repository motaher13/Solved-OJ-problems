#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    char str[10000];
    int i,j,k;
    cin>>k;
    while(k--){
    cin>>str;
    if(str[strlen(str)-1]=='5'&&str[strlen(str)-2]=='3'){
    cout<<"-"<<endl;
    }
    else if(strcmp(str,"1")==0||strcmp(str,"4")==0||strcmp(str,"78")==0){
    cout<<"+"<<endl;
    }
    else if(str[0]=='1'&&str[1]=='9'&&str[2]=='0')cout<<"?"<<endl;
    else if(str[0]=='9'&&str[strlen(str)-1]=='4')cout<<"*"<<endl;
    }
return 0;

}
