#include <stdio.h>
int main()
{
    int a;
    printf("put the number:");
    scanf("%d",&a);
    for(;a>0;a--){
       printf("%d\n",a);
       printf("\a");
    }
    return 0;
}
