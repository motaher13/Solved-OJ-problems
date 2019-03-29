#include<stdio.h>
int main()
{
    int n,i,j=0,c=0,a,b;

    scanf("%d%d",&a,&b);

    for(n=a;n<=b;n++){
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                c++;
                break;
            }
        }
        if(n==1)
            c++;
        if(c==0){
            printf("%d\n",n);
            j++;
        }

        c=0;

    }
    printf("The number of PRIME number between %d to %d is  %d",a,b,j);


    return 0;
}
///between 1 to 10000000,PRIME number is 664579
///between 1 to 1000000,PRIME number is 78498
