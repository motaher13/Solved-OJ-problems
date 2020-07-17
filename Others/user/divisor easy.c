#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,c,p;
    while(scanf("%d",&n)==1)
    {
        m=sqrt(n);
        c=1;
        for(i=2;i<=m;i=(i==2? 3:i+2))
        {
            p=0;
            while(n%i==0)
            {

                p++;
                n=n/i;
            }
            if(p!=0)
                c=c*(p+1);

        }
        printf("%d\n",c);
    }

}

