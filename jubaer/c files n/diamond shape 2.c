#include <stdio.h>
int main()
{
    int i,j,k,n,m;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2){
    for(j=0;j<(n-i)/2;j++){
    printf(" ");
    }
    for(k=0;k<i;k++){
    printf("*");
    }
    printf("\n");
    }
   m=n-2;
    for(i=m;i>=1;i=i-2){
        for(j=0;j<(n-i)/2;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}
