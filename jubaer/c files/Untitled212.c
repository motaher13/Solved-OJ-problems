#include <stdio.h>
int main()
{
    int answere,chance,count;
    for(count=1;count<11;count++){
    printf("what is %d+%d",count,count);
    scanf("%d",&answere);
    if(answere==count+count)printf("you are right");
    else{
    printf("answere is wrong");
    printf("try again");
    for(chance=0;chance<3;chance++){
    printf("what is %d+%d",count,count);
    scanf("%d",&answere);
    if(answere==count+count)printf("you are right now");
    else{
    printf("you are wrong again");
    printf("try again");
    }
    }
    printf("you are doomed");
    printf("the right answere %d",count+count);
    }
    }
    return 0;
}
