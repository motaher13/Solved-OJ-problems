#include <stdio.h>
int main()
{
    int n,i;
    n=67;
    i=1;
    for(;;){
         printf("%d*%d=%d\n",n,i,n*i);
         i++;
         if(i>10){
            break;
         }
    }
    return 0;
}
