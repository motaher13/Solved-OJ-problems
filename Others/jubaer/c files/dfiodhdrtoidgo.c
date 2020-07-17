#include <stdio.h>
#include <stdlib.h>
int main()
{
   char str[100],rev[236287];
   gets(str);
   int i;
   for(i=0;str[i];i++){
    rev[i]=tolower(str[i]);
   }
   printf("%s\n%s",rev,str);


}
