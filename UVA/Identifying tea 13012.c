#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,s;
    while(scanf("%d",&n)==1)
    {
        s=0;
        for(i=0;i<5;i++){
            scanf("%d",&m);


            if(m==n)
                s++;}
        printf("%d\n",s);
    }
}
