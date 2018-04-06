#include <stdio.h>
int main()
{
    int n,i,a,b,c;

   scanf("%d",&n);
            i=0;
    while(n--){
    scanf("%d%d%d",&a,&b,&c);
    if((a>b&&a<c)||(a<b&&a>c)){
    printf("case %d: %d",i+1,a);
    }
    else if((b>a&&b<c)||(b<a&&b>c)){
    printf("case %d: %d",i+1,b);
    }
    else{
    printf("case %d: %d",i+1,c);
    }
    i++;
    printf("\n");
    }

    return 0;
}
