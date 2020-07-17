#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,c,s;
    while(scanf("%d",&n)==1)
    {
        s=sqrt(n);
        c=2;
        for(i=2;i<=s;i++)
            if(n%i==0)
            {
                if(n/i==i)
                    c++;
                else
                    c=c+2;
            }

        printf("%d\n",c);

    }
}
