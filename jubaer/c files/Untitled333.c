#include <stdio.h>
int main()
{
    int ara[10][3];
    int i,j;
    for(i=0;i<10;i++)
    for(j=0;j<3;j++)

    ara[i][j]=i*i,i,i*i*i;


    for(i=0;i<10;i++){
    for(j=0;j<3;j++)
    printf("%d",ara[i][j],ara[i][j]);
    printf("\n");

    }
    return 0;
}
