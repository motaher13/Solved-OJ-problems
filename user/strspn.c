#include <stdio.h>
#include <string.h>

int main ()
{
   int len;
   const char str1[] = "abcd";
   const char str2[] = "yyyabcjjj";

   len = strspn(str1, str2);

   printf("Length of initial segment matching %d\n", len );

   return(0);
}
