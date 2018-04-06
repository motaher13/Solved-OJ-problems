#include<stdio.h>
int main()
{
    int m,i,j,k=0,l=0;
    scanf("%d",&i);
    for(m=0;m<i;m++)
    {
        scanf("%d",&j);
        if(j>0)
        {
            k++;
        }
        if(j<0)
        {
            l++;
        }
    }
    printf("%d %d",k,l);
    return 0;

}
