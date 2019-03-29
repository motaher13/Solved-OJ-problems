//sscanf

/*#include<stdio.h>
int main()
{
    char str[]="123 456";
    char a[10],b[10];
    sscanf(str,"%s %s",a,b);
    printf("%s\n",a);
    printf("%s",b);
}*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[]="mmmm 4";
    int eggcount;
    float cost;
    sscanf(str,"mmmm %d",&eggcount);
    printf("%d",eggcount);
}

//sprintf

/*#include <stdio.h>

int main()

{

char *stringa[30];

int *fingers = 5;

sprintf(stringa, "Number of fingers making up a hand are %f", fingers);

puts(stringa);

return(0);

}*/



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
