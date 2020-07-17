#include <stdio.h>
int main()
{
    int a,b,p,q,n;
    scanf("%d",&n);
    while(n--){
    scanf("%d%d",&a,&b);
    if(((a+b)%2)!=0||(((a-b)%2)!=0)||((a+b)/2)<0||((a-b)/2)<0){
    printf("impossible\n");
    }
    else{
    p=(a+b)/2;
    q=(a-b)/2;
    printf("%d %d\n",p,q);
    }
    }
    return 0;
}
