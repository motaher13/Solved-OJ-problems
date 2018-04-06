#include <stdio.h>
int main()
{
    int ara[]={4,8,9,7,6};
    int ara2[5];
    int i,j;
    for(i=0,j=4;i<5;i++,j--){
        ara2[j]=ara[i];
    }
    for(i=0;i<5;i++){
        ara[i]=ara2[i];
    }
    for(i=0;i<5;i++){
        printf("%d\n",ara[i]);
    }
    return 0;
}
