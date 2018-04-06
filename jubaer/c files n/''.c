#include <stdio.h>
#include <limits.h>

int main()
{
    int participants,budget,hotels,weeks;
    while(scanf("%d %d %d %d",&participants,&budget,&hotels,&weeks)==4){
        int i,min=INT_MAX;
        for(i=0;i<hotels;i++){
            int price=0,places=0,j=0;
            scanf("%d",&price);
            int cost=price*participants;
            if(cost<=budget){
                for(j=0;j<weeks;j++){
                    scanf("%d",&places);
                    if(places>=participants&& min>cost)
                        min=cost;
                }
            }else{
                for(j=0;j<weeks;j++){
                    scanf("%d",&places);
                }
            }
        }
        if(min==INT_MAX){
            printf("stay home\n");
        }
        else{
            printf("%d\n",min);
        }
     }
    return 0;
}
