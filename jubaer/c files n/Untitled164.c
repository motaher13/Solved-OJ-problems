#include <stdio.h>
int main()
{
    int count,answere;
    for(count=1;count<12;count++){
       printf("what is:%d+%d",count,count);
       scanf("%d",&answere);
       if(answere==count+count){
       printf("you are a great fucker but you are right");
       }
       else{
       printf("you are pussy and wrong");
       printf("the answere is %d",count+count);
       }
    }
    return 0;
}
