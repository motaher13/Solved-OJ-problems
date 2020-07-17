#include <stdio.h>
int main(){
    char str[10][80];
    int i,j,l,k,n,ara[10];
    scanf("%d",&n);
    for(k=0;k<n+1;k++){
            l=0;
    gets(str[k]);

    for(i=0;i<strlen(str[k]);i++){
    if(str[k][i]==32){
    l++;

    }

    }
     printf("%d\n",l);
    }
   // for(k=0;k<n;k++){
            //printf("%d taka\n",ara[k]*420);
    //}
}
