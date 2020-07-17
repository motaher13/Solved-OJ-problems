#include <stdio.h>
int main()
{
    int s,i;
    printf("enter the bullshit digit:");
    scanf("%d",&s);
    for(;s<78;s++){
       for(i=1;i<11;i++){
       printf("%d * %d=%d\n",i,s,i*s);
       }
    }
    return 0;
}
