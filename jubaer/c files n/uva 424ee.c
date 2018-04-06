#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000][1000];
    int sum[1000];
    int i,j,k,l,r,max=0,p,q,t,m,d,ara[1000];
    for(i=0;;i++){
    scanf("%s",str[i]);
    if(strcmp(str[i],"0")==0)break;
    ara[i]=strlen(str[i]);
    if(max<strlen(str[i])){
     max=strlen(str[i]);
     }
    }
    for(m=0;m<i;m++){
    if(strlen(str[m])<max){
    for(d=strlen(str[m]);d<max;d++){
    str[m][d]='0';
    }
    }
    }
    for(m=0;m<i;m++){
    for(p=ara[m]-1,q=max-1;p>=0;p--,q--){
            if(str[m][q]=='0'){
    t=str[m][p];
    str[m][p]=str[m][q];
    str[m][q]=t;
            }
    }
    }
    k=0;
    for(j=max-1;j>=0;j--){
   for(l=0;l<i;l++){
   k=k+(int)str[l][j]-48;
   }
   r=k%10;

   sum[j]=k%10;
   k=k/10;
   }
   if(k>0)printf("%d",k);
   for(j=0;j<=max-1;j++)printf("%d",sum[j]);
    printf("\n");
    return 0;
}
