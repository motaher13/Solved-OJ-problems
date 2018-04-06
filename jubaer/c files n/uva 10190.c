#include <stdio.h>
long long ara[5000000];
int main()
{
    long long a,b,i,j,k,ck;
    while(scanf("%lld%lld",&a,&b)!=EOF){
            if(b==1||b==0||a==0||a==1)printf("Boring!");
    else{
    ara[1]=a;
    ck=1;

    for(i=2;a!=1;i++){
            if(a%b!=0){
        ck=0;
    break;
            }
    a=a/b;
    ara[i]=a;
     if(a%b!=0&&a!=1){
            ck=0;
    break;

    }
    }
    if(ck==0)printf("Boring!");
    else if(ck==1){
            for(j=1;j<i;j++){
                printf("%lld",ara[j]);
                if(j!=i-1)printf(" ");
            }
    }
    }
    printf("\n");
    }
    return 0;
}
