#include <stdio.h>
int main()
{
    char str[90],*p,**mp;
    p=&str;
    mp=&p;
    printf("enter your desire");
    gets(*mp);
    printf("%s",*mp);
    return 0;
}
