#include <stdio.h>

int main()
{
int a,b,m,n,i,j,k,p[5000],end;
scanf("%d%d",&a,&b);
if (a>b){
    m=a;
    n=b;
}
else{
    n=a;
    m=b;
}
if (m<2)
{
    printf("no prime numbers in this range");
    return;
}

p[0]=2;
p[1]=3;
end=(m+1)/2;
for(i=2;i<end;i++)
	p[i]=p[i-1]+2;

k=3;
i=9;
while (i<=m)
{
    if (p[(k-1)/2]>0)
	for(j=(i-1)/2;j<end;j=j+k)
     		p[j]=0;

    k=k+2;
    i=k*k;
}
for(i=0;i<end;i++)
	if (p[i]>0 && p[i]>=n)
	    printf("%d\n",p[i]);

return 0;
}
