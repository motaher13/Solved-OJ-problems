#include <stdio.h>
int main()
{
    int i,j;
    int marks[4][5];
    for(i=0;i<4;i++){
       for(j=0;j<5;j++){
         scanf("%d ",&marks[i][j]);
       }
    }
    for(j=0;j<5;j++){
       marks[3][j]=marks[0][j]/4.0+marks[1][j]/4.0+marks[2][j]/2.0;
       printf("roll no:%d marks:%d\n",j+1,marks[3][j]);
    }
    return 0;
}
