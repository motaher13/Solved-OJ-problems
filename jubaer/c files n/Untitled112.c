#include <stdio.h>
#include <string.h>
int main()
{
    char saarc[3][50]={"india","london","china"};
    int len,i,j;
    for(i=0;i<3;i++){
       len=strlen(saarc[i]);
         for(j=0;j<len;j++){
           printf("(%d, %d)=%c",i,j,saarc[i][j]);
         }
         printf("\n");
    }
    return 0;
}
