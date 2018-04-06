#include <stdio.h>
#include <string.h>
char str[2000000];
int main()
{
    int i,j,k,l;
    while(gets(str)){
    l=strlen(str);
    for(i=strlen(str)-1;i>=0;i--){
    if(str[i]==']')l=i;
    if(str[i]=='['){
    for(j=i+1;j<l;j++){
    if(str[j]!=']'&&str[j]!='['&&str[j]!=' '){
    printf("%c",str[j]);
    str[j]=' ';
    }
    }
    l=i;
    }
    }
    for(i=0;str[i];i++){
    if(str[i]!=' '&&str[i]!='['&&str[i]!=']')printf("%c",str[i]);
    }
    printf("\n");
    }
    return 0;
}
