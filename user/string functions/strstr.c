#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="asdfgh";
    char str1[6]="as";
    int i=0;
    printf("%d\n",i);
    i=strstr(str,str1);
    printf("%d",i);
}
/*#include <stdio.h>
#include <string.h>
int main ()
{
  char string[50] ="Test   string1 Test,string2:Test:string3";
  char *p;
  printf ("String   \"%s\" is split into tokens:\n",string);
  p = strtok (string," :");
  //printf ("%s\n",p);
  while (p!= '\0')
  {
    printf ("%s\n",p);
    p = strtok ('\0', " :");
    //p = strtok (string," :");
  }
  return 0;
}*/
