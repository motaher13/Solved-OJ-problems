//strncpy
#include<stdio.h>
int main()
{
    char str[20];
    char str1[10];
    strcpy(str1,"uiop");
    strncpy(str,str1,3);
    //str[3]='\0';
    printf("%s",str);

}
