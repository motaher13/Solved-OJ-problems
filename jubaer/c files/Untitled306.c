#include <stdio.h>
int main()
{
    char str[80];
    *(str+2)='hgjk';
    printf("%c",*(str+2));
    return 0;
}
