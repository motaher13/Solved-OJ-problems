#include <stdio.h>
int main()
{
    char str[90];
    *(str+3)='you are my boss daughter';
    printf("%c",*(str+3));
    return 0;
}
