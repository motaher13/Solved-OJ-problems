#include <stdio.h>
int main()
{
    char s1[100]="my name is sarif";
    char s2[100]="abcdefghijklmnopqrstuvw xyz";
    strcat(s1,"");
    strcat(s1,s2);
    printf("%s",s1);


    return 0;
}
