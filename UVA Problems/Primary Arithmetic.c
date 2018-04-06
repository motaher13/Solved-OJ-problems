#include<stdio.h>
int main()
{
    long long k=0,l=0,i,j;
    while(scanf("%lld %lld",&i,&j)==2)
    {
        if(i==0 && j==0){
            break;
            }
        while(1)
        {
            k=((i%10)+(j%10)+k)/10;
            i=i/10;
            j=j/10;
            if (k==1){
                l++;
            }
            if(i==0 && j==0)
                break;
        }
        if(l==0){
            printf("No carry operation.\n");
            }
        else if (l==1)
        {
        printf("%lld carry operation.\n",l);
        }
        else{
        printf("%lld carry operations.\n",l);
        }
        l=0,k=0;
    }
    return 0;

}
