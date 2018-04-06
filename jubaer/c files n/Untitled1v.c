#include <stdio.h>

void tnc(int *a){

    (*a)++;

}
int main()
{
    int a=6;
    printf("%d ",a);
    tnc(&a);
    printf("%d %d",a,a);

}





