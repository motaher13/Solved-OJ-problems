#include <stdio.h>
int main()
{
    int i,n;


    for(n=1;n<=35;n++){
       for(i=1;i<=10;i++){
         printf("%d*%d=%d\n",i,n,n*i);
       }
    }
    return 0;
}
