#include <stdio.h>
int find_max(int ara[5]);
int main()
{
    int ara[5]={45,67,87,90,12};
    int max=find_max(ara);
    printf("%d\n",max);
    return 0;
}
int find_max(int ara[5])
{
    int max=ara[0];
    int i;
    for(i=1;i<5;i++){
       if(ara[i]>max){
         max=ara[i];
       }
    }
    return max;
}
