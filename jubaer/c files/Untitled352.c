#include <stdio.h>
int main()
{
    char str[90]="you are a gadha";
    int i;
    char *p;
    p=str;
    for(i=0;p[i];i++){
    printf("%c",p[i]);
    }
    return 0;
}
