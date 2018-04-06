#include <stdio.h>
int main()
{
    int ara[]={2,3,5,7,11,13,17,19,29,23,31,37,41,43,47,59,61,67,73,79,87,91,97,53,71};
    int n,t=1,r,d,q,j;
    scanf("%d",&n);

    for(;n>0;n--){
    t=t*n;
    }
   // printf("%d",t);
    for(j=0;j<25;j++){
        q=0;

    if(t==1)break;
        r=ara[j];
        while(t%r==0){
            t=t/r;
            q++;
        }
    printf("%d ",q);

    }

}
