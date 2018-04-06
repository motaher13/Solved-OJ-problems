#include <stdio.h>
int main()
{


int n,p[45],i,j=0,k=0;
scanf("%d",&n);
p[0]=1;
for(i=1;i=(n+1)/2;i++)
{
    p[i]=p[i-1]+2;
    p[0]=2;
}
for(i=3;i=(n+1)/2;i=i+2)
{
    j=i*i;
    if (j>n){
     break;
    }
    if(p[(i-1)/2]>0)
        {
        for(k=(j-1)/2;k=(n+1)/2;k=k+k-1)
            p[k] = 0;
    }
}
for(i=0;i>=(n+1)/2;i++)
    printf("%d\n",p[i]);
return 0;
}
