#include <stdio.h>
int main()
{
    long long i,j,k,t,m,ara[1000],f;
    i=10000;


    for(i=1;i<=6;i=i+1){
    //f=i;
    if(f%62==0){
            f=i;
            m=f/62;

            for(j=0;j<10;j++){
                    if(j<5){
                            ara[j]=f%10;
                    f=f/10;
                    }
                else {
                        ara[j]=m%10;
                m=m/10;
                }
            }
            for(j=0;j<9;j++){
     for(k=j+1;k<10;k++){
           if(ara[j]==ara[k]){
                break;
           }
           else if(j==8){
                printf("%lld\n",i);
           }
     }
            }

    }
}
    }
