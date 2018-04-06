#include <stdio.h>
int main()
{
    char str1[80],str2[80];
    int i;
    printf("enter the first string");
    gets(str1);
    printf("enter the second string");
    gets(str2);
    printf("%s is %d chars long\n",str1,strlen(str1));
    printf("%s is %d chars long\n",str2,strlen(str2));
    i=strcmp(str1,str2);
    if(!i)printf("the strings are equal.\n");
    else if(i<0)printf("%s is less than %s\n",str1,str2);
    else printf("%s is greater than %s\n",str1,str2);
    if(strlen(str1)+strlen(str2)<80){
    strcat(str1,str2);
    printf("%s\n",str1);
    }
    strcpy(str1,str2);
    printf("%s %s\n",str1,str2);
    return 0;
}

