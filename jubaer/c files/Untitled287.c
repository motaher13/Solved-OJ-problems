#include <stdio.h>
#include <string.h>

int main()
{
    char str1[78],str2[78];
    int i;
    printf("enter the first one");
    gets(str1);
    printf("enter the second one");
    gets(str2);
    printf("%s is the %d char str1\n ",str1,strlen(str1));
    printf("%s is the %d char str2\n",str2,strlen(str2));
    i=strcmp(str1,str2);
    if(!i)printf("the strings are equal");
    else if(i<0)printf("%s is greater than %s",str2,str1);
    else printf("%s is greater than %s\n",str1,str2);
    if(strlen(str1)+strlen(str2)<80){
    strcat(str1,str2);
    printf("%s\n",str1);
    }
    strcpy(str1,str2);
    printf("%s ",str1);
    return 0;
}
