#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int i,j,k,ck;
    while(gets(str)){
    if(strcmp(str,"0")==0)break;
    k=0;
    for(i=0;i<strlen(str);i++){
    k=k+(int)str[i]-48;
    }
    if(k%9==0)ck=0;
    else ck=1;
    j=0;
    while(k!=0){
    k=k/10;
    j++;
    }
    if(ck==0)printf("%s is a multiple of 9 and has 9-degree %d.\n",str,j);
    else if(ck==1)printf("%s is not a multiple of 9.\n",str);
    }
    return 0;
}
