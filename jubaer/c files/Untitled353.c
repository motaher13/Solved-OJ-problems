#include <stdio.h>
int main()
{
    char a[56]="you can suck my dick";
    int i;
    int *p;
    p=a;
    for(i=0;p[i];i++)
    printf("%d",p[i]);
    return 0;
}
