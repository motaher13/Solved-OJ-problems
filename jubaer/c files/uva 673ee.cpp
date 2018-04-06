#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    int i,j,ck,top;
    char str[256],stack[256];
    cin>>j;
    getchar();
    while(j--){
    gets(str);
    ck=1;
    top=0;
    stack[top]='\0';
    for(i=0;str[i];i++){
    if(str[i]==' ')continue;
    else{
    if(str[i]=='('||str[i]=='['){
        top=top+1;
    stack[top]=str[i];
    }
   else if((str[i]==')'&&stack[top]=='(')||(str[i]==']'&&stack[top]=='[')){
   top=top-1;
   }
    else{
    ck=0;
    break;
    }
    }
    }
   if(ck==0||top>0)printf("No\n");
   else printf("Yes\n");
    }
    return 0;
}
