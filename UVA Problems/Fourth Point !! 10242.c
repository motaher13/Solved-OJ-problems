#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,p,q;
    double a[10][4],b,c,x,y;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a[0][0],&a[0][1],&a[1][0],&a[1][1],&a[2][0],&a[2][1],&a[3][0],&a[3][1])!=EOF)
    {
        for(i=0;i<3;i++)
            for(j=i+1;j<=3;j++)
                if(a[i][0]==a[j][0] && a[i][1]==a[j][1])
                    p=i,q=j;
          x=0,y=0;

        for(j=0;j<=3;j++)
            if(j!=p && j!=q)
            {
                x=x+a[j][0];
                y=y+a[j][1];
            }
        x=x-a[p][0];
        y=y-a[q][1];

        printf("%.3lf %.3lf\n",x,y);

    }
    return 0;
}
