#include <stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>=15){
        printf("%d\n",n);
    n++;
    }
    else{
         printf("number is out of range\n",n);
    }
    return 0;
}
