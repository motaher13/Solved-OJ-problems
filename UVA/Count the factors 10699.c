#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,p,s,u;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        l=n/2;
        p=0;
        s=0;
        u=n;
        for(i=2;i<=l;i=(i==2? 3:i+2))
        {
            while(n%i==0)
            {
                n=n/i;
                if(p!=i){
                    p=i;
                    s++;}
            }
        }
        if(n!=1)
            s++;
        printf("%d : %d\n",u,s);
    }
    return 0;
}
