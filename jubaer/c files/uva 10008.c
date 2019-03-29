#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,l,m,n,t;
    char alpha[30]="abcdefghijklmnopqrstuvwxyz",ch;
    int ara[100]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char str[500][1000];
    scanf("%d",&n);
    for(i=0;i<n+1;i++){
    gets(str[i]);
    for(k=0;k<26;k++){
    for(j=0;j<strlen(str[i]);j++){
    if((alpha[k]==str[i][j])||((int)alpha[k]==((int)str[i][j]+32)))ara[k]++;
    }
    }
    }
    for(i=0;i<25;i++){
    for(j=i+1;j<26;j++){
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
    for(i=0;i<26;i++){
            if(ara[i]!=0)
    printf("%c %d\n",alpha[i]-32,ara[i]);
    }
    return 0;
}
