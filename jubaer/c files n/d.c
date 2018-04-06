#include <stdio.h>
//#include <malloc.h>
int main()
{
    char a1[90]="josvj jnckn",a2[90]="jnvm jcsn";
    char t[90];
   // t=(char*)malloc(100);
    strcpy(t,a1);
    strcpy(a1,a2);
    strcpy(a2,t);
printf("%s\n %s",a1,a2);

    return 0;
}
