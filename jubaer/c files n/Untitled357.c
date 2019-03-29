#include <stdio.h>
int main()
{
    char str[78];
    *(str+3)='c';
    printf("%c",*(str+3));
    return 0;
}
