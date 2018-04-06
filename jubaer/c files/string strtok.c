#include <string.h>
#include <stdio.h>

int main()
{
  // char str[80] = "This is - www.tutorialspoint.com - website";
  char str[1000],str1[100][1000];
  gets(str);
   //const char s[2] = " ";
    int i,j,p;
   char *token;

   /* get the first token */

   token = strtok(str, " ");

  // else  token = strtok(str, s1);
   /* walk through other tokens */
   p=1;
   while( token != NULL )
   {
     // printf( " %s\n", token );
     strcpy(str1[p],token);
     p++;
     token = strtok(NULL, " ");

   }
   for(i=1;i<p;i++)printf("%s\n",str1[i]);

   return(0);
}
