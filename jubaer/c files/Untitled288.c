#include <stdio.h>>
int main()
{
    int towd[4][5];
    int i,j;
    for(i=0;i<4;i++)
    for(j=0;j<5;j++)
    towd[i][j]=i*j;
    for(i=0;i<4;i++){
     for(j=0;j<5;j++)
    printf("%d",towd[i][j]);
    printf("\n");
    }

    return 0;
}
