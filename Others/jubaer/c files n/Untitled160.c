#include <stdio.h>
int main()
{
    int s,i;
    for(s=1;s<12;s++){
       for(i=1;i<10;i++){
        printf("%d * %d=%d\n",i,s,i*s);
       }
    }
    return 0;
}
