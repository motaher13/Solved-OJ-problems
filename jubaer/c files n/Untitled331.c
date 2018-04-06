#include <stdio.h>
int main()
{
    int server,i;
    int serverusers[5][2]={
    1,14,
    2,28,
    3,19,
    4,67,
    5,45
    };
    printf("enter the number of server users");
    scanf("%d",&server);
    for(i=0;i<5;i++)
    if(server==serverusers[i][0]){
    printf("%d is the no of users of %d server",serverusers[i][1],server);

    break;
    }
    if(server==5)printf("server was not found");
    return 0;
}
