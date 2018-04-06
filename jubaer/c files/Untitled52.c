#include <stdio.h>
int main()
{
    int ara[5]={10,20,30,40,50};
    int i;
    for(i=4;i>=0;i--){
        printf("%d element is:%d\n",i+1,ara[i]);
    }
    return 0;
}
