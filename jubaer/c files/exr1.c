#include <stdio.h>
int main()
{
    int i,l=0,k=0,ara[10],t;
    char str[90];
    scanf("%d",&t);
    while(t--){
            gets(str);
            l=0;

    for(i=0;str[i]!='\0';i++){

     if((int)str[i]==32){
    l++;
    }


    ara[i]=l;
    }
    for(i=0;i<=t;i++){
        printf("%d\t",ara[i]);
    }
}

