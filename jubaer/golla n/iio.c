#include <stdio.h>
int main()
{
    char str[10000];
    int i,j,k,l,m,ck;
    int ara[1000];
   while(gets(str)){
int    q=0;
    j=0;
    for(i=0;i<strlen(str);i++){
    //if(str[i]=='\n')break;
     if(str[i]!=' '){
    q=q*10+(int)str[i]-48;
    }
    if(str[i+1]==' '||str[i+1]=='\0'){
    ara[j]=q;
    j++;
    q=0;
    }

    }
    for(i=0;i<strlen(str);i++)str[i]='\0';
    for(i=0;i<j;i++)printf("%d ",ara[i]);
    printf("\n");
   }
}
