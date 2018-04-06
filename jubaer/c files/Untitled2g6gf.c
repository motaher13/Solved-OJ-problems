#include <stdio.h>
int main()
{
    int ara[]={6,8,9,7,5,-3,-2},i,a=0,b=0;
    for(i=0;i<7;i++){
    if(ara[i]>0){
        printf("pos:%d\n",ara[i]);
        b=b+1;

    }
    else{
            printf("neg:%d\n",ara[i]);
            a=a+1;
    }

}
printf("%d\n",b);
printf("%d",a);
}
