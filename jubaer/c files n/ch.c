#include <stdio.h>
#include <string.h>
int main()
{
    int i,sum=0;
    char s[90];
    scanf("%s",s);
      for(i=0;i<strlen(s);i++){
        sum=sum+s[i];
      }
     printf("%d",sum);


}
