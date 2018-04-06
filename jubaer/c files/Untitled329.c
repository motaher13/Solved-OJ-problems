#include <stdio.h>
int main()
{
    int count[30][30][30];
    int i,j,k;
    for(i=1;i<16;i=i+2)
    for(j=2;j<28;j=j+2)
    for(k=17;k<28;k=k+2)
    count[i][j][k]=i*j*k;
    for(i=1;i<16;i=i+2){
    for(j=2;j<28;j=j+2){
    for(k=17;k<28;k=k+2)
    printf("%d",count[i][j][k]);
    printf("\n");
    }
    }
    return 0;
}
