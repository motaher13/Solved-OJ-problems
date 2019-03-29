#include <stdio.h>
int main()
{
    int a,b,c,i,t;
    while(scanf("%d",&t)!=EOF){
            i=0;
            while(t--){
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&b<c){
    printf("%d %d",b,i+1);
    }
    else if(a<c&&c<b){
    printf("%d %d",c,i+1);
    }
    else{
    printf("%d %d",a,i+1);
    }
    i++;
    printf("\n");
    }
    printf("\n");
    }
}
