#include <stdio.h>
#include <string.h>

int main ()
{
   int len;
   const char str1[] = "ABCABDEFG019874";
   const char str2[] = "kyyyuAiBC";

   len = strspn(str1, str2);

   printf("Length of initial segment matching %d\n", len );

   return(0);
}
