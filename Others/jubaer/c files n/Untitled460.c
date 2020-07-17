#include <stdio.h>
int  main()
{
     char *p,str[80];
     printf("enter a string:");
     p=gets(str);
     if(p)printf("%s %s",p,str);
     return 0;




}
