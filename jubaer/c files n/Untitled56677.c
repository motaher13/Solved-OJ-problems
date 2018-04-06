#include <stdio.h>
int main()
{
    int a[5][5],i,j;
    for(j=0;j<3;j++){
    for(i=0;i<3;i++){

    scanf("%d",&a[j][i]);

    }

    printf("next");

    }
    for(j=0;j<3;j++){
            for(i=0;i<3;i++){
    printf("roll %d: %d\n",a[j][i],i);
            }
            printf("\n");
    }
    return 0;

}
