#include <stdio.h>
int main()
{
    int ball[78][67];
    int i,j;
    ball[i][j]=0;
    for(i=0;i<2;i++)
    for(j=0;j<3;j++){
    ball[i][j]++;
    }
    printf("%d",ball[i][j]);

    return 0;
}
