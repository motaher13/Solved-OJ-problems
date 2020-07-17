#include <stdio.h>
int main()
{
    int serverusers[5][2]={
    1,14,
    2,28,
    3,19,
    4,8,
    5,15
    };
    int server;
    int i;
    printf("enter the server number:");
    scanf("%d",&server);
    for(i=0;i<5;i++)
    if(server==serverusers[i][0]){
    printf("there are %d users on server %d\n",serverusers[i][1],server);
    break;
    }
    if(i==5)printf("server not listed");
    return 0;
}
