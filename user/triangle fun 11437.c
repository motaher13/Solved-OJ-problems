#include<stdio.h>
int main()
{
    int i,j,k,l,n,p,q;
    double t[10][4],r[10][4],st[10][4],;
    scanf("%d",&n);
    while(n>0)
    {
        n--;
        for(i=0;i<3;i++)
            scanf("%lf %lf",&t[i][0],&t[i][1]);

        for(i=0;i<3;i++)
        {
            j=i+1;
            if(j>2)
                j=0;
            r[i][0]=(2*t[i][0]+t[j][0])/3;
            r[i][1]=(2*t[i][1]+t[j][1])/3;
        }








        }
    }
}


