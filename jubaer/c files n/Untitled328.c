#include <stdio.h>
int main()
{
    int ball[5][6];
    int i,j;
    for(i=0;i<4;i++)
    for(j=0;j<5;j++){
    printf("%d is quarter of %d player",i+1,j+1);
    printf("enter a number/point");
    scanf("%d",ball[i][j]);
    }
    for(i=0;i<4;i++)
    for(j=0;j<5;j++){
    printf("%d quarter is %d player",i+1,j+1);
    printf("%d\n",ball[i][j]);
    }
    return 0;
}
