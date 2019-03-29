#include <stdio.h>
int main()
{
    int count,answere;
    for(count=1;count<100;count++){
    printf("what is %d+%d",count,count);
    scanf("%d",&answere);

    if(answere==count+count){
            printf("answere is right");
    }
    else{
            printf("you motherfucker anwere is wrong");
            printf("answere is %d",count+count);

    }
    }
    return 0;
}
