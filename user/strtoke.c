#include <stdio.h>
#include <string.h>
int main ()
{
  char string[50] ="Test   string1 Test,string2:Test:string3";
  char *p;
  printf ("String   \"%s\" is split into tokens:\n",string);
  p = strtok (string," ,:");

  while (p!= '\0')
  {
    printf ("%s\n",p);
    p = strtok ('\0', " ,:");

  }
  return 0;
}
