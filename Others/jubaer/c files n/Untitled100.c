#include <stdio.h>
#include <math.h>
const int size=40;

void print_ara()
{
     int i;
     int ara[size];
     for(i=2;i<size;i++){
        printf("%4d",ara[i]);
     }
     printf("\n");
     for(i=2;i<size;i++){
        printf("_ _ _ _");
     }
     printf("\n");
     for(i=2;i<size;i++){
        printf("%4d",i);
     }
     printf("\n\n\n");
}
void sieve()
{
     int i,j,root,ara[size];
     for(i=2;i<size;i++){
        ara[i]=1;
     }
     root=sqrt(size);
     for(i=2;i<=root;i++){
          if(ara[i]==1){
             for(j=2;i*j<=size;j++){
                ara[i*j]=0;
             }
             printf_ara();
          }
     }
}
int is_prime(int n)
{
    int i;
    if(n<2){
       return 0;
    }
    return size;
}
int main()
{
    int n;
    sieve();
    while(1){
            printf("enter the number:");
            scanf("%d",&n);
            if(n==0){
               break;
            }
            if(n>=size){
               printf("the number must be less than %d\n",size);
               continue;
            }
            if(1==is_prime){
               printf("%d is a prime number\n",n);
            }
            else{
                printf("%d is not a prime number\n",n);
            }
    }
    return 0;
}


