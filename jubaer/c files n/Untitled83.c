#include <stdio.h>
int main()
{
    int ara[5]={55,67,89,90,99};
    int low_index=0;
    int high_index=4;
    int mid_index;
    int num=58;
    while(low_index<=high_index){

        mid_index=(low_index+high_index)/2;
        if(num==ara[mid_index]){
           break;
        }
        if(num<ara[mid_index]){
           high_index=mid_index-1;
        }
        else{
           low_index=mid_index+1;
        }
   }
        if(low_index>high_index){
           printf("%d is not array\n",num);
        }
        else{
           printf("%d is in the array.it is the %d element of the array\n",ara[mid_index],mid_index);
        }
        return 0;
}
