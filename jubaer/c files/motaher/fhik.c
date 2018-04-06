#include <stdio.h>
int main()

{
    long long n, m;
int t;
scanf("%d",&t);
while(t--){
    scanf("%lld%lld", &n,&m );

    if(n<m)
        printf("<");
    else if(n>m)
        printf(">");
    else
        printf("=");
        printf("\n");
        }
        return 0;
}
