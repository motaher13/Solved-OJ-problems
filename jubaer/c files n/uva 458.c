#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    int i,j;
    while(gets(str)){
    for(i=0;i<strlen(str);i++){
            j=(int)str[i]-7;
    printf("%c",(char)j);
    }
    printf("\n");
    }
 return 0;

}
