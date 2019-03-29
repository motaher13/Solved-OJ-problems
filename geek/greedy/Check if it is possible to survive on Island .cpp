#include <stdio.h>
#include<math.h>

int main() {
    int i,j,t,k,f,b;
    double s,m,n,o,p;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	while(t--)
	{
	    scanf("%lf %lf %lf",&s,&n,&m);
	    b=0;
	    if(m>n)
            b=1;
        else if(s>6 && n*6<m*7)
            b=1;
	    f=ceil(s*m/n);

	    if(b==0)
            printf("%d\n",f);
        else
            printf("-1\n");
	}
	return 0;
}
