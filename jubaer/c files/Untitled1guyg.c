#include <stdio.h>
int main()
{
    char str[90];
    while(scanf("%s%*c",str,'\r')){
     if(str[1]!='\r')

    printf("%s\n",str);

  else return 0;

    }



  return 0;

}
