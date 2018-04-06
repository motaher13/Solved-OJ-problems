#include <stdio.h>
#include <string.h>
int main()
{
    char str[758],str1;
    scanf("%s",str);
    //printf("%s",str);
    strcpy(str+strlen(str),"ay");
    printf("%s",str+1);

}
