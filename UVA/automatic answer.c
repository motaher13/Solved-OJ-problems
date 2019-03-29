#include<stdio.h>
int main()
{
    int i,j,k,l;
    scanf("%d",&i);
    while(i>0)
    {
        scanf("%d",&j);
        k=(j*315)+36962;
        l=(k%100)/10;
        if(l<0)
            l=-l;
        printf("%d\n",l);
        i--;

    }
    return 0;
}
