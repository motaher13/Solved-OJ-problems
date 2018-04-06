#include <stdio.h>
#include <string.h>
int main()
{
    int a[35],b[35],c[35],t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    scanf("%d%d%d",&a[i],&b[i],&c[i]);
    }
    for(i=0;i<t;i++){
    if(a[i]-b[i]==b[i]-c[i]&&(double)a[i]/b[i]==(double)b[i]/c[i]){
            printf("BOTH");
    }
    else if(a[i]-b[i]==b[i]-c[i]){
            printf("ARITHMATIC PROGRESSION");
    }
    else if((double)a[i]/b[i]==(double)b[i]/c[i]){
        printf("GEOMATRIC PROGRESSION");
    }
    else {
            printf("NONE");
    }
    printf("\n\n");
    }
    return 0;
}
