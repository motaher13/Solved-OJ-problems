#include <stdio.h>
int find_max(int ara[]);
int main()
{
    int ara[8]={1,2,3,4,5,6,7,8};

    int max=find_max(ara);
    printf("%d\n",max);
    return 0;
}
int find_max(int ara[])
{
    int max=ara[0];
    int i;
    for(i=1;i<8;i++){
       if(ara[i]>max){
        max=ara[i];
       }
    }
    return max;
}
