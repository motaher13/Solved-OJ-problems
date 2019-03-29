#include<stdio.h>
int main()
{
    int i,j,k,l,ara[4][4];
    double x,y,e,f,g;
    while(scanf("%d %d %d",&ara[0][0],&ara[0][1],&ara[0][2])==3)
    {
        scanf("%d %d %d",&ara[1][0],&ara[1][1],&ara[1][2]);
        if(ara[0][0]==0 &&ara[0][1]==0 &&ara[0][2]==0 &&ara[1][0]==0 &&ara[1][1]==0 &&ara[1][2]==0)
            break;

            e=(double)(ara[0][2]*ara[1][1]-ara[0][1]*ara[1][2]);
            f=(double)(ara[0][0]*ara[1][2]-ara[0][2]*ara[1][0]);
            g=(double)(ara[0][0]*ara[1][1]-ara[0][1]*ara[1][0]);

            if(g==0)
                printf("No fixed point exists.\n");
            else{
            x=e/g;
            y=f/g;
            printf("The fixed point is at %.2lf %.2lf.\n",x,y);
            }

    }
    return 0;
}
