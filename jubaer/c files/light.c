#include <stdio.h>
int main()
{
    char str[10],str2[5],ch;
    int i,j,k,n;
       scanf("%d",&n);
    scanf("%s",str);

    for(i=0;i<n;i++){

   str2[i]=str[i];
    }
     str2[strlen(str)-(n+1)]='\0';
     printf("%s",str2);
}
