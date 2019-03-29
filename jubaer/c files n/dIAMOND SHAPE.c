#include <stdio.h>
int main()
{
    int i,n,j,k,l;
    scanf("%d",&n);
    l=n;
    for(i=n;i>0;i=i-2){

    for(j=0;j<(n-i)/2;j++){
    printf(" ");
    }
    for(k=i;k>0;k--){
    printf("%d",l);
    }
    l--;
    printf("\n");
    }










}
