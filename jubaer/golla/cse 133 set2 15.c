#include <stdio.h>
int main()
{
    int i,p,n,mul,k;
    while(scanf("%d%d",&n,&p)){
            if(n==0&&p==0)break;
    mul=1;
    for(i=1;i<=p;i++){
    mul=mul%100007;
    k=n%100007;
    mul=(mul*k)%100007;
    }
    printf("%d\n",mul);
    }
return 0;
}
