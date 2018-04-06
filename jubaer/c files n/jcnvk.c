#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000000];
    int i,j,k,l,m,ck,n;
    while(gets(str)){
    ck=1;
    for(i=strlen(str)-1;i>=0;i--){
    if(str[i]==']'){
    ck=0;
    l=i;
    }
    if(str[i]=='['&&ck==0){
    for(k=i+1;k<l;k++){
    printf("%c",str[k]);
    }
    ck=1;
    }
    }
      ck=1;
    for(i=0;str[i];i++){
         if(str[i]=='['){
            ck=0;
        }
        if(str[i]==']')ck=1;
        if(ck==1&&str[i]!=']'&&str[i]!='[')printf("%c",str[i]);
    }
    printf("\n");
    }
    return 0;
}
