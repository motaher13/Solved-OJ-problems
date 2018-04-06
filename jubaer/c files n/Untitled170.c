#include <stdio.h>
int main()
{
    int goat,tiger,panpata,alongside;
    printf("guess you are a boatman who has tiger,goat,panpata and you have to cross them the river but you have the ability to carry one at a time.So solve it.");
    printf("enter goat position:");

    scanf("%d",&goat);
    printf("enter tiger position");
    scanf("%d",&tiger);
    printf("enter panpata position");
    scanf("%d",&panpata);
    printf("enter alongside and remember to put it after the first or the problem won't be solved");
    scanf("%d",&alongside);
    if(tiger>panpata>alongside>goat){
    printf("the result is correct but make sure that every time the goat is along side with you.");
    }
    else{
         printf("you are a patha cause you couldn't find the answere ");
    }
    return 0;
}
