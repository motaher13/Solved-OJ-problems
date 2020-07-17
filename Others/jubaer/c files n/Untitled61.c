#include <stdio.h>
int find_max(int max[],int n);
int main()
{

    int ara[]={9,199,-67,57,89};
    int n=5;
    int max=find_max(ara,n);
    printf("%d\n",max);
    return 0;
}
int find_max(int ara[],int n)
{
    int max=ara[0];
    int i;
    for(i=1;i<n;i++){
       if(ara[i]>max){
         max=ara[i];
       }
    }
    return max;
}
