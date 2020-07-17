#include<stdio.h>
 #include<string.h>
 int main()
 {
   char s[300][300];
   int k=0,i,j,max=0;
   while(gets(s[k]))
   k++;
   for(i=0;i<k;i++)
   {
     int len=strlen(s[i]);
     if(len>max)
      max=len;
     for( j=len;j<100;j++)
      s[i][j]=' ';
      s[0][100]='\0';
   }
   for( i=0;i<max;i++)
   {
     for(j=k-1;j>=0;j--)
      printf("%c",s[j][i]);
      printf("\n");
   }
   return 0;
 }
