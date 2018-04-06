#include<stdio.h>
int main(){

    int lol,upl,count,temp=0,i;
    while(scanf("%d %d",&lol,&upl)!=EOF){

    //evaluate max loop for input range
    for(;lol<=upl;lol++){

        //loop to count individual loop number
        for(i=lol,count=0;i!=1;){
            if(i%2==0){ //even number
                i/=2;
            }
            else{ // odd number
                i=3*i+1;
            }
            count++;
        }
        //update to compare recent count loop
        if(temp<count){
            temp=count;
        }
    }
    printf("%d\n",temp);
    }
return 0;
}
