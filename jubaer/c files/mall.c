#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *str;
    str=(int *)calloc(5,4);
    str[4]=5;
    printf("%d",str[4]);
    str=(int *)realloc(10,4);

    printf("%d",str[4]);

    free(str);

}
