#include<stdio.h>
#include<math.h>
int main()
{
    int i,j=4;
    int binary[5]={1,0,0,0};
    //int len=5;hj
    int decemal=0;
    for(i=0;i<1;i++)
    {
        decemal = decemal+binary[i]*pow(2,j);
        j--;

    }
    printf("%d",decemal);
}
