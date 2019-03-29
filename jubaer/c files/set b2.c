#include <stdio.h>
int main()
{
    char str[10][20];
    int i,j,k,n;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
    scanf("%s",str[i]);
    printf("\n");
    }
    printf("\n\n");
    for(j=0;j<k;j++){
    for(i=n-1;i>=0;i--){
    printf("%c",str[i][j]);

    }
 printf("\n\n\n");
    }
}
