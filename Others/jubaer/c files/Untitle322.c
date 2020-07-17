#include <string.h>
#include <stdio.h>
int main()
{
    char str1[80],str2[80];
    int i;
    printf("enter str1");

    gets(str1);
    printf("enter str2");
    gets(str2);
    i=strcmp(str1,str2);
    if(!i)printf("both are equal");
    if(i<0)printf("%s is less than %s",str1,str2);
    if(i>0)printf("%s is greater than %s",str1,str2);
    if(strlen(str1)+strlen(str2)<80){
    strcat(str1,str2);
    printf("%s",str1);
    }
    strcpy(str1,str2);
    printf("%s %s\n",str1,str2);
    return 0;
}
