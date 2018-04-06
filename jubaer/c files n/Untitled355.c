#include <stdio.h>
int main()
{
    char str[80];
    *(str+1)='c';
    printf("%c",*(str+1));
    return 0;
}
