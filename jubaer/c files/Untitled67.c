#include <stdio.h>
int main()
{
    int ara[]={5,7,6,9,8};
    int i,j,temp;
    for(i=0,j=4;i<5;i++,j--){
        temp=ara[j];
        ara[j]=ara[i];
        ara[i]=temp;
    }
    for(j=4;j>=0;j--){
        printf("%d\n",ara[j]);
    }
    return 0;
}
