#include <stdio.h>
#include <string.h>
int main()
{
    char saarc[4][100]={"bangladesh","london","india","korea"};
    int len,i,j;
    for(i=0;i<4;i++){
       len=strlen(saarc[i]);
       for(j=0;j<len;j++){
         printf("%c",saarc[i][j]);
       }
       printf("\n");
    }
    return 0;
}
