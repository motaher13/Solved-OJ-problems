#include <stdio.h>
int main()
{
    int count[10][5];
    int i,j;
    for(i=0;i<9;i++)
    for(j=0;j<5;j++)
    count[i][j]=i*j;
    for(i=0;i<9;i++){
    for(j=0;j<5;j++)
    printf("%d",count[i][j]);
    printf("\n");
    }
    return 0;
}
