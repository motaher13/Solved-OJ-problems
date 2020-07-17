#include <stdio.h>
int even_odd(int n);
int main()
{
    int namta[10][10];

    int i,j;
    for(i=0;i<10;i++){
       for(j=0;j<10;j++){
           namta[i][j]=(i+1)*(j+1);
       }
    }
    for(i=0;i<10;i++){
         for(j=0;j<10;j++){
               printf("%d*%d=%d\n",(i+1),(j+1),namta[i][j]);
         }
         printf("\n");

    }

    return 0;
}
int even_odd(int n)
{
    int namta[i][j]=n;
     int k;
     if(n%2==0){
                return 1;
     }
     else{
            return 0;
     }
     for(k=2;k<n;k++){
            if(n%k==0){
                    return 1;
            }
            return 0;
     }
}
int main()
{
    int n;
    while(1){
            if(n%2==0){
                    printf("%d is a even\n",n);
            }
            else{
                    printf("%d is a odd\n",n);
            }
    }
    return 0;
}







