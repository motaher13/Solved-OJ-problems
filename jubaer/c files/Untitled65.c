#include <stdio.h>
int main()
{
    int ara[5]={2,3,4,5,6};
    int i;
    for(i=4;i>=0;i--){
       printf("%d\n",ara[i],i+1);
    }
    return 0;
}
