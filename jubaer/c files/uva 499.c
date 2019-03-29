#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,l,m,n,t,max;
    char alpha[60],ch;
    int ara[100];
    char str[5000];
    while(gets(str)){
            char  alpha[55]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
     int ara[100]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(k=0;k<52;k++){
    for(j=0;j<strlen(str);j++){
    if((alpha[k]==str[j]))ara[k]++;
    }
    }
    max=0;
    for(i=0;i<51;i++){
    for(j=i+1;j<52;j++){
    if(ara[i]>max)max=ara[i];
    if(ara[i]<ara[j]){
    t=ara[i];
    ara[i]=ara[j];
    ara[j]=t;
    ch=alpha[i];
    alpha[i]=alpha[j];
    alpha[j]=ch;
    }
    if(ara[i]==ara[j]){
            if((int)alpha[i]>(int)alpha[j]){
    ch=alpha[i];
    alpha[i]=alpha[j];
    alpha[j]=ch;
    }
    }
    }
    }
    for(i=0;i<52;i++){
    if(ara[i]==max)
    printf("%c",alpha[i]);
    }
    printf(" ");
     for(i=0;i<52;i++){
    if(ara[i]==max)
    printf("%d",ara[i]);
    }
    printf("\n");
    }
    return 0;
}
