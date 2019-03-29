#include <stdio.h>
int main()
{
    char str[90];
    int i;
    for(i=0;i<89;i++){
    if(gets(str[i]))putchar(str[i]);
    }
    return 0;







}
