#include <stdio.h>
int main()
{
    char *p,**mp,str[80];
    p=&str;
    mp=&p;
    printf("enter your name");
    gets(*mp);
    printf("%s",*mp);
    return 0;
}
