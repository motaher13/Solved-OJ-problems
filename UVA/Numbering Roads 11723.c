#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,r,n,l=0;
    double m;
    while(scanf("%d %d",&r,&n)==2)
    {
        l++;
        if(r==0 && n==0)
            break;
        if(n>r)
            m=0;
        else if((r-n)<n)
            m=1;
        else{
        m=(double)(r-n)/n;
        m=ceil(m);}

        if(m>26)
            printf("Case %d: impossible\n",l);
        else
            printf("Case %d: %.0lf\n",l,m);
    }
    return 0;
}
