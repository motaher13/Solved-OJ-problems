#include <stdio.h>
#include <string.h>
int main()
{
    char saarc[4][100]={"india","bangladesh","london","pakistan"};
    int row,col,length;
    for(row=0;row<4;row++){
        length=strlen(saarc[row]);
        for(col=0;col<length;col++){
          printf("%c",saarc[row][col]);
        }
        printf("\n");
    }
    return 0;
}
