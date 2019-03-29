#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,ck,n,kk;
    char str[1000];
    scanf("%d",&n);
    while(n--){
    scanf("%s",str);
    if(strlen(str)==1)printf("No\n");
    else{
    ck=0;

    for(i=0,j=strlen(str)-1;j>=0;j--,i++){
   if(str[i]=='('&&str[j]!=')')ck=1;
    else if(str[i]=='['&&str[j]!=']')ck=1;
     else if(str[i]=='{'&&str[j]!='}')ck=1;
    }
    if(ck==1)printf("No\n");
    else printf("yes\n");
    }
    }
    return 0;
}
