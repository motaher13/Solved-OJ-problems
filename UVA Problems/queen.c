#include<stdio.h>
int main()
{
    int x,y,x1,y1,i,j,k;
    while(scanf("%d %d %d %d",&x,&y,&x1,&y1))
    {
        if(x==0 && y==0 && x1==0 && y1==0)
            break;
        else if(x==x1 && y==y1)
            printf("0\n");
        else if(x==x1 || y==y1)
            printf("1\n");
        else if((x-x1)==(y-y1) || (x1-x)==(y-y1))
            printf("1\n");
        else
            printf("2\n");

    }
    return 0;
}
