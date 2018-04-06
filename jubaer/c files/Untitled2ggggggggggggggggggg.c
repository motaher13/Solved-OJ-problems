#include <stdio.h>
#include <string.h>
int main()
{
    int ln;
    char s[15],s1[15];
    scanf("%s%s",s,s1);
    strcat(s1," ");
    strcat(s1,s);
    printf("%s",s1);



     return 0;
}
