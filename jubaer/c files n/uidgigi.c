#include<stdio.h>
int main()
{
  char   str1[100][100],str[1000];
  int i,j,k,l,p;
  gets(str);
  p=0,j=0;
  l=strlen(str);
  for(i=0;i<l;i++)
  {
  if(str[i]==' '){

  str1[p][j]='\0';
  j=0;
  p++;
  }
    else
    {
    str1[p][j]=str[i];
 j++;
 }
 if(str[i+1]=='\0'){
    str1[p][j]='\0';
    p++;
 }
  }
 for(i=0;i<p;i++)printf("%s\n",str1[i]);
}
