#include <stdio.h>
#define li 18409900
char  str[18500000];
int ara2[1000000],ara3[1000000];
int main()
{
    int i,j,k,l,ck,a=0,t=1;
    for(i=3;i<=li;i=i+2){
    str[i]='1';
    }
    k=1;
    for(i=3;i<=li;i=i+2){
    if(str[i]=='1'){
    if((i-a)==2){
       ara2[t]=a;
       ara3[t]=i;
       t++;
    }
    a=i;
    k++;
    }
    for(j=3;j*i<=li;j=j+2){
    str[j*i]='0';
    }
    }
    while(scanf("%d",&j)==1){
        printf("(%d, %d)\n",ara2[j],ara3[j]);
    }
    return 0;

}
