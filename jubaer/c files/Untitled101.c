#include <stdio.h>
#include <math.h>
const int size=40;

int is_prime(int n);
void print_ara()
{
     int i;
     int ara[size];
     for(i=2;i<size;i++){
        printf("%4d",ara[i]);
     }
     printf("\n");
     for(i=2;i<size;i++){
        printf("_ _ _");
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
     for(i=2;i<=root;i++){
        if(ara[i]==1){
          for(j=2;i*j<=size;j++){
            ara[i*j]=0;
          }
          print_ara();
        }
     }
}
int is_prime(int n)
{
    int i,ara[size];
    if(n<2){
       return 0;
    }
    if(n==2){
        return 1;
    }
    for(i=2;i<n/2;i++){
         if(n%i==0){
             return 0;
         }
       return 1;

    }
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
             printf("number must be less than %d\n",size);
          }
          if(1==is_prime(n)){
              printf("%d is a prime number\n",n);
          }
          else{
              printf("%d is not a prime number\n",n);
          }
    }
          return 0;
}

