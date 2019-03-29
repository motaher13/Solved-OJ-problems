#include <stdio.h>
#define lt 10000
#define et 1000
 int ara[lt];
 int ara2[et];
int main()
{
int i,j,k,l;

    for(i=2;i<=lt;i++){
    ara2[i]=1;
    }
    j=0;
    for(i=2;i<=lt;i++){
    if(ara2[i]==1){
    ara[j]=i;
    j++;
    for(k=2;i*k<=lt;k++){
    ara2[k*i]=0;
    }
    }
    }
    for(l=0;l<j;l++){
    printf("%d\n",ara[l]);
    }
}
