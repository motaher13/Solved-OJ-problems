#include <stdio.h>
int main()
{
    long long a,b,c,d,n,i;
    scanf("%lld",&n);
    while(n--){
        scanf("%lld",&a);
        if(a>=0){
            for(i=0;i<=a;i++){
                printf("%lld",i);
                if(i<a)printf(" ");
            }
        }
        else if(a<0){
            for(i=a;i<=0;i++){
                printf("%lld",i);
                if(i<0)printf(" ");
            }
        }
        printf("\n");
    }
        return 0;

}
